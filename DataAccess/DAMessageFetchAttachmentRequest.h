/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface DAMessageFetchAttachmentRequest : XXUnknownSuperclass {
	NSString* _messageID;
	NSString* _attachmentName;
}
@property(readonly, retain) NSString* messageID;	// converted property
@property(readonly, retain) NSString* attachmentName;	// converted property
// converted property getter: -(id)attachmentName;
// converted property getter: -(id)messageID;
-(void)dealloc;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)initWithAttachmentName:(id)attachmentName andMessageServerID:(id)anId;
@end

