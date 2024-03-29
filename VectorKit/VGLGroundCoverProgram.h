/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLProgram.h"


__attribute__((visibility("hidden")))
@interface VGLGroundCoverProgram : VGLProgram {
@private
	int _uVegetationAlpha;
	float _vegetationAlpha;
	int _uLandSampler;
	int _landSampler;
	int _uVegetationSampler;
	int _vegetationSampler;
}
@property(assign, nonatomic) int vegetationSampler;	// @synthesize=_vegetationSampler
@property(assign, nonatomic) int landSampler;	// @synthesize=_landSampler
@property(assign, nonatomic) float vegetationAlpha;	// @synthesize=_vegetationAlpha
+(id)program;
// declared property getter: -(int)vegetationSampler;
// declared property getter: -(int)landSampler;
// declared property getter: -(float)vegetationAlpha;
// declared property setter: -(void)setVegetationSampler:(int)sampler;
// declared property setter: -(void)setLandSampler:(int)sampler;
// declared property setter: -(void)setVegetationAlpha:(float)alpha;
-(id)init;
@end

