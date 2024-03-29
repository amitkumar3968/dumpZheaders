/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOTileSource.h"
#import "GeoServices-Structs.h"


@interface GEOVectorTileSource : GEOTileSource {
}
-(GEOTileKey)tileKeyForX:(unsigned)x y:(unsigned)y z:(unsigned)z;
-(int)tileSize;
-(int)maximumDownloadZoomLevel;
-(int)minimumDownloadZoomLevel;
-(int)zEquivalenceClass;
@end

