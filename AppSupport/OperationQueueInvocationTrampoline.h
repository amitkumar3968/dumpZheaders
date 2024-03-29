/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline : InvocationTrampoline {
	NSOperationQueue* _queue;
	int _priority;
}
-(void)forwardInvocation:(id)invocation;
-(void)dealloc;
-(id)initWithTarget:(id)target operationQueue:(id)queue priority:(int)priority;
@end

