/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOGeoServiceTag : PBCodable {
@private
	int _serviceType;
	NSString* _tag;
}
@property(retain, nonatomic) NSString* tag;	// @synthesize=_tag
@property(assign, nonatomic) int serviceType;	// @synthesize=_serviceType
// declared property setter: -(void)setTag:(id)tag;
// declared property getter: -(id)tag;
// declared property setter: -(void)setServiceType:(int)type;
// declared property getter: -(int)serviceType;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
@end

