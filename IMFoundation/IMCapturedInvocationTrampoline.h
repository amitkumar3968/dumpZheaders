/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMInvocationTrampoline.h"


__attribute__((visibility("hidden")))
@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline {
	id* _outInvocation;
}
-(void)forwardInvocation:(id)invocation;
-(id)initWithTarget:(id)target outInvocation:(id*)invocation;
@end

