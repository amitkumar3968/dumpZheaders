/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSDate, NSString;

@interface City : XXUnknownSuperclass {
	id _delegate;
	int _updateInterval;
	NSString* _name;
	NSString* _locationID;
	NSString* _state;
	NSString* _link;
	float _latitude;
	float _longitude;
	NSString* _temperature;
	unsigned _bigIcon;
	NSMutableArray* _dayForecasts;
	NSMutableArray* _hourlyForecasts;
	unsigned _observationTime;
	unsigned _sunsetTime;
	unsigned _sunriseTime;
	unsigned _moonPhase;
	BOOL _dataCelsius;
	BOOL _autoUpdate;
	BOOL _isUpdating;
	NSString* _updateTimeString;
	NSDate* _updateTime;
	int _lastUpdateStatus;
	int _lastUpdateDetail;
	BOOL isLocalWeatherCity;
@private
	BOOL _hourlyDataIsCelsius;
	NSString* _windChill;
	unsigned _windDirection;
	float _windSpeed;
	unsigned _humidity;
	float _visibility;
	float _pressure;
	int _pressureRising;
	float _dewPoint;
	float _feelsLike;
	float _heatIndex;
	NSString* _woeid;
	BOOL _isLocalWeatherCity;
	int _secondsFromGMT;
	BOOL _isRequestedByFrameworkClient;
}
@property(assign, nonatomic) float heatIndex;	// @synthesize=_heatIndex
@property(assign, nonatomic) float feelsLike;	// @synthesize=_feelsLike
@property(assign, nonatomic) float dewPoint;	// @synthesize=_dewPoint
@property(assign, nonatomic) int pressureRising;	// @synthesize=_pressureRising
@property(assign, nonatomic) float pressure;	// @synthesize=_pressure
@property(assign, nonatomic) float visibility;	// @synthesize=_visibility
@property(assign, nonatomic) unsigned humidity;	// @synthesize=_humidity
@property(assign, nonatomic) float windSpeed;	// @synthesize=_windSpeed
@property(assign, nonatomic) unsigned windDirection;	// @synthesize=_windDirection
@property(copy, nonatomic) NSString* woeid;	// @synthesize=_woeid
@property(copy, nonatomic) NSString* windChill;	// @synthesize=_windChill
@property(assign, nonatomic) BOOL isHourlyDataCelsius;	// @synthesize=_hourlyDataIsCelsius
@property(assign, nonatomic) int secondsFromGMT;	// @synthesize=_secondsFromGMT
@property(assign, nonatomic) float latitude;	// @synthesize=_latitude
@property(assign, nonatomic) float longitude;	// @synthesize=_longitude
@property(assign, nonatomic) BOOL isLocalWeatherCity;	// @synthesize=_isLocalWeatherCity
@property(assign, nonatomic) BOOL isRequestedByFrameworkClient;	// @synthesize=_isRequestedByFrameworkClient
@property(retain) NSString* state;	// converted property
@property(assign) int lastUpdateStatus;	// converted property
@property(retain) NSDate* updateTime;	// converted property
@property(retain) NSMutableArray* hourlyForecasts;	// converted property
@property(assign, getter=isDataCelsius) BOOL dataCelsius;	// converted property
@property(assign) unsigned moonPhase;	// converted property
@property(assign) unsigned sunriseTime;	// converted property
@property(assign) unsigned sunsetTime;	// converted property
@property(assign) unsigned observationTime;	// converted property
@property(retain) NSMutableArray* dayForecasts;	// converted property
@property(assign) unsigned bigIcon;	// converted property
@property(retain) NSString* temperature;	// converted property
@property(retain) NSString* link;	// converted property
@property(retain) NSString* locationID;	// converted property
@property(retain) NSString* name;	// converted property
@property(readonly, retain) NSString* updateTimeString;	// converted property
@property(readonly, assign) int lastUpdateDetail;	// converted property
// declared property setter: -(void)setIsRequestedByFrameworkClient:(BOOL)client;
// declared property getter: -(BOOL)isRequestedByFrameworkClient;
// declared property setter: -(void)setSecondsFromGMT:(int)gmt;
// declared property getter: -(int)secondsFromGMT;
// declared property setter: -(void)setIsLocalWeatherCity:(BOOL)city;
// declared property getter: -(BOOL)isLocalWeatherCity;
// declared property getter: -(id)woeid;
// declared property setter: -(void)setHeatIndex:(float)index;
// declared property getter: -(float)heatIndex;
// declared property setter: -(void)setFeelsLike:(float)like;
// declared property getter: -(float)feelsLike;
// declared property setter: -(void)setDewPoint:(float)point;
// declared property getter: -(float)dewPoint;
// declared property setter: -(void)setPressureRising:(int)rising;
// declared property getter: -(int)pressureRising;
// declared property setter: -(void)setPressure:(float)pressure;
// declared property getter: -(float)pressure;
// declared property setter: -(void)setVisibility:(float)visibility;
// declared property getter: -(float)visibility;
// declared property setter: -(void)setHumidity:(unsigned)humidity;
// declared property getter: -(unsigned)humidity;
// declared property setter: -(void)setWindSpeed:(float)speed;
// declared property getter: -(float)windSpeed;
// declared property setter: -(void)setWindDirection:(unsigned)direction;
// declared property getter: -(unsigned)windDirection;
// declared property setter: -(void)setWindChill:(id)chill;
// declared property getter: -(id)windChill;
// declared property setter: -(void)setIsHourlyDataCelsius:(BOOL)celsius;
// declared property getter: -(BOOL)isHourlyDataCelsius;
// declared property setter: -(void)setLongitude:(float)longitude;
// declared property getter: -(float)longitude;
// declared property setter: -(void)setLatitude:(float)latitude;
// declared property getter: -(float)latitude;
-(id)windDirectionAsString:(int)string;
-(BOOL)populateWithDataFromCity:(id)city;
// declared property setter: -(void)setWoeid:(id)woeid;
-(id)cityAndState;
// converted property getter: -(id)state;
// converted property setter: -(void)setState:(id)state;
// converted property getter: -(id)updateTimeString;
// converted property getter: -(id)updateTime;
// converted property getter: -(int)lastUpdateDetail;
// converted property getter: -(int)lastUpdateStatus;
// converted property setter: -(void)setLastUpdateStatus:(int)status;
-(BOOL)isUpdatingOrNoData;
-(BOOL)_isUpdating;
-(void)finishedUpdating:(int)updating statusDetail:(int)detail;
// converted property setter: -(void)setUpdateTime:(id)time;
-(void)addHourlyForecast:(id)forecast;
// converted property getter: -(id)hourlyForecasts;
// converted property setter: -(void)setHourlyForecasts:(id)forecasts;
-(void)addDayForecast:(id)forecast;
-(void)clearForecasts;
-(void)update;
-(void)updateLocalWeather;
-(int)weatherDataAge;
// converted property setter: -(void)setDataCelsius:(BOOL)celsius;
// converted property getter: -(BOOL)isDataCelsius;
// converted property setter: -(void)setMoonPhase:(unsigned)phase;
// converted property getter: -(unsigned)moonPhase;
-(BOOL)isDay;
// converted property getter: -(unsigned)sunriseTime;
// converted property setter: -(void)setSunriseTime:(unsigned)time;
// converted property getter: -(unsigned)sunsetTime;
// converted property setter: -(void)setSunsetTime:(unsigned)time;
// converted property getter: -(unsigned)observationTime;
// converted property setter: -(void)setObservationTime:(unsigned)time;
// converted property getter: -(id)dayForecasts;
// converted property setter: -(void)setDayForecasts:(id)forecasts;
// converted property setter: -(void)setBigIcon:(unsigned)icon;
// converted property getter: -(unsigned)bigIcon;
// converted property getter: -(id)temperature;
// converted property setter: -(void)setTemperature:(id)temperature;
// converted property getter: -(id)link;
// converted property setter: -(void)setLink:(id)link;
// converted property setter: -(void)setLocationID:(id)anId;
-(id)displayName;
// converted property getter: -(id)locationID;
// converted property getter: -(id)name;
// converted property setter: -(void)setName:(id)name;
-(void)setAutoUpdate:(BOOL)update;
-(void)disassociateWithDelegate:(id)delegate;
-(void)associateWithDelegate:(id)delegate;
-(id)description;
-(void)dealloc;
-(id)init;
@end
