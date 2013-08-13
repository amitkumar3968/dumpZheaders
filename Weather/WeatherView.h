/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CityUpdaterDelegate.h"

@class UIImage, UIView, City;

@interface WeatherView : XXUnknownSuperclass <CityUpdaterDelegate> {
	City* _city;
	id _delegate;
	BOOL _showingDay;
	UIImage* _bigIcon;
	UIImage* _secondaryBigIcon;
	unsigned _bigIconIndex;
	BOOL _showWind;
	UIView* _windView;
}
@property(retain, nonatomic, setter=showCity:) City* city;	// @synthesize=_city
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
// declared property getter: -(id)city;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)_secondaryBigIcon;
-(id)_bigIcon;
-(void)setBigIcon:(unsigned)icon dayNightChanged:(BOOL)changed;
-(void)updateWind;
-(id)bigImageBundle;
-(void)cleanupWindView;
-(id)bundle;
-(void)setupSecondaryBigIconOffset:(int)offset;
-(void)setupBigIconOffset:(int)offset;
-(CGRect)windFrame;
-(void)refreshLocalization;
-(void)cityDidStartWeatherUpdate:(id)city;
-(BOOL)updateWeatherDisplayForCity:(id)city;
// declared property setter: -(void)showCity:(id)city;
-(void)cityDidFinishWeatherUpdate:(id)city;
-(void)dealloc;
@end

