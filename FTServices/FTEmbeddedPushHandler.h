/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTPushHandler.h"
#import "APSConnectionDelegate.h"

@class APSConnection, NSData;

@interface FTEmbeddedPushHandler : FTPushHandler <APSConnectionDelegate> {
	APSConnection* _apsConnection;
	NSData* _cachedPushToken;
	Class _APSConnectionClass;
	int _cachedStatus;
}
-(void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;
-(void)connectionDidReconnect:(id)connection;
-(void)connection:(id)connection didFailToSendOutgoingMessage:(id)sendOutgoingMessage error:(id)error;
-(void)connection:(id)connection didSendOutgoingMessage:(id)message;
-(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)_handlePendingMessagePush:(id)push;
-(void)_handleGenericDataPush:(id)push;
-(void)_handleGenericCommandPush:(id)push;
-(void)_handleEmailConfirmedPush:(id)push;
-(void)_handleProfileHandlesUpdatedPush:(id)push;
-(void)_handleDevicesUpdatedPush:(id)push;
-(void)_handleIncomingReadReceipt:(id)receipt;
-(void)_handleIncomingMessageError:(id)error;
-(void)_handleIncomingDeliveryReceipt:(id)receipt;
-(void)_handleIncomingAttachmentMessage:(id)message;
-(void)_handleIncomingTextMessage:(id)message;
-(void)_handleRelayCancelPush:(id)push;
-(void)_handleRelayUpdatePush:(id)push;
-(void)_handleRelayInitatePush:(id)push;
-(void)_handleSendPush:(id)push;
-(void)_handleCancelPush:(id)push;
-(void)_handleRejectPush:(id)push;
-(void)_handleAcceptPush:(id)push;
-(void)_handleReregisterPush:(id)push;
-(void)_handleReloadBagPush:(id)push;
-(void)_handleInitatePush:(id)push;
-(void)requestKeepAlive;
-(int)connectionStatus;
-(id)pushToken;
-(void)setRegistered:(BOOL)registered;
-(void)_ignoreIncomingPushes;
-(void)_acceptIncomingPushes;
-(void)updateTopics;
-(void)_updateTopics;
-(void)dealloc;
-(id)initWithTopics:(id)topics;
@end

