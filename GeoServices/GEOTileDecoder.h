/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSObject.h"


@protocol GEOTileDecoder <NSObject>
-(id)decodeTile:(id)tile forKey:(const GEOTileKey*)key;
-(BOOL)canDecodeTile:(const GEOTileKey*)tile quickly:(BOOL*)quickly;
@end
