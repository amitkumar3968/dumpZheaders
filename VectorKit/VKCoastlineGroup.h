/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VGLCullableMesh.h"
#import "VectorKit-Structs.h"

@class VKStyle;

__attribute__((visibility("hidden")))
@interface VKCoastlineGroup : VGLCullableMesh {
@private
	VKStyle* _style;
	BOOL _visible;
	XXStruct_ZUkpeA _offsetDirection;
	VGLColor _shadowColor;
	VGLColor _antialiasingBrushColor;
	float _shadowWidth;
	float _antialiasingBrushWidth;
}
@property(assign, nonatomic) float antialiasingBrushWidth;	// @synthesize=_antialiasingBrushWidth
@property(assign, nonatomic) float shadowWidth;	// @synthesize=_shadowWidth
@property(assign, nonatomic) VGLColor antialiasingBrushColor;	// @synthesize=_antialiasingBrushColor
@property(assign, nonatomic) VGLColor shadowColor;	// @synthesize=_shadowColor
@property(assign, nonatomic) XXStruct_ZUkpeA offsetDirection;	// @synthesize=_offsetDirection
@property(assign, nonatomic) BOOL visible;	// @synthesize=_visible
@property(readonly, assign, nonatomic) VKStyle* style;	// @synthesize=_style
// declared property setter: -(void)setAntialiasingBrushWidth:(float)width;
// declared property getter: -(float)antialiasingBrushWidth;
// declared property setter: -(void)setShadowWidth:(float)width;
// declared property getter: -(float)shadowWidth;
// declared property setter: -(void)setAntialiasingBrushColor:(VGLColor)color;
// declared property getter: -(VGLColor)antialiasingBrushColor;
// declared property setter: -(void)setShadowColor:(VGLColor)color;
// declared property getter: -(VGLColor)shadowColor;
// declared property setter: -(void)setOffsetDirection:(XXStruct_ZUkpeA)direction;
// declared property getter: -(XXStruct_ZUkpeA)offsetDirection;
// declared property setter: -(void)setVisible:(BOOL)visible;
// declared property getter: -(BOOL)visible;
// declared property getter: -(id)style;
-(unsigned)triangleCount;
-(void)dealloc;
-(id)initWithStyle:(id)style;
@end

