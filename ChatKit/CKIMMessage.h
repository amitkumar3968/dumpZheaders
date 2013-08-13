/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMessage.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSCalendarDate, NSDate, NSAttributedString, IMMessage, CKConversation;

@interface CKIMMessage : XXUnknownSuperclass <CKMessage> {
@private
	IMMessage* _imMessage;
	NSArray* _parts;
	NSArray* _incompleteParts;
	NSDate* _placeHolderDate;
	BOOL _hasPostedComplete;
	int _partCount;
	int _incompletePartCount;
	float _cachedPercentComplete;
	unsigned _dateLoaded : 1;
	unsigned _observingFileTransferNotifications : 1;
	unsigned _shouldPlayReceivedTone : 1;
	NSAttributedString* _text;
	double _date;
	NSCalendarDate* _calendarDate;
	int _failedSendCount;
	CKConversation* _conversation;
}
@property(retain, nonatomic) IMMessage* IMMessage;
@property(retain) CKConversation* conversation;	// converted property
@property(assign) BOOL isFromDowngrading;	// converted property
@property(readonly, retain) NSArray* parts;	// converted property
@property(readonly, retain) NSCalendarDate* calendarDate;	// converted property
@property(readonly, assign) int failedSendCount;	// converted property
// converted property getter: -(id)conversation;
-(BOOL)shouldPlayReceivedTone;
-(BOOL)wantsSendStatus;
-(int)outgoingBubbleColor;
-(BOOL)containsAllDisplayableMessageParts:(id)parts;
-(BOOL)isFirstDisplayablePart:(id)part;
-(id)service;
-(BOOL)isSMS;
-(BOOL)isiMessage;
-(void)_fileTransferUpdated:(id)updated;
-(BOOL)postMessageReceivedIfNecessary;
-(void)updateMessageCompleteQuietly;
-(BOOL)messageIsComplete;
// converted property setter: -(void)setConversation:(id)conversation;
// declared property getter: -(id)IMMessage;
// declared property setter: -(void)setIMMessage:(id)message;
-(int)sequenceNumber;
-(int)rowID;
-(id)guid;
-(BOOL)isTypingIndicator;
-(BOOL)isPlaceholder;
// converted property getter: -(BOOL)isFromDowngrading;
// converted property setter: -(void)setIsFromDowngrading:(BOOL)downgrading;
-(id)description;
-(void)deleteMessageParts:(id)parts;
-(void)resetParts;
-(void)loadParts;
-(BOOL)hasAttachments;
// converted property getter: -(id)parts;
-(id)messagePartAtIndex:(unsigned)index;
-(unsigned)messagePartCount;
-(id)previewText;
-(id)attachmentText:(BOOL)text;
-(id)_rawPreviewText;
-(int)compare:(id)compare;
-(BOOL)isEqual:(id)equal;
-(BOOL)supportsDeliveryReceipts;
-(id)timeDelivered;
-(BOOL)isDelivered;
-(BOOL)isFromFilteredSender;
-(BOOL)isWaitingForDelivery;
-(BOOL)isFromMe;
// converted property getter: -(int)failedSendCount;
-(int)pendingCount;
-(BOOL)pending;
-(int)sentCount;
-(BOOL)partiallyFailedSend;
-(BOOL)failedSend;
-(void)markAsRead;
-(BOOL)isToEmailAddress;
-(BOOL)isOutgoing;
-(id)timeRead;
-(BOOL)isRead;
-(BOOL)hasBeenSent;
-(id)error;
-(id)subject;
-(id)sender;
-(id)address;
-(int)messageCount;
-(id)recipients;
// converted property getter: -(id)calendarDate;
-(float)percentComplete;
-(int)totalMessageCount;
-(void)_loadCounts;
-(void)_parseIMMessagePartsWithTextProcessingBlock:(id)textProcessingBlock fileTransferProcessingBlock:(id)block;
-(double)_loadDate;
-(void)_resetData;
-(void)dealloc;
-(id)initPlaceholderWithDate:(id)date;
-(id)initWithIMMessage:(id)immessage;
-(void)_observeFileTransfersIfNecessary;
@end

