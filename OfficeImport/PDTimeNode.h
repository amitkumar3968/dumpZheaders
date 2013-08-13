/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PDCmdBehavior, PDAnimateColorBehavior, PDParallelTimeNodeGroup, PDSequentialTimeNodeGroup, PDAudioMediaNode, NSMutableArray, PDVideoMediaNode, PDAnimateTimeBehavior, PDAnimateEffectBehavior, PDSetBehavior, PDAnimateMotionBehavior, PDAnimateRotateBehavior, PDAnimateScaleBehavior;

__attribute__((visibility("hidden")))
@interface PDTimeNode : XXUnknownSuperclass {
@private
	PDAnimateTimeBehavior* mTimeBehavior;
	PDAnimateEffectBehavior* mEffectBehavior;
	PDAnimateMotionBehavior* mMotionBehavior;
	PDAnimateRotateBehavior* mRotateBehavior;
	PDAnimateScaleBehavior* mScaleBehavior;
	PDAnimateColorBehavior* mColorBehavior;
	PDAudioMediaNode* mAudio;
	PDVideoMediaNode* mVideo;
	PDParallelTimeNodeGroup* mParallelTimeNodeGroup;
	PDSequentialTimeNodeGroup* mSequentialTimeNodeGroup;
	NSMutableArray* mTimeConditionList;
	PDSetBehavior* mSetBehavior;
	PDCmdBehavior* mCmdBehavior;
}
@property(retain) id cmdBehavior;	// converted property
@property(retain) id behavior;	// converted property
@property(retain) id timeConditions;	// converted property
@property(retain) id sequential;	// converted property
@property(retain) id parallel;	// converted property
@property(retain) id video;	// converted property
@property(retain) id audio;	// converted property
@property(retain) id colorBehavior;	// converted property
@property(retain) id scaleBehavior;	// converted property
@property(retain) id rotateBehavior;	// converted property
@property(retain) id motionBehavior;	// converted property
@property(retain) id effectBehavior;	// converted property
@property(retain) id timeBehavior;	// converted property
// converted property setter: -(void)setCmdBehavior:(id)behavior;
// converted property getter: -(id)cmdBehavior;
// converted property setter: -(void)setBehavior:(id)behavior;
// converted property getter: -(id)behavior;
// converted property setter: -(void)setTimeConditions:(id)conditions;
// converted property getter: -(id)timeConditions;
// converted property setter: -(void)setSequential:(id)sequential;
// converted property getter: -(id)sequential;
// converted property setter: -(void)setParallel:(id)parallel;
// converted property getter: -(id)parallel;
// converted property setter: -(void)setVideo:(id)video;
// converted property getter: -(id)video;
// converted property setter: -(void)setAudio:(id)audio;
// converted property getter: -(id)audio;
// converted property setter: -(void)setColorBehavior:(id)behavior;
// converted property getter: -(id)colorBehavior;
// converted property setter: -(void)setScaleBehavior:(id)behavior;
// converted property getter: -(id)scaleBehavior;
// converted property setter: -(void)setRotateBehavior:(id)behavior;
// converted property getter: -(id)rotateBehavior;
// converted property setter: -(void)setMotionBehavior:(id)behavior;
// converted property getter: -(id)motionBehavior;
// converted property setter: -(void)setEffectBehavior:(id)behavior;
// converted property getter: -(id)effectBehavior;
// converted property setter: -(void)setTimeBehavior:(id)behavior;
// converted property getter: -(id)timeBehavior;
-(id)commonBehavior;
-(void)dealloc;
-(id)init;
@end
