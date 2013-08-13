/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOVLaneCharacteristic : PBCodable {
@private
	NSMutableArray* _laneDirections;
	NSMutableArray* _laneDividers;
	NSMutableArray* _laneTypes;
	unsigned _roadLaneCount;
	XXStruct_ec15KC _has;
}
@property(retain, nonatomic) NSMutableArray* laneTypes;	// @synthesize=_laneTypes
@property(retain, nonatomic) NSMutableArray* laneDirections;	// @synthesize=_laneDirections
@property(retain, nonatomic) NSMutableArray* laneDividers;	// @synthesize=_laneDividers
@property(assign, nonatomic) unsigned roadLaneCount;	// @synthesize=_roadLaneCount
@property(assign, nonatomic) BOOL hasRoadLaneCount;
// declared property setter: -(void)setLaneTypes:(id)types;
// declared property getter: -(id)laneTypes;
// declared property setter: -(void)setLaneDirections:(id)directions;
// declared property getter: -(id)laneDirections;
// declared property setter: -(void)setLaneDividers:(id)dividers;
// declared property getter: -(id)laneDividers;
// declared property getter: -(unsigned)roadLaneCount;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)laneTypeAtIndex:(unsigned)index;
-(unsigned)laneTypesCount;
-(void)addLaneType:(id)type;
-(void)clearLaneTypes;
-(id)laneDirectionAtIndex:(unsigned)index;
-(unsigned)laneDirectionsCount;
-(void)addLaneDirection:(id)direction;
-(void)clearLaneDirections;
-(id)laneDividerAtIndex:(unsigned)index;
-(unsigned)laneDividersCount;
-(void)addLaneDivider:(id)divider;
-(void)clearLaneDividers;
// declared property getter: -(BOOL)hasRoadLaneCount;
// declared property setter: -(void)setHasRoadLaneCount:(BOOL)count;
// declared property setter: -(void)setRoadLaneCount:(unsigned)count;
-(void)dealloc;
@end

