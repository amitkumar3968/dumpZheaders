/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface HourlyForecast : XXUnknownSuperclass {
	NSString* _time24Hour;
	NSString* _temperature;
	int _conditionCode;
	float _percentPrecipitation;
}
@property(assign, nonatomic) float percentPrecipitation;	// @synthesize=_percentPrecipitation
@property(assign, nonatomic) int conditionCode;	// @synthesize=_conditionCode
@property(copy, nonatomic) NSString* temperature;	// @synthesize=_temperature
@property(copy, nonatomic) NSString* time24Hour;	// @synthesize=_time24Hour
// declared property setter: -(void)setPercentPrecipitation:(float)precipitation;
// declared property getter: -(float)percentPrecipitation;
// declared property setter: -(void)setConditionCode:(int)code;
// declared property getter: -(int)conditionCode;
// declared property setter: -(void)setTemperature:(id)temperature;
// declared property getter: -(id)temperature;
// declared property setter: -(void)setTime24Hour:(id)hour;
// declared property getter: -(id)time24Hour;
-(id)description;
-(void)dealloc;
@end

