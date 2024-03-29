/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "WebKit-Structs.h"

@class WebFrameView;

__attribute__((visibility("hidden")))
@interface WebFramePrivate : NSObject {
@private
	Frame* coreFrame;
	WebFrameView* webFrameView;
	WebScriptDebugger* scriptDebugger;
	id internalLoadDelegate;
	BOOL shouldCreateRenderers;
	BOOL includedInWebKitStatistics;
	BOOL isCommitting;
	BOOL isSingleLine;
}
-(void)setWebFrameView:(id)view;
-(void)finalize;
-(void)dealloc;
@end

