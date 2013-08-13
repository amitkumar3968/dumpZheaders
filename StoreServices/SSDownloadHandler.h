/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SSXPCConnection, NSObject, NSArray;
@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;

@interface SSDownloadHandler : XXUnknownSuperclass {
@private
	SSXPCConnection* _controlConnection;
	id<SSDownloadHandlerDelegate> _delegate;
	NSObject<OS_dispatch_queue>* _delegateQueue;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSArray* _downloadPhasesToIgnore;
	long long _handlerID;
	SSXPCConnection* _observerConnection;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;
}
@property(readonly, assign) long long handlerIdentifier;
@property(assign) BOOL sessionsShouldBlockOtherDownloads;
@property(assign) BOOL sessionsNeedPowerAssertion;
@property(copy) NSArray* downloadPhasesToIgnore;
@property(assign) id<SSDownloadHandlerDelegate> delegate;
-(void)_setValue:(id)value forProperty:(const char*)property;
-(BOOL)_sendSessionPauseWithMessage:(id)message;
-(BOOL)_sendSessionHandleWithMessage:(id)message;
-(BOOL)_sendSessionCancelWithMessage:(id)message;
-(void)_sendDisconnectMessage;
-(BOOL)_sendAuthenticationSessionWithMessage:(id)message;
-(id)_newSessionWithMessage:(id)message;
-(void)_handleMessage:(id)message fromServerConnection:(id)serverConnection;
-(id)_controlConnection;
-(void)_connectToDaemon;
-(id)description;
// declared property setter: -(void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;
// declared property setter: -(void)setSessionsNeedPowerAssertion:(BOOL)assertion;
// declared property setter: -(void)setDownloadPhasesToIgnore:(id)ignore;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(BOOL)sessionsShouldBlockOtherDownloads;
// declared property getter: -(BOOL)sessionsNeedPowerAssertion;
-(void)resetDisavowedSessions;
// declared property getter: -(long long)handlerIdentifier;
// declared property getter: -(id)downloadPhasesToIgnore;
// declared property getter: -(id)delegate;
-(void)dealloc;
-(id)init;
@end
