/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLContext.h"

@class VKViewTransform, VGLTexture, VKCamera, VGLRoadAtlas;
@protocol VGLCanvas;

__attribute__((visibility("hidden")))
@interface VKDrawContext : VGLContext {
@private
	int _frameNumber;
	double _timestamp;
	id<VGLCanvas> _canvas;
	VKCamera* _camera;
	VKViewTransform* _viewTransform;
	XXStruct_$zuyAD _modelMatrix;
	XXStruct_$zuyAD _modelViewProjectionMatrix;
	XXUnion_7lcBWC _shaderMatrix;
	XXStruct_taVrlB _light;
	BOOL _cullFaceEnabled;
	unsigned _mapLayerPosition;
	VGLTexture* _alphaTexture;
	VGLRoadAtlas* _alphaAtlas;
	VGLTexture* _mediumTrafficTexture;
	VGLTexture* _slowTrafficTexture;
	VGLTexture* _borderTexture;
	BOOL _gesturing;
	BOOL _buildingsAreAnimating;
	double _styleZ;
}
@property(readonly, assign, nonatomic) double styleZ;	// @synthesize=_styleZ
@property(assign, nonatomic) BOOL buildingsAreAnimating;	// @synthesize=_buildingsAreAnimating
@property(assign, nonatomic, getter=isGesturing) BOOL gesturing;	// @synthesize=_gesturing
@property(readonly, assign, nonatomic) VGLTexture* borderTexture;
@property(readonly, assign, nonatomic) VGLTexture* slowTrafficTexture;
@property(readonly, assign, nonatomic) VGLTexture* mediumTrafficTexture;
@property(readonly, assign, nonatomic) VGLTexture* alphaTexture;	// @synthesize=_alphaTexture
@property(readonly, assign, nonatomic) VGLRoadAtlas* alphaAtlas;	// @synthesize=_alphaAtlas
@property(assign, nonatomic) unsigned mapLayerPosition;	// @synthesize=_mapLayerPosition
@property(assign, nonatomic) XXStruct_taVrlB light;	// @synthesize=_light
@property(readonly, assign, nonatomic) XXUnion_7lcBWC shaderMatrix;	// @synthesize=_shaderMatrix
@property(readonly, assign, nonatomic) const XXStruct_$zuyAD* modelViewProjectionMatrix;
@property(assign, nonatomic) const XXStruct_$zuyAD* modelMatrix;
@property(retain, nonatomic) VKViewTransform* viewTransform;	// @synthesize=_viewTransform
@property(readonly, assign, nonatomic) VKCamera* camera;	// @synthesize=_camera
@property(assign, nonatomic) id<VGLCanvas> canvas;	// @synthesize=_canvas
@property(assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(assign, nonatomic) int frameNumber;	// @synthesize=_frameNumber
// declared property setter: -(void)setBuildingsAreAnimating:(BOOL)animating;
// declared property getter: -(BOOL)buildingsAreAnimating;
// declared property getter: -(double)styleZ;
// declared property setter: -(void)setGesturing:(BOOL)gesturing;
// declared property getter: -(BOOL)isGesturing;
// declared property getter: -(id)alphaTexture;
// declared property setter: -(void)setMapLayerPosition:(unsigned)position;
// declared property getter: -(unsigned)mapLayerPosition;
// declared property setter: -(void)setLight:(XXStruct_taVrlB)light;
// declared property getter: -(XXStruct_taVrlB)light;
// declared property getter: -(XXUnion_7lcBWC)shaderMatrix;
// declared property setter: -(void)setViewTransform:(id)transform;
// declared property getter: -(id)viewTransform;
// declared property getter: -(id)camera;
// declared property setter: -(void)setCanvas:(id)canvas;
// declared property getter: -(id)canvas;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property getter: -(double)timestamp;
// declared property setter: -(void)setFrameNumber:(int)number;
// declared property getter: -(int)frameNumber;
-(float)styleZAdjust;
-(void)startFrameWithCamera:(id)camera;
// declared property getter: -(const XXStruct_$zuyAD*)modelViewProjectionMatrix;
// declared property getter: -(const XXStruct_$zuyAD*)modelMatrix;
// declared property setter: -(void)setModelMatrix:(const XXStruct_$zuyAD*)matrix;
-(void)dealloc;
// declared property getter: -(id)borderTexture;
// declared property getter: -(id)mediumTrafficTexture;
// declared property getter: -(id)slowTrafficTexture;
// declared property getter: -(id)alphaAtlas;
-(void)debugDrawPath:(int)path pixels:(CGSize*)pixels color:(VGLColor)color;
-(void)debugDrawPath:(int)path points:(CGSize*)points color:(VGLColor)color;
-(void)debugDrawString:(id)string pixel:(CGSize)pixel color:(VGLColor)color fontSize:(float)size;
-(void)debugDrawString:(id)string point:(CGSize)point color:(VGLColor)color fontSize:(float)size;
-(void)debugDrawString:(id)string worldPoint:(XXStruct_taVrlB)point color:(VGLColor)color fontSize:(float)size;
-(void)debugDrawAsteriskAtPixel:(CGSize)pixel color:(VGLColor)color;
-(void)debugDrawAsteriskAtPoint:(CGSize)point color:(VGLColor)color;
-(void)debugDrawAsteriskAtWorldPoint:(XXStruct_taVrlB)worldPoint color:(VGLColor)color;
-(CGSize)pixelForPoint:(CGSize)point;
-(CGSize)pixelForWorldPoint:(XXStruct_taVrlB)worldPoint;
@end

