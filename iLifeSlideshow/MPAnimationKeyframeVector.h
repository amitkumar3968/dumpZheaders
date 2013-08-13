/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MPAnimationKeyframe.h"

@class MPVector;

@interface MPAnimationKeyframeVector : MPAnimationKeyframe {
@private
	MPVector* _vector;
}
@property(copy, nonatomic) MPVector* vector;	// @synthesize=_vector
+(id)keyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;
+(id)keyframeVectorWithVector:(id)vector atTime:(double)time;
// declared property getter: -(id)vector;
// declared property setter: -(void)setVector:(id)vector;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initKeyframeVectorWithVector:(id)vector atTime:(double)time offsetType:(int)type;
-(id)keyframe;
@end
