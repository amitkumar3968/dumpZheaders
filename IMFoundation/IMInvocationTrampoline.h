/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface IMInvocationTrampoline : XXUnknownSuperclass {
	id _target;
}
@property(retain) id target;	// @synthesize=_target
// declared property setter: -(void)setTarget:(id)target;
// declared property getter: -(id)target;
-(void)forwardInvocation:(id)invocation;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)performInvocation:(id)invocation;
-(void)dealloc;
@end

