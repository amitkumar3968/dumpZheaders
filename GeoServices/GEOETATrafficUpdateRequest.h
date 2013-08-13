/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEORouteAttributes, NSMutableArray, GEOLocation;

@interface GEOETATrafficUpdateRequest : XXUnknownSuperclass {
@private
	GEOLocation* _currentUserLocation;
	NSMutableArray* _destinationWaypoints;
	GEORouteAttributes* _routeAttributes;
	NSMutableArray* _routes;
	NSMutableArray* _serviceTags;
	BOOL _includeBetterRouteSuggestion;
	XXStruct_ec15KC _has;
}
@property(retain, nonatomic) NSMutableArray* serviceTags;	// @synthesize=_serviceTags
@property(retain, nonatomic) NSMutableArray* routes;	// @synthesize=_routes
@property(retain, nonatomic) NSMutableArray* destinationWaypoints;	// @synthesize=_destinationWaypoints
@property(assign, nonatomic) BOOL includeBetterRouteSuggestion;	// @synthesize=_includeBetterRouteSuggestion
@property(assign, nonatomic) BOOL hasIncludeBetterRouteSuggestion;
@property(retain, nonatomic) GEORouteAttributes* routeAttributes;	// @synthesize=_routeAttributes
@property(readonly, assign, nonatomic) BOOL hasRouteAttributes;
@property(retain, nonatomic) GEOLocation* currentUserLocation;	// @synthesize=_currentUserLocation
@property(readonly, assign, nonatomic) BOOL hasCurrentUserLocation;
// declared property setter: -(void)setServiceTags:(id)tags;
// declared property getter: -(id)serviceTags;
// declared property setter: -(void)setRoutes:(id)routes;
// declared property getter: -(id)routes;
// declared property setter: -(void)setDestinationWaypoints:(id)waypoints;
// declared property getter: -(id)destinationWaypoints;
// declared property setter: -(void)setRouteAttributes:(id)attributes;
// declared property getter: -(id)routeAttributes;
// declared property setter: -(void)setCurrentUserLocation:(id)location;
// declared property getter: -(id)currentUserLocation;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)serviceTagAtIndex:(unsigned)index;
-(unsigned)serviceTagsCount;
-(void)addServiceTag:(id)tag;
-(void)clearServiceTags;
-(id)routeAtIndex:(unsigned)index;
-(unsigned)routesCount;
-(void)addRoute:(id)route;
-(void)clearRoutes;
-(id)destinationWaypointAtIndex:(unsigned)index;
-(unsigned)destinationWaypointsCount;
-(void)addDestinationWaypoint:(id)waypoint;
-(void)clearDestinationWaypoints;
// declared property getter: -(BOOL)hasIncludeBetterRouteSuggestion;
// declared property setter: -(void)setHasIncludeBetterRouteSuggestion:(BOOL)suggestion;
// declared property setter: -(void)setIncludeBetterRouteSuggestion:(BOOL)suggestion;
// declared property getter: -(BOOL)includeBetterRouteSuggestion;
// declared property getter: -(BOOL)hasRouteAttributes;
// declared property getter: -(BOOL)hasCurrentUserLocation;
-(void)dealloc;
@end
