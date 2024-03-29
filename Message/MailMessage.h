/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFMessageInfo;

@interface MailMessage : XXUnknownSuperclass {
	unsigned long long _messageFlags;
	unsigned char _subjectPrefixLength;
	unsigned long long _modSequenceNumber;
	MFMessageInfo* _info;
}
@property(assign) unsigned long long modSequenceNumber;
@property(retain) id subject;	// converted property
@property(assign) unsigned long long messageFlags;	// converted property
+(unsigned)displayablePriorityForPriority:(int)priority;
+(unsigned)validatePriority:(int)priority;
+(Class)dataMessageStoreToUse;
+(id)forwardedMessagePrefixWithSpacer:(BOOL)spacer;
-(void)dealloc;
-(id)externalConversationID;
-(id)copyMessageInfo;
-(BOOL)shouldSetSummary;
-(void)setSummary:(id)summary;
-(void)setSubject:(id)subject to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceived:(double)received dateSent:(double)sent messageIDHash:(long long)hash conversationIDHash:(long long)hash9 summary:(id)summary withOptions:(unsigned)options;
-(void)setMutableInfoFromMessage:(id)message;
-(unsigned short)numberOfAttachments;
-(id)URL;
-(id)originalMailboxURL;
-(id)remoteMailboxURL;
-(id)account;
-(id)loadMeetingMetadata;
-(id)loadMeetingData;
-(id)loadMeetingExternalID;
// converted property setter: -(void)setSubject:(id)subject;
// converted property getter: -(id)subject;
-(id)subjectNotIncludingReAndFwdPrefix;
-(id)subjectAndPrefixLength:(unsigned*)length;
-(id)mailbox;
-(void)markAsNotFlagged;
-(void)markAsFlagged;
-(void)markAsForwarded;
-(void)markAsReplied;
-(void)markAsNotViewed;
-(void)markAsViewed;
-(void)loadCachedHeaderValuesFromHeaders:(id)headers;
-(id)refreshedMessage;
-(int)priority;
-(void)setPriorityFromHeaders:(id)headers;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)committing;
// converted property setter: -(void)setMessageFlags:(unsigned long long)flags;
// converted property getter: -(unsigned long long)messageFlags;
// declared property setter: -(void)setModSequenceNumber:(unsigned long long)number;
// declared property getter: -(unsigned long long)modSequenceNumber;
-(id)mailMessageStore;
-(id)messageStore;
@end

