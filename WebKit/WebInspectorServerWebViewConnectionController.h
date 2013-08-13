/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>

@class WebInspectorServer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WebInspectorServerWebViewConnectionController : NSObject {
@private
	WebInspectorServer* _server;
	NSMutableDictionary* _openConnections;
	BOOL _hasScheduledPush;
}
-(void)sendMessageToFrontend:(id)frontend userInfo:(id)info;
-(void)connectionClosing:(id)closing;
-(void)receivedMessage:(id)message userInfo:(id)info;
-(void)_receivedConnectionDied:(id)died;
-(void)_receivedIndicate:(id)indicate;
-(void)_receivedGetListing:(id)listing;
-(void)_receivedDidClose:(id)_received;
-(void)_receivedData:(id)data;
-(void)_receivedSetup:(id)setup;
-(void)pushListing;
-(void)pushListing:(id)listing;
-(void)_pushListing:(id)listing;
-(id)_listingForWebView:(id)webView pageId:(id)anId registry:(id)registry;
-(void)closeAllConnections;
-(void)dealloc;
-(id)initWithServer:(id)server;
@end

