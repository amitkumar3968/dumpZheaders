/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "_VKStyle.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKLineDrawStyle : XXUnknownSuperclass <_VKStyle> {
@private
	vector<LineDash, vk_allocator<LineDash> > fillDashes;
	vector<LineStipple, vk_allocator<LineStipple> > stipples;
	vector<LineDash, vk_allocator<LineDash> > strokeDashes;
	BOOL hasDashAtAnyZ;
	VKProfileSparseRamp<float> insetShadowHeight;
	VKProfileSparseRamp<float> insetShadowAngle;
	VKProfileSparseRamp<_VGLColor> insetShadowColor;
	VKProfileSparseRamp<GEOVectorTilePoint> dropShadowOffset;
	VKProfileSparseRamp<float> dropShadowWidth;
	VKProfileSparseRamp<_VGLColor> dropShadowColor;
}
@property(readonly, assign) BOOL hasDashAtAnyZ;	// converted property
-(id).cxx_construct;
-(void).cxx_destruct;
-(VGLColor)dropShadowColorAtZoom:(float)zoom;
-(CGSize)dropShadowOffsetAtZoom:(float)zoom;
-(float)dropShadowWidthAtZoom:(float)zoom;
-(BOOL)hasDropShadowAtZoom:(float)zoom;
-(VGLColor)insetShadowColorAtZoom:(float)zoom;
-(float)insetShadowAngleAtZoom:(float)zoom;
-(float)insetShadowHeightAtZoom:(float)zoom;
-(BOOL)hasStrokeDashAtZoom:(int)zoom;
-(BOOL)hasFillDashAtZoom:(int)zoom;
-(void)strokeDashPattern:(float**)pattern length:(unsigned*)length atZoom:(float)zoom;
-(void)stippleArray:(float**)array length:(unsigned*)length atZoom:(float)zoom;
-(void)fillDashPattern:(float**)pattern length:(unsigned*)length atZoom:(float)zoom;
// converted property getter: -(BOOL)hasDashAtAnyZ;
-(void)takeFromZoomInvariantProperties:(id)zoomInvariantProperties;
-(void)takeFromStyleProperties:(id)styleProperties atZoom:(unsigned)zoom;
@end
