/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GEOSimpleTileRequester.h"
#import "GeoServices-Structs.h"
#import "NSURLConnectionDelegate.h"


__attribute__((visibility("hidden")))
@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate> {
}
-(id)localizationURLForTileKey:(GEOTileKey*)tileKey;
-(id)_localizationURLForTileKey:(GEOTileKey*)tileKey;
-(id)urlForTileKey:(GEOTileKey*)tileKey;
-(unsigned)tileEditionForKey:(GEOTileKey*)key;
-(unsigned)tileSetForKey:(const GEOTileKey*)key;
@end
