/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKOverlayPainter.h"
#import "VectorKit-Structs.h"
#import "VKPolylineObserver.h"

@class NSMutableSet, VGLTexture, VKLRUCache, VKPolylineOverlay, VKRouteLine, VKTileKeyList, VGLRenderState, GEORoute, NSSet;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {
	VGLRenderState* _renderState;
	VKRouteLine* _routeLine;
	double _routeLineHalfWidthRegular;
	double _routeLineHalfWidthRealistic;
	BOOL _selected;
	VGLTexture* _selectedTextureRegular;
	VGLTexture* _unselectedTextureRegular;
	VGLTexture* _travelledTextureRegular;
	VGLTexture* _selectedTextureRealistic;
	VGLTexture* _unselectedTextureRealistic;
	VGLTexture* _obscuredTextureRealistic;
	VGLTexture* _travelledTextureRealistic;
	GEORoute* _route;
	BOOL _wasInRealisticModeOnPreviousLayout;
@private
	XXStruct_$zuyAD _matrix;
	NSSet* _previousTilesInView;
	VKTileKeyList* _previousKeysInView;
	NSMutableSet* _previousTilesAlongRoute;
	VKTileKeyList* _previousKeysAlongRoute;
	VKLRUCache* _polylineTilesForKeys;
}
@property(readonly, assign, nonatomic) VKPolylineOverlay* polyline;
@property(retain, nonatomic) GEORoute* route;	// @synthesize=_route
@property(assign, nonatomic) BOOL selected;	// @synthesize=_selected
// declared property setter: -(void)setRoute:(id)route;
// declared property getter: -(id)route;
// declared property getter: -(BOOL)selected;
-(id).cxx_construct;
-(void)_didReceiveMemoryWarning;
-(void)drawDebug:(id)debug tiles:(id)tiles;
-(void)drawWithContext:(id)context tiles:(id)tiles;
-(void)setupShaders:(BOOL)shaders showTraffic:(BOOL)traffic withContext:(id)context andProgram:(id)program forMesh:(id)mesh withScaler:(float)scaler;
-(float)calculateRouteDistanceToTextureMappingScaler:(float)textureMappingScaler;
-(float)trafficTextureMappingScalerForSpeed:(BOOL)speed;
-(VGLColor)trafficColorForSpeed:(BOOL)speed;
-(id)trafficTextureForSpeed:(BOOL)speed withContext:(id)context;
-(id)_polylineTileForKey:(const VKTileKey*)key;
-(id)_polylineTileForOverlayTile:(id)overlayTile createIfMissing:(BOOL)missing;
-(id)_polylineTileForRoadData:(id)roadData;
-(void)layoutWithContext:(id)context tiles:(id)tiles keysInView:(id)view;
// declared property setter: -(void)setSelected:(BOOL)selected;
-(void)setNeedsLayoutForPolyline:(id)polyline;
// declared property getter: -(id)polyline;
-(void)dealloc;
-(id)initWithOverlay:(id)overlay;
@end

