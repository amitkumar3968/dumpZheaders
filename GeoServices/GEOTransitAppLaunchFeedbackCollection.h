/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable {
@private
	double _timestamp;
	NSString* _bundleIdentifier;
	GEOLatLng* _destination;
	GEOLatLng* _source;
}
@property(assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(retain, nonatomic) GEOLatLng* destination;	// @synthesize=_destination
@property(retain, nonatomic) GEOLatLng* source;	// @synthesize=_source
@property(retain, nonatomic) NSString* bundleIdentifier;	// @synthesize=_bundleIdentifier
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property getter: -(double)timestamp;
// declared property setter: -(void)setDestination:(id)destination;
// declared property getter: -(id)destination;
// declared property setter: -(void)setSource:(id)source;
// declared property getter: -(id)source;
// declared property setter: -(void)setBundleIdentifier:(id)identifier;
// declared property getter: -(id)bundleIdentifier;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
@end
