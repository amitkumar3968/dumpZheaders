/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAnimationKeyframe.h"

@class NSDictionary, NSString;

@interface MCAnimationKeyframeFunction : MCAnimationKeyframe {
@private
	double mDuration;
	NSString* mFunction;
	NSDictionary* mFunctionParameters;
	double mFunctionTimeOffset;
	double mFunctionTimeFactor;
	float mInnerEaseInControl;
	float mInnerEaseOutControl;
}
@property(assign, nonatomic) float innerEaseOutControl;	// @synthesize=mInnerEaseOutControl
@property(assign, nonatomic) float innerEaseInControl;	// @synthesize=mInnerEaseInControl
@property(assign, nonatomic) double functionTimeFactor;	// @synthesize=mFunctionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// @synthesize=mFunctionTimeOffset
@property(retain, nonatomic) NSDictionary* functionParameters;	// @synthesize=mFunctionParameters
@property(copy, nonatomic) NSString* function;	// @synthesize=mFunction
@property(assign, nonatomic) double duration;	// @synthesize=mDuration
+(id)keyframeWithFunction:(id)function atTime:(double)time offsetKind:(int)kind forDuration:(double)duration;
// declared property getter: -(float)innerEaseOutControl;
// declared property getter: -(float)innerEaseInControl;
// declared property getter: -(double)functionTimeFactor;
// declared property getter: -(double)functionTimeOffset;
// declared property getter: -(double)duration;
-(void)_copySelfToSnapshot:(id)snapshot;
-(id)description;
// declared property setter: -(void)setInnerEaseOutControl:(float)control;
// declared property setter: -(void)setInnerEaseInControl:(float)control;
// declared property setter: -(void)setFunctionTimeFactor:(double)factor;
// declared property setter: -(void)setFunctionTimeOffset:(double)offset;
// declared property setter: -(void)setFunctionParameters:(id)parameters;
// declared property getter: -(id)functionParameters;
// declared property setter: -(void)setFunction:(id)function;
// declared property getter: -(id)function;
// declared property setter: -(void)setDuration:(double)duration;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint;
-(id)init;
@end

