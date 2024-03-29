/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKRasterTileSource.h"


__attribute__((visibility("hidden")))
@interface VKVegetationRasterTileSource : VKRasterTileSource {
}
-(id)tileForData:(id)data downloadKey:(const GEOTileKey*)key sourceKey:(const VKTileKey*)key3;
-(void)fetchTileForKey:(const VKTileKey*)key;
-(id)tileForKey:(const VKTileKey*)key;
-(VKTileKey)sourceKeyForRenderKey:(const VKTileKey*)renderKey;
-(unsigned)mapLayerForZoomLevelRange;
-(int)defaultMinimumZoomLevel;
-(int)defaultMaximumZoomLevel;
-(BOOL)minimumZoomLevelBoundsCamera;
-(BOOL)maximumZoomLevelBoundsCamera;
@end

