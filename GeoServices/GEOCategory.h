/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOCategory : PBCodable {
@private
	long long _geoOntologyId;
	NSString* _alias;
	int _level;
	NSMutableArray* _localizedNames;
	XXStruct_ec15KC _has;
}
@property(retain, nonatomic) NSMutableArray* localizedNames;	// @synthesize=_localizedNames
@property(assign, nonatomic) long long geoOntologyId;	// @synthesize=_geoOntologyId
@property(assign, nonatomic) BOOL hasGeoOntologyId;
@property(assign, nonatomic) int level;	// @synthesize=_level
@property(retain, nonatomic) NSString* alias;	// @synthesize=_alias
// declared property setter: -(void)setLocalizedNames:(id)names;
// declared property getter: -(id)localizedNames;
// declared property getter: -(long long)geoOntologyId;
// declared property setter: -(void)setLevel:(int)level;
// declared property getter: -(int)level;
// declared property setter: -(void)setAlias:(id)alias;
// declared property getter: -(id)alias;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)localizedNamesAtIndex:(unsigned)index;
-(unsigned)localizedNamesCount;
-(void)addLocalizedNames:(id)names;
-(void)clearLocalizedNames;
// declared property getter: -(BOOL)hasGeoOntologyId;
// declared property setter: -(void)setHasGeoOntologyId:(BOOL)anId;
// declared property setter: -(void)setGeoOntologyId:(long long)anId;
-(void)dealloc;
@end

