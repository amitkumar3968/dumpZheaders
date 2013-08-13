/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ActorKit-Structs.h"

@class NSThread, NSConditionLock;

@interface AKDispatchQueue : XXUnknownSuperclass {
@private
	int _kqueueFD;
	int _keventFDs[2];
	NSThread* _thread;
	qed_queue_u* _queue;
	NSConditionLock* _runStateLock;
}
@property(readonly, assign) qed_queue_u* queue;	// converted property
+(id)newThreadRunLoopDispatchQueue;
+(id)migrantDispatchQueue;
+(id)currentRunLoopDispatchQueue;
-(void)stop;
-(void)start;
-(void)runThreadDispatchQueue:(id)queue;
-(void)_afterStartedAddRunLoopSourceTo:(id)to;
// converted property getter: -(qed_queue_u*)queue;
-(void)dealloc;
-(id)init;
-(void)switchToState:(id)state;
@end

