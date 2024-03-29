/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOTrafficTile : PBCodable {
@private
	NSMutableArray* _trafficIncidents;
	NSMutableArray* _trafficSegments;
	NSData* _vertices;
}
@property(retain, nonatomic) NSMutableArray* trafficIncidents;	// @synthesize=_trafficIncidents
@property(retain, nonatomic) NSMutableArray* trafficSegments;	// @synthesize=_trafficSegments
@property(retain, nonatomic) NSData* vertices;	// @synthesize=_vertices
@property(readonly, assign, nonatomic) BOOL hasVertices;
// declared property setter: -(void)setTrafficIncidents:(id)incidents;
// declared property getter: -(id)trafficIncidents;
// declared property setter: -(void)setTrafficSegments:(id)segments;
// declared property getter: -(id)trafficSegments;
// declared property setter: -(void)setVertices:(id)vertices;
// declared property getter: -(id)vertices;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)trafficIncidentAtIndex:(unsigned)index;
-(unsigned)trafficIncidentsCount;
-(void)addTrafficIncident:(id)incident;
-(void)clearTrafficIncidents;
-(id)trafficSegmentAtIndex:(unsigned)index;
-(unsigned)trafficSegmentsCount;
-(void)addTrafficSegment:(id)segment;
-(void)clearTrafficSegments;
// declared property getter: -(BOOL)hasVertices;
-(void)dealloc;
-(XXStruct_K5nmsA*)createUnpackedVerticesWithGutterSize:(int)gutterSize;
@end

