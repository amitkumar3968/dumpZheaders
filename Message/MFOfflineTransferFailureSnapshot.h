/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCoding.h"

@class NSString;

@interface MFOfflineTransferFailureSnapshot : XXUnknownSuperclass <NSCoding> {
	NSString* _originalRemoteID;
	NSString* _originalMailboxID;
	unsigned long long _originalMessageFlags;
}
@property(readonly, assign, nonatomic) unsigned long long originalMessageFlags;	// @synthesize=_originalMessageFlags
@property(readonly, assign, nonatomic) NSString* originalMailboxID;	// @synthesize=_originalMailboxID
@property(readonly, assign, nonatomic) NSString* originalRemoteID;	// @synthesize=_originalRemoteID
// declared property getter: -(unsigned long long)originalMessageFlags;
// declared property getter: -(id)originalMailboxID;
// declared property getter: -(id)originalRemoteID;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithOriginalRemoteID:(id)originalRemoteID mailboxID:(id)anId messageFlags:(unsigned long long)flags;
@end
