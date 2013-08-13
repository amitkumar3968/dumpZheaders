/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class NSNumber, NSString, WebInspectorRemoteChannel, WebInspectorServerWebViewConnectionController;

__attribute__((visibility("hidden")))
@interface WebInspectorServerWebViewConnection : NSObject {
@private
	WebInspectorRemoteChannel* _channel;
	WebInspectorServerWebViewConnectionController* _controller;
	NSString* _connectionIdentifier;
	NSString* _destination;
	NSNumber* _identifier;
}
@property(readonly, retain) NSString* connectionIdentifier;	// converted property
@property(readonly, retain) NSNumber* identifier;	// converted property
-(void)receivedDidClose:(id)received;
-(void)receivedData:(id)data;
-(void)sendMessageToBackend:(id)backend;
-(void)sendMessageToFrontend:(id)frontend;
-(void)clearChannel;
// converted property getter: -(id)identifier;
// converted property getter: -(id)connectionIdentifier;
-(void)dealloc;
-(BOOL)setupChannel;
-(id)initWithController:(id)controller connectionIdentifier:(id)identifier destination:(id)destination identifier:(id)identifier4;
@end
