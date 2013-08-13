/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface GEOSupportedTileSets : PBCodable {
@private
	NSMutableArray* _tileSets;
}
@property(retain, nonatomic) NSMutableArray* tileSets;	// @synthesize=_tileSets
// declared property setter: -(void)setTileSets:(id)sets;
// declared property getter: -(id)tileSets;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)tileSetAtIndex:(unsigned)index;
-(unsigned)tileSetsCount;
-(void)addTileSet:(id)set;
-(void)clearTileSets;
-(void)dealloc;
@end
