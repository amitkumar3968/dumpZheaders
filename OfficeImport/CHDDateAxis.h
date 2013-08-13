/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDAxis.h"


__attribute__((visibility("hidden")))
@interface CHDDateAxis : CHDAxis {
@private
	bool mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;
}
@property(assign) int baseTimeUnit;	// converted property
@property(assign) int minorTimeUnit;	// converted property
@property(assign) int majorTimeUnit;	// converted property
@property(assign) double minorUnitValue;	// converted property
@property(assign) double majorUnitValue;	// converted property
@property(assign, getter=isAutomatic) bool automatic;	// converted property
// converted property setter: -(void)setBaseTimeUnit:(int)unit;
// converted property getter: -(int)baseTimeUnit;
// converted property setter: -(void)setMinorTimeUnit:(int)unit;
// converted property getter: -(int)minorTimeUnit;
// converted property setter: -(void)setMajorTimeUnit:(int)unit;
// converted property getter: -(int)majorTimeUnit;
// converted property setter: -(void)setMinorUnitValue:(double)value;
// converted property getter: -(double)minorUnitValue;
// converted property setter: -(void)setMajorUnitValue:(double)value;
// converted property getter: -(double)majorUnitValue;
// converted property setter: -(void)setAutomatic:(bool)automatic;
// converted property getter: -(bool)isAutomatic;
-(bool)isDate;
-(id)initWithResources:(id)resources;
@end
