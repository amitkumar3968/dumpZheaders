/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL, StockChartData;

@interface Stock : XXUnknownSuperclass {
	NSString* symbol;
	NSString* companyName;
	NSString* shortCompanyName;
	NSString* exchange;
	NSString* realtimeTimestamp;
	NSString* realtimePrice;
	NSString* realtimeChange;
	NSString* nonRealtimePrice;
	NSString* nonRealtimeChange;
	NSString* open;
	NSString* high;
	NSString* low;
	NSString* yearHigh;
	NSString* yearLow;
	NSString* volume;
	NSString* averageVolume;
	NSString* marketcap;
	NSString* peRatio;
	NSString* dividendYield;
	NSURL* infoURL;
	BOOL _marketIsOpen;
	unsigned pricePrecision;
	double timeQuoteLastUpdated;
	double timeMetadataLastUpdated;
	StockChartData* _chartDataArray[9];
}
@property(assign, nonatomic) double timeMetadataLastUpdated;	// @synthesize
@property(assign, nonatomic) double timeQuoteLastUpdated;	// @synthesize
@property(retain, nonatomic) NSURL* infoURL;	// @synthesize
@property(readonly, assign, nonatomic) unsigned pricePrecision;	// @synthesize
@property(retain, nonatomic) NSString* dividendYield;	// @synthesize
@property(retain, nonatomic) NSString* peRatio;	// @synthesize
@property(retain, nonatomic) NSString* marketcap;	// @synthesize
@property(retain, nonatomic) NSString* averageVolume;	// @synthesize
@property(retain, nonatomic) NSString* volume;	// @synthesize
@property(retain, nonatomic) NSString* yearLow;	// @synthesize
@property(retain, nonatomic) NSString* yearHigh;	// @synthesize
@property(retain, nonatomic) NSString* low;	// @synthesize
@property(retain, nonatomic) NSString* high;	// @synthesize
@property(retain, nonatomic) NSString* open;	// @synthesize
@property(readonly, assign, nonatomic) NSString* change;
@property(readonly, assign, nonatomic) NSString* price;
@property(retain, nonatomic) NSString* nonRealtimeChange;	// @synthesize
@property(retain, nonatomic) NSString* nonRealtimePrice;	// @synthesize
@property(retain, nonatomic) NSString* realtimeChange;	// @synthesize
@property(retain, nonatomic) NSString* realtimePrice;	// @synthesize
@property(retain, nonatomic) NSString* realtimeTimestamp;	// @synthesize
@property(retain, nonatomic) NSString* exchange;	// @synthesize
@property(retain, nonatomic) NSString* shortCompanyName;	// @synthesize
@property(retain, nonatomic) NSString* companyName;	// @synthesize
@property(retain, nonatomic) NSString* symbol;	// @synthesize
@property(readonly, assign) BOOL marketIsOpen;	// converted property
+(id)_potentiallyAbsentKeys;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)string;
+(id)localizedMagnitudeAbbreviatedStringWithString:(id)string fractionDigits:(unsigned)digits;
+(id)postfixCharacterForEngineeringMagnitude:(unsigned)engineeringMagnitude;
+(id)BlankValueString;
+(void)resetLocale;
+(BOOL)localeUsesASCIIDigits;
+(id)formattedStringForString:(id)string fractionDigits:(unsigned)digits percentStyle:(BOOL)style;
+(id)formattedStringForNumber:(id)number fractionDigits:(unsigned)digits percentStyle:(BOOL)style;
+(id)formattedStringForNumber:(id)number fractionDigits:(unsigned)digits percentStyle:(BOOL)style groupingSeparators:(BOOL)separators;
+(id)urlForStock:(id)stock;
// declared property setter: -(void)setTimeMetadataLastUpdated:(double)updated;
// declared property getter: -(double)timeMetadataLastUpdated;
// declared property setter: -(void)setTimeQuoteLastUpdated:(double)updated;
// declared property getter: -(double)timeQuoteLastUpdated;
// declared property getter: -(unsigned)pricePrecision;
// declared property setter: -(void)setInfoURL:(id)url;
// declared property getter: -(id)infoURL;
// declared property setter: -(void)setDividendYield:(id)yield;
// declared property getter: -(id)dividendYield;
// declared property setter: -(void)setPeRatio:(id)ratio;
// declared property getter: -(id)peRatio;
// declared property setter: -(void)setMarketcap:(id)marketcap;
// declared property getter: -(id)marketcap;
// declared property setter: -(void)setAverageVolume:(id)volume;
// declared property getter: -(id)averageVolume;
// declared property setter: -(void)setVolume:(id)volume;
// declared property getter: -(id)volume;
// declared property setter: -(void)setYearLow:(id)low;
// declared property getter: -(id)yearLow;
// declared property setter: -(void)setYearHigh:(id)high;
// declared property getter: -(id)yearHigh;
// declared property setter: -(void)setLow:(id)low;
// declared property getter: -(id)low;
// declared property setter: -(void)setHigh:(id)high;
// declared property getter: -(id)high;
// declared property setter: -(void)setOpen:(id)open;
// declared property getter: -(id)open;
// declared property setter: -(void)setNonRealtimeChange:(id)change;
// declared property getter: -(id)nonRealtimeChange;
// declared property setter: -(void)setNonRealtimePrice:(id)price;
// declared property getter: -(id)nonRealtimePrice;
// declared property setter: -(void)setRealtimeChange:(id)change;
// declared property getter: -(id)realtimeChange;
// declared property setter: -(void)setRealtimePrice:(id)price;
// declared property getter: -(id)realtimePrice;
// declared property setter: -(void)setRealtimeTimestamp:(id)timestamp;
// declared property getter: -(id)realtimeTimestamp;
// declared property setter: -(void)setExchange:(id)exchange;
// declared property getter: -(id)exchange;
// declared property setter: -(void)setShortCompanyName:(id)name;
// declared property getter: -(id)shortCompanyName;
// declared property setter: -(void)setCompanyName:(id)name;
// declared property getter: -(id)companyName;
// declared property setter: -(void)setSymbol:(id)symbol;
// declared property getter: -(id)symbol;
-(void).cxx_destruct;
-(void)_updatePricePrecision;
-(void)updateMetadataWithDictionary:(id)dictionary forTime:(double)time;
-(void)updateQuoteWithDictionary:(id)dictionary forTime:(double)time;
-(void)clearCachedGraphImageSets;
-(void)setChartData:(id)data forInterval:(int)interval;
-(id)chartDataForInterval:(int)interval;
-(id)listName;
// converted property getter: -(BOOL)marketIsOpen;
-(float)changeFloatPercent:(BOOL)percent;
-(id)formattedChangePercent:(BOOL)percent;
-(BOOL)isIndex;
-(BOOL)changeIsZero;
-(BOOL)changeIsNegative;
-(BOOL)priceIsRealtime;
-(id)formattedPrice;
// declared property getter: -(id)change;
// declared property getter: -(id)price;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)archiveDictionary;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(void)populateFromDictionary:(id)dictionary;
-(id)description;
-(void)resetLocale;
@end

