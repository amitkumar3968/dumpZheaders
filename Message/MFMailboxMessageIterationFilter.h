/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "MFMessageIterationFilter.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSIndexSet;

@interface MFMailboxMessageIterationFilter : XXUnknownSuperclass <MFMessageIterationFilter> {
@private
	NSIndexSet* _mailboxes;
}
-(BOOL)filterMessageWithStatement:(sqlite3_stmt*)statement;
-(void)dealloc;
-(id)initWithMailboxes:(id)mailboxes;
@end

