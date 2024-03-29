/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString, NSArray;

@interface SAStockObject : SADomainObject {
}
@property(copy, nonatomic) NSString* yearRange;
@property(copy, nonatomic) NSNumber* volume;
@property(copy, nonatomic) NSNumber* timeStamp;
@property(copy, nonatomic) NSString* symbol;
@property(copy, nonatomic) NSArray* stockNews;
@property(copy, nonatomic) NSNumber* status;
@property(copy, nonatomic) NSArray* requests;
@property(copy, nonatomic) NSNumber* realTimeTS;
@property(copy, nonatomic) NSNumber* realTimePrice;
@property(copy, nonatomic) NSNumber* realTimeChangePercent;
@property(copy, nonatomic) NSNumber* realTimeChange;
@property(copy, nonatomic) NSNumber* price;
@property(copy, nonatomic) NSNumber* prevClose;
@property(copy, nonatomic) NSNumber* peRatio;
@property(copy, nonatomic) NSNumber* open;
@property(copy, nonatomic) NSString* name;
@property(copy, nonatomic) NSString* marketCap;
@property(copy, nonatomic) NSNumber* low;
@property(copy, nonatomic) NSString* link;
@property(copy, nonatomic) NSNumber* high;
@property(copy, nonatomic) NSString* exchange;
@property(copy, nonatomic) NSNumber* earningsPerShare;
@property(copy, nonatomic) NSNumber* dividendYield;
@property(copy, nonatomic) NSString* displayStyle;
@property(copy, nonatomic) NSString* currency;
@property(copy, nonatomic) NSString* chartData;
@property(copy, nonatomic) NSNumber* changePercent;
@property(copy, nonatomic) NSNumber* change;
@property(copy, nonatomic) NSNumber* averageDailyVolume;
+(id)objectWithDictionary:(id)dictionary context:(id)context;
+(id)object;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setYearRange:(id)range;
// declared property getter: -(id)yearRange;
// declared property setter: -(void)setVolume:(id)volume;
// declared property getter: -(id)volume;
// declared property setter: -(void)setTimeStamp:(id)stamp;
// declared property getter: -(id)timeStamp;
// declared property setter: -(void)setSymbol:(id)symbol;
// declared property getter: -(id)symbol;
// declared property setter: -(void)setStockNews:(id)news;
// declared property getter: -(id)stockNews;
// declared property setter: -(void)setStatus:(id)status;
// declared property getter: -(id)status;
// declared property setter: -(void)setRequests:(id)requests;
// declared property getter: -(id)requests;
// declared property setter: -(void)setRealTimeTS:(id)ts;
// declared property getter: -(id)realTimeTS;
// declared property setter: -(void)setRealTimePrice:(id)price;
// declared property getter: -(id)realTimePrice;
// declared property setter: -(void)setRealTimeChangePercent:(id)percent;
// declared property getter: -(id)realTimeChangePercent;
// declared property setter: -(void)setRealTimeChange:(id)change;
// declared property getter: -(id)realTimeChange;
// declared property setter: -(void)setPrice:(id)price;
// declared property getter: -(id)price;
// declared property setter: -(void)setPrevClose:(id)close;
// declared property getter: -(id)prevClose;
// declared property setter: -(void)setPeRatio:(id)ratio;
// declared property getter: -(id)peRatio;
// declared property setter: -(void)setOpen:(id)open;
// declared property getter: -(id)open;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property setter: -(void)setMarketCap:(id)cap;
// declared property getter: -(id)marketCap;
// declared property setter: -(void)setLow:(id)low;
// declared property getter: -(id)low;
// declared property setter: -(void)setLink:(id)link;
// declared property getter: -(id)link;
// declared property setter: -(void)setHigh:(id)high;
// declared property getter: -(id)high;
// declared property setter: -(void)setExchange:(id)exchange;
// declared property getter: -(id)exchange;
// declared property setter: -(void)setEarningsPerShare:(id)share;
// declared property getter: -(id)earningsPerShare;
// declared property setter: -(void)setDividendYield:(id)yield;
// declared property getter: -(id)dividendYield;
// declared property setter: -(void)setDisplayStyle:(id)style;
// declared property getter: -(id)displayStyle;
// declared property setter: -(void)setCurrency:(id)currency;
// declared property getter: -(id)currency;
// declared property setter: -(void)setChartData:(id)data;
// declared property getter: -(id)chartData;
// declared property setter: -(void)setChangePercent:(id)percent;
// declared property getter: -(id)changePercent;
// declared property setter: -(void)setChange:(id)change;
// declared property getter: -(id)change;
// declared property setter: -(void)setAverageDailyVolume:(id)volume;
// declared property getter: -(id)averageDailyVolume;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

