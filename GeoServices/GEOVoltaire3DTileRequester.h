/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOVoltaireTileRequester.h"


@interface GEOVoltaire3DTileRequester : GEOVoltaireTileRequester {
}
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
+(unsigned char)tileProviderIdentifier;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)tileKey useStatusCodes:(BOOL*)codes;
-(unsigned)tileSetForKey:(const GEOTileKey*)key;
@end

