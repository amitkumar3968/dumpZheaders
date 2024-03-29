/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, FTMessage, NSMutableArray;
@protocol FTMessageQueueDelegate;

@interface FTMessageQueue : XXUnknownSuperclass {
	NSMutableArray* _queue;
	NSMutableArray* _addDates;
	id<FTMessageQueueDelegate> _delegate;
}
@property(retain) NSMutableArray* _addDates;	// @synthesize
@property(retain) NSMutableArray* _queue;	// @synthesize
@property(assign) id<FTMessageQueueDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign) NSArray* messages;
@property(readonly, assign) int count;
@property(readonly, assign) FTMessage* topMessage;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)set_addDates:(id)dates;
// declared property getter: -(id)_addDates;
// declared property setter: -(void)set_queue:(id)queue;
// declared property getter: -(id)_queue;
-(BOOL)removeMessage:(id)message;
-(BOOL)addMessage:(id)message;
-(id)dequeueTopMessage;
-(void)removeAllMessages;
-(void)_timeoutHit;
-(void)_setTimeout;
-(void)_clearTimeout;
// declared property getter: -(int)count;
// declared property getter: -(id)messages;
// declared property getter: -(id)topMessage;
-(void)dealloc;
-(id)init;
@end

