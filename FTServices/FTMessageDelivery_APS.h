/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessageDelivery.h"
#import "FTMessageQueueDelegate.h"
#import "APSConnectionDelegate.h"

@class NSMutableArray, APSConnection, NSMutableDictionary;

@interface FTMessageDelivery_APS : FTMessageDelivery <FTMessageQueueDelegate, APSConnectionDelegate> {
	Class _APSConnectionClass;
	Class _APSOutgoingMessageClass;
	APSConnection* _connection;
	int _messageSize;
	NSMutableArray* _enabledTopics;
	NSMutableDictionary* _ftMessageMap;
	NSMutableDictionary* _startDateMap;
	NSMutableDictionary* _bodyMap;
	NSMutableDictionary* _apsMessageMap;
	NSMutableDictionary* _timerMap;
	NSMutableDictionary* _deathTimerMap;
	NSMutableDictionary* _retriesMap;
}
+(id)sharedInstance;
-(int)maxMessageSize;
-(void)connection:(id)connection didFailToSendOutgoingMessage:(id)sendOutgoingMessage error:(id)error;
-(void)connection:(id)connection didSendOutgoingMessage:(id)message;
-(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(void)connection:(id)connection didChangeConnectedStatus:(BOOL)status;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)_serverBagLoaded:(id)loaded;
-(BOOL)sendMessage:(id)message;
-(void)cancelMessage:(id)message;
-(void)queue:(id)queue hitTimeoutForMessage:(id)message;
-(BOOL)busy;
-(void)_dequeueIfNeeded;
-(BOOL)_sendMessageAsynchronously:(id)asynchronously error:(id*)error;
-(void)invalidate;
-(void)_notifyDelegateAboutError:(id)error forMessage:(id)message;
-(void)_updateWiFiAssertions;
-(void)_powerLogEvent:(id)event dictionary:(id)dictionary;
-(id)_apsMessageForMessage:(id)message body:(id)body;
-(id)_apsMessageBodyForMessage:(id)message;
-(void)_updateTopics;
-(id)_requiredTopics;
-(void)_messageNeedsRetry:(id)retry;
-(void)_messageCompletelyTimedOut:(id)anOut;
-(void)_messageSendTimedOut:(id)anOut;
-(void)_sendMessage:(id)message ftMessage:(id)message2;
-(void)_noteMessageSent:(id)sent ftMessage:(id)message body:(id)body;
-(void)_noteMessageACKd:(id)kd ftMessage:(id)message;
-(void)_noteMessageSucceeded:(id)succeeded ftMessage:(id)message error:(id)error result:(id)result resultCode:(int)code;
-(void)_noteMessageFailed:(id)failed ftMessage:(id)message allowRetry:(BOOL)retry error:(id)error;
-(BOOL)_fillMessageParameters:(id*)parameters ftMessage:(id*)message;
-(id)_apsOutgoingMessageForFTMessage:(id)ftmessage;
-(id)_messageForAPSOutgoingMessage:(id)apsoutgoingMessage;
-(id)_bodyForMessage:(id)message;
-(int)_retryCountForMessage:(id)message;
-(id)_currentTimers;
-(id)allMessages;
-(id)_currentMessages;
-(id)_currentAPSMessages;
-(BOOL)_isBusyWithMessage:(id)message;
-(void)_clearMapForMessageID:(id)messageID;
-(void)_setMapForMessage:(id)message apsMessage:(id)message2 messageBody:(id)body timeoutTime:(double)time timeoutSelector:(SEL)selector retries:(id)retries;
-(void)_invalidateDeathTimerForMessageID:(id)messageID;
-(void)_invalidateTimerForMessageID:(id)messageID;
-(void)dealloc;
-(id)init;
@end
