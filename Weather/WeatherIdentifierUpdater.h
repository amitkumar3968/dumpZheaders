/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import "WeatherUpdater.h"

@class NSMutableArray, NSArray;

@interface WeatherIdentifierUpdater : WeatherUpdater {
	id _woeidWeatherHandler;
@private
	NSArray* _requestedCities;
	NSMutableArray* _parsedCities;
}
@property(retain, nonatomic) NSMutableArray* parsedCities;	// @synthesize=_parsedCities
@property(retain, nonatomic) NSArray* requestedCities;	// @synthesize=_requestedCities
+(void)clearSharedIdentifierUpdater;
+(id)sharedWeatherIdentifierUpdater;
// declared property setter: -(void)setParsedCities:(id)cities;
// declared property getter: -(id)parsedCities;
// declared property setter: -(void)setRequestedCities:(id)cities;
// declared property getter: -(id)requestedCities;
-(void)_failed:(int)failed;
-(id)aggregateDictionaryDomain;
-(void)updateWeatherForCities:(id)cities withCompletionHandler:(id)completionHandler;
-(void)handleCompletionForCity:(id)city withUpdateDetail:(int)updateDetail;
-(void)updateWeatherForCity:(id)city;
-(void)dealloc;
@end

