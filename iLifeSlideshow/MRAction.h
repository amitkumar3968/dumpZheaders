/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, MCAction, MRLayer, NSInvocation;

@interface MRAction : XXUnknownSuperclass {
	MCAction* mMCAction;
	NSInvocation* mInvocation;
	id mSender;
	MRLayer* mResolvedTarget;
	NSMutableDictionary* mStates;
	double mTime;
	id mSpecificObject;
}
@property(retain) id specificObject;	// @synthesize=mSpecificObject
@property(assign, nonatomic) double time;	// @synthesize=mTime
@property(retain) NSMutableDictionary* states;	// @synthesize=mStates
@property(retain) MRLayer* resolvedTarget;	// @synthesize=mResolvedTarget
@property(retain, nonatomic) id sender;	// @synthesize=mSender
@property(readonly, assign) MCAction* action;	// @synthesize=mMCAction
// declared property setter: -(void)setSpecificObject:(id)object;
// declared property getter: -(id)specificObject;
// declared property setter: -(void)setTime:(double)time;
// declared property getter: -(double)time;
// declared property setter: -(void)setStates:(id)states;
// declared property getter: -(id)states;
// declared property setter: -(void)setResolvedTarget:(id)target;
// declared property getter: -(id)resolvedTarget;
// declared property getter: -(id)sender;
// declared property getter: -(id)action;
-(void)_resolveTargetPath:(id)path;
-(double)invoke;
// declared property setter: -(void)setSender:(id)sender;
-(id)description;
-(void)dealloc;
-(id)initWithSelector:(SEL)selector sender:(id)sender andTargetPath:(id)path inRenderer:(id)renderer;
-(id)initWithAction:(id)action andTarget:(id)target;
-(id)initWithAction:(id)action inRenderer:(id)renderer;
@end
