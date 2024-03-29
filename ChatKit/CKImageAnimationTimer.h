/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : XXUnknownSuperclass {
@private
	unsigned _frame;
	NSMutableSet* _observers;
	CADisplayLink* _displayLink;
}
@property(retain, nonatomic) CADisplayLink* displayLink;	// @synthesize=_displayLink
@property(retain, nonatomic) NSMutableSet* observers;	// @synthesize=_observers
@property(readonly, assign) unsigned frame;	// converted property
+(id)sharedTimer;
// declared property setter: -(void)setDisplayLink:(id)link;
// declared property getter: -(id)displayLink;
// declared property setter: -(void)setObservers:(id)observers;
// declared property getter: -(id)observers;
-(void)animationTimerFired;
-(void)removeAnimationTimerObserver:(id)observer;
-(void)addAnimationTimerObserver:(id)observer;
// converted property getter: -(unsigned)frame;
-(id)init;
-(void)dealloc;
@end

