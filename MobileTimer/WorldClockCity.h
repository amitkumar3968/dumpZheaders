/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSDictionary, NSString, ALCity, City, NSNumber;

@interface WorldClockCity : XXUnknownSuperclass {
	ALCity* _alCity;
	City* _weatherCity;
	NSString* _timeZone;
	NSString* _name;
	NSString* _countryName;
	NSString* _countryCode;
	NSString* _unlocalizedName;
	NSString* _unlocalizedCountryName;
}
@property(readonly, assign, nonatomic) NSURL* idUrl;
@property(readonly, assign, nonatomic) NSString* countryCode;
@property(readonly, assign, nonatomic) NSString* unlocalizedCountryName;
@property(readonly, assign, nonatomic) NSString* unlocalizedCityName;
@property(readonly, assign, nonatomic) NSString* countryName;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* timeZone;
@property(retain, nonatomic) City* weatherCity;	// @synthesize=_weatherCity
@property(readonly, assign, nonatomic) NSNumber* alCityId;
@property(readonly, assign, nonatomic) ALCity* alCity;	// @synthesize=_alCity
@property(readonly, assign, nonatomic) NSDictionary* properties;
+(BOOL)isWorldClockCityProperties:(id)properties;
// declared property getter: -(id)alCity;
// declared property setter: -(void)setWeatherCity:(id)city;
// declared property getter: -(id)weatherCity;
// declared property getter: -(id)idUrl;
// declared property getter: -(id)countryCode;
// declared property getter: -(id)unlocalizedCountryName;
// declared property getter: -(id)unlocalizedCityName;
// declared property getter: -(id)countryName;
// declared property getter: -(id)name;
// declared property getter: -(id)timeZone;
// declared property getter: -(id)alCityId;
// declared property getter: -(id)properties;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(void)dealloc;
-(id)initWithProperties:(id)properties;
-(id)initWithTimeZone:(id)timeZone countryCode:(id)code name:(id)name countryName:(id)name4 unlocalizedName:(id)name5 unlocalizedCountryName:(id)name6;
-(id)initWithALCityIdentifier:(int)alcityIdentifier;
-(id)initWithALCity:(id)alcity;
@end

