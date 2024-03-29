/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKMapTileModel.h"
#import "VKMapLayer.h"

@class NSMutableArray, VGLRenderState;

__attribute__((visibility("hidden")))
@interface VKRasterMapModel : VKMapTileModel <VKMapLayer> {
@private
	VGLRenderState* _renderState;
	NSMutableArray* _sortedTiles;
	unsigned _mapLayer;
	BOOL _rasterViewer;
}
@property(assign, nonatomic) BOOL rasterViewer;	// @synthesize=_rasterViewer
@property(assign, nonatomic) unsigned mapLayerPosition;	// @synthesize=_mapLayer
+(BOOL)reloadOnStylesheetChange;
// declared property setter: -(void)setRasterViewer:(BOOL)viewer;
// declared property getter: -(BOOL)rasterViewer;
// declared property setter: -(void)setMapLayerPosition:(unsigned)position;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(BOOL)isShowingNoDataPlaceholders;
-(void)reset;
-(void)dealloc;
-(id)init;
// declared property getter: -(unsigned)mapLayerPosition;
@end

