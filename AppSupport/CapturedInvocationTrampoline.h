/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "InvocationTrampoline.h"


@interface CapturedInvocationTrampoline : InvocationTrampoline {
	id* _outInvocation;
}
-(void)forwardInvocation:(id)invocation;
-(id)initWithTarget:(id)target outInvocation:(id*)invocation;
@end
