/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, SADistance, NSString, NSArray;

@interface SALocation : SADomainObject {
}
@property(copy, nonatomic) NSString* timezoneId;
@property(copy, nonatomic) NSString* thoroughfare;
@property(copy, nonatomic) NSString* subThoroughfare;
@property(copy, nonatomic) NSString* street;
@property(copy, nonatomic) NSString* stateCode;
@property(retain, nonatomic) SADistance* relativeDistance;
@property(copy, nonatomic) NSString* regionType;
@property(copy, nonatomic) NSString* postalCode;
@property(copy, nonatomic) NSNumber* longitude;
@property(copy, nonatomic) NSNumber* latitude;
@property(copy, nonatomic) NSString* label;
@property(copy, nonatomic) NSArray* entryPoints;
@property(copy, nonatomic) NSString* countryCode;
@property(copy, nonatomic) NSString* city;
@property(copy, nonatomic) NSNumber* accuracy;
+(id)locationWithDictionary:(id)dictionary context:(id)context;
+(id)location;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setTimezoneId:(id)anId;
// declared property getter: -(id)timezoneId;
// declared property setter: -(void)setThoroughfare:(id)thoroughfare;
// declared property getter: -(id)thoroughfare;
// declared property setter: -(void)setSubThoroughfare:(id)thoroughfare;
// declared property getter: -(id)subThoroughfare;
// declared property setter: -(void)setStreet:(id)street;
// declared property getter: -(id)street;
// declared property setter: -(void)setStateCode:(id)code;
// declared property getter: -(id)stateCode;
// declared property setter: -(void)setRelativeDistance:(id)distance;
// declared property getter: -(id)relativeDistance;
// declared property setter: -(void)setRegionType:(id)type;
// declared property getter: -(id)regionType;
// declared property setter: -(void)setPostalCode:(id)code;
// declared property getter: -(id)postalCode;
// declared property setter: -(void)setLongitude:(id)longitude;
// declared property getter: -(id)longitude;
// declared property setter: -(void)setLatitude:(id)latitude;
// declared property getter: -(id)latitude;
// declared property setter: -(void)setLabel:(id)label;
// declared property getter: -(id)label;
// declared property setter: -(void)setEntryPoints:(id)points;
// declared property getter: -(id)entryPoints;
// declared property setter: -(void)setCountryCode:(id)code;
// declared property getter: -(id)countryCode;
// declared property setter: -(void)setCity:(id)city;
// declared property getter: -(id)city;
// declared property setter: -(void)setAccuracy:(id)accuracy;
// declared property getter: -(id)accuracy;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

