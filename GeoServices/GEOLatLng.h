/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>


@interface GEOLatLng : PBCodable {
@private
	double _lat;
	double _lng;
}
@property(assign, nonatomic) double lng;	// @synthesize=_lng
@property(assign, nonatomic) double lat;	// @synthesize=_lat
// declared property setter: -(void)setLng:(double)lng;
// declared property getter: -(double)lng;
// declared property setter: -(void)setLat:(double)lat;
// declared property getter: -(double)lat;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
-(id)coordinateAsString;
-(BOOL)isValid;
@end
