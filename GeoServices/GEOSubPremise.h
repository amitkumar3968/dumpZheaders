/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface GEOSubPremise : PBCodable {
@private
	NSString* _name;
	int _type;
}
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
@property(assign, nonatomic) int type;	// @synthesize=_type
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)dealloc;
@end

