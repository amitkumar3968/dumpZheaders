/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "EDKeyedObject.h"

@class CHDErrorBar, CHDFormula, OADGraphicProperties, CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, EDCollection, EDKeyedCollection;

__attribute__((visibility("hidden")))
@interface CHDSeries : XXUnknownSuperclass <EDKeyedObject> {
@private
	CHDChart* mChart;
	CHDChartType* mChartType;
	int mOrder;
	int mStyleIndex;
	CHDFormula* mName;
	CHDDataValue* mLastCachedName;
	CHDData* mValueData;
	CHDData* mCategoryData;
	EDKeyedCollection* mDataValuePropertiesCollection;
	EDCollection* mTrendlinesCollection;
	CHDErrorBar* mErrorBarX;
	CHDErrorBar* mErrorBarY;
	CHDDataLabel* mDefaultDataLabel;
	OADGraphicProperties* mGraphicProperties;
	bool mDateTimeFormattingFlag;
	bool mHiddenFlag;
}
@property(assign, getter=isDateTimeFormattingFlag) bool dateTimeFormattingFlag;	// converted property
@property(retain) id graphicProperties;	// converted property
@property(retain) id defaultDataLabel;	// converted property
@property(retain) id errorBarYAxis;	// converted property
@property(retain) id errorBarXAxis;	// converted property
@property(retain) id trendlineCollection;	// converted property
@property(retain) id dataValuePropertiesCollection;	// converted property
@property(retain) id categoryData;	// converted property
@property(retain) id valueData;	// converted property
@property(retain) id name;	// converted property
@property(retain) id lastCachedName;	// converted property
@property(assign) int styleIndex;	// converted property
@property(assign) int order;	// converted property
@property(retain) id chartType;	// converted property
+(id)seriesWithChart:(id)chart;
-(bool)isEmpty;
-(id)defaultSeriesNameForIndex:(int)index;
-(void)setHiddenFlag:(bool)flag;
-(bool)isHidden;
// converted property getter: -(bool)isDateTimeFormattingFlag;
// converted property setter: -(void)setDateTimeFormattingFlag:(bool)flag;
// converted property setter: -(void)setGraphicProperties:(id)properties;
// converted property getter: -(id)graphicProperties;
// converted property setter: -(void)setDefaultDataLabel:(id)label;
// converted property getter: -(id)defaultDataLabel;
// converted property setter: -(void)setErrorBarYAxis:(id)axis;
// converted property getter: -(id)errorBarYAxis;
// converted property setter: -(void)setErrorBarXAxis:(id)axis;
// converted property getter: -(id)errorBarXAxis;
-(bool)hasErrorBars;
-(void)setErrorBar:(id)bar;
-(bool)hasTrendlines;
// converted property setter: -(void)setTrendlineCollection:(id)collection;
// converted property getter: -(id)trendlineCollection;
// converted property setter: -(void)setDataValuePropertiesCollection:(id)collection;
// converted property getter: -(id)dataValuePropertiesCollection;
-(unsigned)categoryCount;
// converted property setter: -(void)setCategoryData:(id)data;
// converted property getter: -(id)categoryData;
// converted property setter: -(void)setValueData:(id)data;
// converted property getter: -(id)valueData;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
// converted property setter: -(void)setLastCachedName:(id)name;
// converted property getter: -(id)lastCachedName;
// converted property setter: -(void)setStyleIndex:(int)index;
// converted property getter: -(int)styleIndex;
// converted property setter: -(void)setOrder:(int)order;
// converted property getter: -(int)order;
-(int)key;
// converted property setter: -(void)setChartType:(id)type;
-(id)chart;
// converted property getter: -(id)chartType;
-(void)dealloc;
-(void)clearBackPointers;
-(id)shallowCopy;
-(id)initWithChart:(id)chart;
@end

