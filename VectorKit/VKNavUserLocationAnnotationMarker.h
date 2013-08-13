/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKMeshAnnotationMarker.h"

@class VGLMesh, VGLRenderState, VGLTexture, VGLDualTexturedMesh, VGLSingleTexturedMesh, VKAnimation;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker {
@private
	VGLDualTexturedMesh* _domeMesh;
	VGLSingleTexturedMesh* _arrowMesh;
	VGLSingleTexturedMesh* _rimMesh;
	VGLMesh* _dropShadowMesh;
	VGLRenderState* _renderState;
	BOOL _shouldBillboard;
	double _animationStartTime;
	double _lastFrameTimestamp;
	float _scale;
	BOOL _shouldShowCourse;
	double _presentationCourse;
	double _sizePoints;
	BOOL _stale;
	VGLTexture* _domeTexture;
	VGLTexture* _domeTextureGrey;
	VGLTexture* _arrowTexture;
	VGLTexture* _arrowTextureGrey;
	VGLTexture* _arrowShadowTexture;
	VGLTexture* _arrowShadowTextureGrey;
	VKAnimation* _puckStyleAnimation;
	int _puckStyle;
	float _greyPuckAlphaScale;
}
@property(assign, nonatomic) double presentationCourse;
@property(assign, nonatomic, getter=isStale) BOOL stale;	// @synthesize=_stale
@property(assign, nonatomic) float scale;	// @synthesize=_scale
@property(assign, nonatomic) BOOL shouldShowCourse;	// @synthesize=_shouldShowCourse
@property(assign, nonatomic) BOOL shouldBillboard;	// @synthesize=_shouldBillboard
// declared property getter: -(BOOL)shouldShowCourse;
// declared property getter: -(BOOL)shouldBillboard;
// declared property getter: -(BOOL)isStale;
// declared property setter: -(void)setScale:(float)scale;
// declared property getter: -(float)scale;
-(void)_updatePuckStyle;
-(void)_drawWithContext:(id)context puckState:(const XXStruct_hcpPaD*)state;
-(id)_newDropShadowMesh;
-(void)drawWithContext:(id)context;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)dealloc;
-(id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
// declared property setter: -(void)setStale:(BOOL)stale;
// declared property setter: -(void)setShouldShowCourse:(BOOL)showCourse;
// declared property setter: -(void)setShouldBillboard:(BOOL)billboard;
// declared property setter: -(void)setPresentationCourse:(double)course;
// declared property getter: -(double)presentationCourse;
@end

