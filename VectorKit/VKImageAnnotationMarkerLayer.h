/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKAnnotationMarkerLayer.h"

@class VGLRenderState, VKImage;

@interface VKImageAnnotationMarkerLayer : VKAnnotationMarkerLayer {
@private
	VKImage* _image;
	BOOL _drawsOnGround;
	double _rotationRadians;
	BOOL _shouldDraw;
	BOOL _hasCustomShaderMatrix;
	XXUnion_7lcBWC _shaderMatrix;
	BOOL _hasCustomModelMatrix;
	XXStruct_$zuyAD _modelMatrix;
	VGLRenderState* _renderState;
	float _scale;
	float _opacity;
}
@property(assign, nonatomic) float opacity;	// @synthesize=_opacity
@property(assign, nonatomic) float scale;	// @synthesize=_scale
@property(assign, nonatomic) double rotationRadians;	// @synthesize=_rotationRadians
@property(assign, nonatomic) BOOL drawsOnGround;	// @synthesize=_drawsOnGround
// declared property getter: -(float)opacity;
// declared property getter: -(float)scale;
// declared property setter: -(void)setRotationRadians:(double)radians;
// declared property getter: -(double)rotationRadians;
// declared property setter: -(void)setDrawsOnGround:(BOOL)ground;
// declared property getter: -(BOOL)drawsOnGround;
-(void)drawWithContext:(id)context;
-(void)layoutWithContext:(id)context;
-(BOOL)shouldSnapToPixelsWithContext:(id)context;
// declared property setter: -(void)setOpacity:(float)opacity;
// declared property setter: -(void)setScale:(float)scale;
-(void)setImage:(id)image;
-(void)dealloc;
-(id)init;
@end

