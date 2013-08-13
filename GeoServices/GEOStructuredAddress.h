/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <ProtocolBuffer/PBCodable.h>
#import "GeoServices-Structs.h"

@class NSMutableArray, NSString;

@interface GEOStructuredAddress : PBCodable {
@private
	XXStruct_19EQxD _geoIds;
	NSString* _administrativeArea;
	NSString* _administrativeAreaCode;
	NSMutableArray* _areaOfInterests;
	NSString* _country;
	NSString* _countryCode;
	NSMutableArray* _dependentLocalitys;
	NSString* _fullThoroughfare;
	NSString* _inlandWater;
	NSString* _locality;
	NSString* _ocean;
	NSString* _postCode;
	NSString* _postCodeExtension;
	NSString* _premise;
	NSString* _premises;
	NSString* _subAdministrativeArea;
	NSString* _subLocality;
	NSMutableArray* _subPremises;
	NSString* _subThoroughfare;
	NSString* _thoroughfare;
}
@property(readonly, assign, nonatomic) long long* geoIds;
@property(readonly, assign, nonatomic) unsigned geoIdsCount;
@property(retain, nonatomic) NSMutableArray* subPremises;	// @synthesize=_subPremises
@property(retain, nonatomic) NSString* premise;	// @synthesize=_premise
@property(readonly, assign, nonatomic) BOOL hasPremise;
@property(retain, nonatomic) NSMutableArray* dependentLocalitys;	// @synthesize=_dependentLocalitys
@property(retain, nonatomic) NSString* ocean;	// @synthesize=_ocean
@property(readonly, assign, nonatomic) BOOL hasOcean;
@property(retain, nonatomic) NSString* inlandWater;	// @synthesize=_inlandWater
@property(readonly, assign, nonatomic) BOOL hasInlandWater;
@property(retain, nonatomic) NSMutableArray* areaOfInterests;	// @synthesize=_areaOfInterests
@property(retain, nonatomic) NSString* postCodeExtension;	// @synthesize=_postCodeExtension
@property(readonly, assign, nonatomic) BOOL hasPostCodeExtension;
@property(retain, nonatomic) NSString* fullThoroughfare;	// @synthesize=_fullThoroughfare
@property(readonly, assign, nonatomic) BOOL hasFullThoroughfare;
@property(retain, nonatomic) NSString* subThoroughfare;	// @synthesize=_subThoroughfare
@property(readonly, assign, nonatomic) BOOL hasSubThoroughfare;
@property(retain, nonatomic) NSString* thoroughfare;	// @synthesize=_thoroughfare
@property(readonly, assign, nonatomic) BOOL hasThoroughfare;
@property(retain, nonatomic) NSString* premises;	// @synthesize=_premises
@property(readonly, assign, nonatomic) BOOL hasPremises;
@property(retain, nonatomic) NSString* subLocality;	// @synthesize=_subLocality
@property(readonly, assign, nonatomic) BOOL hasSubLocality;
@property(retain, nonatomic) NSString* postCode;	// @synthesize=_postCode
@property(readonly, assign, nonatomic) BOOL hasPostCode;
@property(retain, nonatomic) NSString* locality;	// @synthesize=_locality
@property(readonly, assign, nonatomic) BOOL hasLocality;
@property(retain, nonatomic) NSString* subAdministrativeArea;	// @synthesize=_subAdministrativeArea
@property(readonly, assign, nonatomic) BOOL hasSubAdministrativeArea;
@property(retain, nonatomic) NSString* administrativeAreaCode;	// @synthesize=_administrativeAreaCode
@property(readonly, assign, nonatomic) BOOL hasAdministrativeAreaCode;
@property(retain, nonatomic) NSString* administrativeArea;	// @synthesize=_administrativeArea
@property(readonly, assign, nonatomic) BOOL hasAdministrativeArea;
@property(retain, nonatomic) NSString* countryCode;	// @synthesize=_countryCode
@property(readonly, assign, nonatomic) BOOL hasCountryCode;
@property(retain, nonatomic) NSString* country;	// @synthesize=_country
@property(readonly, assign, nonatomic) BOOL hasCountry;
// declared property setter: -(void)setSubPremises:(id)premises;
// declared property getter: -(id)subPremises;
// declared property setter: -(void)setPremise:(id)premise;
// declared property getter: -(id)premise;
// declared property setter: -(void)setDependentLocalitys:(id)localitys;
// declared property getter: -(id)dependentLocalitys;
// declared property setter: -(void)setOcean:(id)ocean;
// declared property getter: -(id)ocean;
// declared property setter: -(void)setInlandWater:(id)water;
// declared property getter: -(id)inlandWater;
// declared property setter: -(void)setAreaOfInterests:(id)interests;
// declared property getter: -(id)areaOfInterests;
// declared property setter: -(void)setPostCodeExtension:(id)extension;
// declared property getter: -(id)postCodeExtension;
// declared property setter: -(void)setFullThoroughfare:(id)thoroughfare;
// declared property getter: -(id)fullThoroughfare;
// declared property setter: -(void)setSubThoroughfare:(id)thoroughfare;
// declared property getter: -(id)subThoroughfare;
// declared property setter: -(void)setThoroughfare:(id)thoroughfare;
// declared property getter: -(id)thoroughfare;
// declared property setter: -(void)setPremises:(id)premises;
// declared property getter: -(id)premises;
// declared property setter: -(void)setSubLocality:(id)locality;
// declared property getter: -(id)subLocality;
// declared property setter: -(void)setPostCode:(id)code;
// declared property getter: -(id)postCode;
// declared property setter: -(void)setLocality:(id)locality;
// declared property getter: -(id)locality;
// declared property setter: -(void)setSubAdministrativeArea:(id)area;
// declared property getter: -(id)subAdministrativeArea;
// declared property setter: -(void)setAdministrativeAreaCode:(id)code;
// declared property getter: -(id)administrativeAreaCode;
// declared property setter: -(void)setAdministrativeArea:(id)area;
// declared property getter: -(id)administrativeArea;
// declared property setter: -(void)setCountryCode:(id)code;
// declared property getter: -(id)countryCode;
// declared property setter: -(void)setCountry:(id)country;
// declared property getter: -(id)country;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(void)setGeoIds:(long long*)ids count:(unsigned)count;
-(long long)geoIdAtIndex:(unsigned)index;
-(void)addGeoId:(long long)anId;
-(void)clearGeoIds;
// declared property getter: -(long long*)geoIds;
// declared property getter: -(unsigned)geoIdsCount;
-(id)subPremiseAtIndex:(unsigned)index;
-(unsigned)subPremisesCount;
-(void)addSubPremise:(id)premise;
-(void)clearSubPremises;
// declared property getter: -(BOOL)hasPremise;
-(id)dependentLocalityAtIndex:(unsigned)index;
-(unsigned)dependentLocalitysCount;
-(void)addDependentLocality:(id)locality;
-(void)clearDependentLocalitys;
// declared property getter: -(BOOL)hasOcean;
// declared property getter: -(BOOL)hasInlandWater;
-(id)areaOfInterestAtIndex:(unsigned)index;
-(unsigned)areaOfInterestsCount;
-(void)addAreaOfInterest:(id)interest;
-(void)clearAreaOfInterests;
// declared property getter: -(BOOL)hasPostCodeExtension;
// declared property getter: -(BOOL)hasFullThoroughfare;
// declared property getter: -(BOOL)hasSubThoroughfare;
// declared property getter: -(BOOL)hasThoroughfare;
// declared property getter: -(BOOL)hasPremises;
// declared property getter: -(BOOL)hasSubLocality;
// declared property getter: -(BOOL)hasPostCode;
// declared property getter: -(BOOL)hasLocality;
// declared property getter: -(BOOL)hasSubAdministrativeArea;
// declared property getter: -(BOOL)hasAdministrativeAreaCode;
// declared property getter: -(BOOL)hasAdministrativeArea;
// declared property getter: -(BOOL)hasCountryCode;
// declared property getter: -(BOOL)hasCountry;
-(void)dealloc;
@end

