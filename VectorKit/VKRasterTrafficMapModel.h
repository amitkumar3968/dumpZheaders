/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKMapTileModel.h"
#import "VKMapLayer.h"
#import "VectorKit-Structs.h"


__attribute__((visibility("hidden")))
@interface VKRasterTrafficMapModel : VKMapTileModel <VKMapLayer> {
}
+(void)buildTileStencilWithContext:(id)context forTiles:(id)tiles;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(unsigned)mapLayerPosition;
@end
