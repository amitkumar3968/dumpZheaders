/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, MessageLibrary;

@interface MessageDetails : XXUnknownSuperclass {
	MessageLibrary* library;
	unsigned libraryID;
	unsigned long long messageFlags;
	unsigned long uid;
	unsigned long encoding;
	BOOL isInvalid;
	int mailboxID;
	long long conversationHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;
}
@property(readonly, assign) unsigned libraryID;	// converted property
@property(readonly, assign) unsigned long long messageFlags;	// converted property
@property(readonly, assign) unsigned long uid;	// converted property
@property(readonly, retain) NSString* externalID;	// converted property
// converted property getter: -(id)externalID;
-(id)copyMessageInfo;
-(double)dateSentAsTimeIntervalSince1970;
-(double)dateReceivedAsTimeIntervalSince1970;
-(id)mailbox;
-(id)messageID;
// converted property getter: -(unsigned long long)messageFlags;
-(unsigned)mailboxID;
// converted property getter: -(unsigned)libraryID;
-(id)remoteID;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)init;
// converted property getter: -(unsigned long)uid;
-(id)description;
-(void)dealloc;
@end
