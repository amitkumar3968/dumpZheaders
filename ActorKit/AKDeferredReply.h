/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ActorKit.framework/ActorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInvocation, NSConditionLock;

@interface AKDeferredReply : XXUnknownSuperclass {
@private
	NSInvocation* _invocation;
	NSConditionLock* _blockingLock;
}
@property(readonly, retain) NSInvocation* invocation;	// converted property
+(void)initialize;
+(id)currentReply;
-(void)dealloc;
-(id)initWithInvocation:(id)invocation andBlockingLock:(id)lock;
-(id)init;
-(void)sendReply;
-(void)setReturnValue:(void*)value;
// converted property getter: -(id)invocation;
-(void)resignCurrentReply;
-(void)becomeCurrentReply;
@end
