/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKAnnotationMarkerLayer.h"

@class UIColor, VGLMesh, VKAnimation;

@interface VKCircleAnnotationMarkerLayer : VKAnnotationMarkerLayer {
@private
	UIColor* _fillColor;
	float _fillColorComponents[4];
	float _radius;
	float _presentationRadius;
	double _distanceRadius;
	double _presentationDistanceRadius;
	BOOL _useDistanceRadius;
	float _minRadius;
	VKAnimation* _radiusAnimation;
	XXStruct_$zuyAD _modelMatrix;
	XXStruct_$zuyAD _inverseMatrix;
	VGLMesh* _strokeMesh;
	float _strokeWidth;
	UIColor* _strokeColor;
	float _strokeColorComponents[4];
	int _strokeTriangleCount;
	XXStruct_taVrlB _localEyePos;
	XXStruct_taVrlB _localEyeDir;
	BOOL _hasDistanceRadiusToScreenRadiusMultiplier;
	float _distanceRadiusToScreenRadiusMultiplier;
}
@property(assign, nonatomic) float strokeWidth;	// @synthesize=_strokeWidth
@property(assign, nonatomic) float minRadius;	// @synthesize=_minRadius
@property(assign, nonatomic) double distanceRadius;	// @synthesize=_distanceRadius
@property(assign, nonatomic) float radius;	// @synthesize=_radius
@property(retain, nonatomic) UIColor* strokeColor;	// @synthesize=_strokeColor
@property(retain, nonatomic) UIColor* fillColor;	// @synthesize=_fillColor
// declared property getter: -(id)strokeColor;
// declared property getter: -(float)strokeWidth;
// declared property setter: -(void)setMinRadius:(float)radius;
// declared property getter: -(float)minRadius;
// declared property getter: -(double)distanceRadius;
// declared property getter: -(float)radius;
// declared property getter: -(id)fillColor;
-(void)drawWithContext:(id)context;
-(void)layoutWithContext:(id)context;
// declared property setter: -(void)setDistanceRadius:(double)radius;
// declared property setter: -(void)setRadius:(float)radius;
-(void)_createStrokeMeshWithTriangleCount:(int)triangleCount context:(id)context;
// declared property setter: -(void)setStrokeWidth:(float)width;
// declared property setter: -(void)setStrokeColor:(id)color;
// declared property setter: -(void)setFillColor:(id)color;
-(void)dealloc;
@end

