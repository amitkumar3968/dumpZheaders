/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MessageConsumer.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "QueryProgressMonitor.h"

@class NSMutableArray;

@interface _MFMessageCollector : XXUnknownSuperclass <MessageConsumer, QueryProgressMonitor> {
	NSMutableArray* messages;
}
@property(readonly, retain) NSMutableArray* messages;	// converted property
-(BOOL)shouldCancel;
-(void)newMessagesAvailable:(id)available;
-(id)copyMessages;
// converted property getter: -(id)messages;
-(void)dealloc;
-(id)init;
@end
