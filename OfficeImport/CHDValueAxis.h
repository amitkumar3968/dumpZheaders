/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDValueAxis : CHDAxis {
@private
	bool mPercentageFormattingFlag;
	bool mAutoMajorUnitValue;
	bool mAutoMinorUnitValue;
	double mMajorUnitValue;
	double mMinorUnitValue;
	double mScalingLogBase;
}
@property(assign, getter=isPercentageFormattingFlag) bool percentageFormattingFlag;	// converted property
@property(assign) double scalingLogBase;	// converted property
@property(assign) double minorUnitValue;	// converted property
@property(assign) double majorUnitValue;	// converted property
-(void)adjustAxisPositionForHorizontalChart;
-(bool)isAutoMinorUnitValue;
-(bool)isAutoMajorUnitValue;
// converted property setter: -(void)setPercentageFormattingFlag:(bool)flag;
// converted property getter: -(bool)isPercentageFormattingFlag;
// converted property setter: -(void)setScalingLogBase:(double)base;
// converted property getter: -(double)scalingLogBase;
// converted property setter: -(void)setMinorUnitValue:(double)value;
// converted property getter: -(double)minorUnitValue;
// converted property setter: -(void)setMajorUnitValue:(double)value;
// converted property getter: -(double)majorUnitValue;
-(id)initWithResources:(id)resources;
@end

