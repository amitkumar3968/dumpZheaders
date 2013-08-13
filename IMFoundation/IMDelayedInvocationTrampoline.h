/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMInvocationTrampoline.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
	NSArray* _modes;
	double _delay;
}
-(void)forwardInvocation:(id)invocation;
-(void)dealloc;
-(id)initWithTarget:(id)target delay:(double)delay modes:(id)modes;
@end

