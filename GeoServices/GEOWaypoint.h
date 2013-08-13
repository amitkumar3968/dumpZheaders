/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, NSMutableArray, GEOPlaceSearchRequest;

@interface GEOWaypoint : PBCodable {
@private
	NSMutableArray* _entryPoints;
	GEOLocation* _location;
	GEOPlaceSearchRequest* _placeSearchRequest;
}
@property(retain, nonatomic) NSMutableArray* entryPoints;	// @synthesize=_entryPoints
@property(retain, nonatomic) GEOLocation* location;	// @synthesize=_location
@property(readonly, assign, nonatomic) BOOL hasLocation;
@property(retain, nonatomic) GEOPlaceSearchRequest* placeSearchRequest;	// @synthesize=_placeSearchRequest
@property(readonly, assign, nonatomic) BOOL hasPlaceSearchRequest;
// declared property setter: -(void)setEntryPoints:(id)points;
// declared property getter: -(id)entryPoints;
// declared property setter: -(void)setLocation:(id)location;
// declared property getter: -(id)location;
// declared property setter: -(void)setPlaceSearchRequest:(id)request;
// declared property getter: -(id)placeSearchRequest;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)entryPointAtIndex:(unsigned)index;
-(unsigned)entryPointsCount;
-(void)addEntryPoint:(id)point;
-(void)clearEntryPoints;
// declared property getter: -(BOOL)hasLocation;
// declared property getter: -(BOOL)hasPlaceSearchRequest;
-(void)dealloc;
-(id)locationForWaypoint;
-(id)initWithLocation:(id)location;
@end
