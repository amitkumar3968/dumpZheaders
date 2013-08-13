/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"

@class WebInspectorServerWebViewConnection;

__attribute__((visibility("hidden")))
@interface WebInspectorRemoteChannel : NSObject {
@private
	WebInspectorServerWebViewConnection* _remote;
	WebInspectorClient* _local;
}
+(id)createChannelForPageId:(unsigned)pageId connection:(id)connection;
-(void)sendMessageToBackend:(id)backend;
-(void)sendMessageToFrontend:(id)frontend;
-(void)closeFromRemoteSide;
-(void)closeFromLocalSide;
-(id)initWithRemote:(id)remote local:(WebInspectorClient*)local;
@end
