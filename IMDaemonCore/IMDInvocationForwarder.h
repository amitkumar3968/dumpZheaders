/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableArray;

@interface IMDInvocationForwarder : XXUnknownSuperclass {
	NSMutableArray* _targets;
	NSLock* _lock;
}
@property(retain, nonatomic) NSLock* _lock;	// @synthesize
@property(retain, nonatomic) NSMutableArray* _targets;	// @synthesize
// declared property setter: -(void)set_lock:(id)lock;
// declared property getter: -(id)_lock;
// declared property setter: -(void)set_targets:(id)targets;
// declared property getter: -(id)_targets;
-(void)forwardInvocation:(id)invocation;
-(BOOL)respondsToSelector:(SEL)selector;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)removeTarget:(id)target;
-(void)addTarget:(id)target;
-(void)dealloc;
-(id)initWithTargets:(id)targets;
@end

