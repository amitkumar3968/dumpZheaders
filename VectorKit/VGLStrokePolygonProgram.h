/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLSimpleRoadProgram.h"


__attribute__((visibility("hidden")))
@interface VGLStrokePolygonProgram : VGLSimpleRoadProgram {
@private
	int _uScale;
	float _scale;
	int _uStrokeColor;
	VGLColor _strokeColor;
	int _uTexturePolygonSampler;
	int _texturePolygonSampler;
	int _uIsPolygonSolidColor;
	int _isPolygonSolidColor;
	int _uIsToBeStroked;
	int _isToBeStroked;
	int _uPolygonColor;
	VGLColor _polygonColor;
}
@property(assign, nonatomic) VGLColor polygonColor;	// @synthesize=_polygonColor
@property(assign, nonatomic) int isToBeStroked;	// @synthesize=_isToBeStroked
@property(assign, nonatomic) int isPolygonSolidColor;	// @synthesize=_isPolygonSolidColor
@property(assign, nonatomic) int texturePolygonSampler;
@property(assign, nonatomic) float scale;	// @synthesize=_scale
@property(assign, nonatomic) VGLColor strokeColor;	// @synthesize=_strokeColor
+(id)program;
// declared property getter: -(VGLColor)polygonColor;
// declared property getter: -(int)isToBeStroked;
// declared property getter: -(int)isPolygonSolidColor;
// declared property getter: -(VGLColor)strokeColor;
// declared property getter: -(float)scale;
// declared property getter: -(int)texturePolygonSampler;
// declared property setter: -(void)setTexturePolygonSampler:(int)sampler;
// declared property setter: -(void)setPolygonColor:(VGLColor)color;
// declared property setter: -(void)setIsToBeStroked:(int)beStroked;
// declared property setter: -(void)setIsPolygonSolidColor:(int)color;
// declared property setter: -(void)setStrokeColor:(VGLColor)color;
// declared property setter: -(void)setScale:(float)scale;
-(id)init;
-(id)initWithVertName:(id)vertName fragName:(id)name;
@end

