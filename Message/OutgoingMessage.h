/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MailMessage.h"

@class MessageBody, MutableMessageHeaders;

@interface OutgoingMessage : MailMessage {
@private
	MessageBody* _messageBody;
	MutableMessageHeaders* _messageHeaders;
}
@property(retain) id mutableHeaders;	// converted property
@property(retain) MessageBody* messageBody;	// converted property
-(unsigned)messageSize;
-(id)headersIfAvailable;
-(id)headers;
// converted property setter: -(void)setMutableHeaders:(id)headers;
// converted property getter: -(id)mutableHeaders;
-(BOOL)messageData:(id*)data messageSize:(unsigned*)size isComplete:(BOOL*)complete downloadIfNecessary:(BOOL)necessary;
-(id)messageData;
-(id)messageBodyIfAvailable;
// converted property getter: -(id)messageBody;
-(id)messageStore;
// converted property setter: -(void)setMessageBody:(id)body;
-(void)dealloc;
@end

