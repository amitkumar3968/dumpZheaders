/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CKTranscriptBubbleData;
@protocol CKMessage;

@interface CKTranscriptTransaction : XXUnknownSuperclass {
	CKTranscriptBubbleData* _bubbleInfo;
	NSMutableArray* _addedMessages;
	NSMutableArray* _removedMessages;
	NSMutableArray* _readMessages;
	NSMutableArray* _deliveredMessages;
	NSMutableArray* _errorChangedMessages;
	id<CKMessage> _currentReadMessage;
	id<CKMessage> _currentDeliveredMessage;
	BOOL _mutateTypingIndicator;
	int _typingIndicatorCount;
	id<CKMessage> _lastTypingIndicatorInserted;
}
-(void)commitChangesWithHandler:(id)handler;
-(void)_processInsertTypingIndicatorWithInserts:(id)inserts;
-(void)_processMessageInsert:(id)insert inserts:(id)inserts;
-(void)_processErrorInsert:(id)insert inserts:(id)inserts;
-(void)_processReadMessageInsert:(id)insert inserts:(id)inserts;
-(void)_processDeliveredMessageInsert:(id)insert inserts:(id)inserts;
-(void)_processRemovesToClearFailureForMessage:(id)message removes:(id)removes;
-(void)_processRemovesToPrepareMessageForFailure:(id)failure removes:(id)removes;
-(void)_processRemovesToPrepareMessageForRead:(id)read removes:(id)removes;
-(void)_processRemovesToPrepareMessageForDelivered:(id)delivered removes:(id)removes;
-(void)_processRemovesToClearDeliveredFromMessage:(id)message removes:(id)removes;
-(void)hideTypingIndicator;
-(void)showTypingIndicator:(id)indicator;
-(void)messageErrorChanged:(id)changed;
-(void)messageDelivered:(id)delivered;
-(void)messageRead:(id)read;
-(void)removeMessage:(id)message;
-(void)addMessage:(id)message;
-(void)_uniqueArray:(id)array;
-(BOOL)_arrrayPassesTest:(id)test test:(id)test2;
-(BOOL)_arrayContainsMessage:(id)message message:(id)message2;
-(void)_filterMessageArray:(id)array usingBlock:(id)block;
-(BOOL)_messageIsOlder:(id)older thanMessage:(id)message includeEqual:(BOOL)equal;
-(BOOL)_messageIsNewer:(id)newer thanMessage:(id)message includeEqual:(BOOL)equal;
-(void)dealloc;
-(id)initWithBubbleInfo:(id)bubbleInfo;
-(id)init;
@end

