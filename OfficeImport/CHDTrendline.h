/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDString, OADGraphicProperties, CHDTrendlineLabel;

__attribute__((visibility("hidden")))
@interface CHDTrendline : XXUnknownSuperclass {
@private
	bool mDisplayEquation;
	bool mDisplayRSquaredValue;
	double mBackward;
	double mForward;
	double mInterceptYAxis;
	int mPolynomialOrder;
	int mMovingAveragePeriod;
	int mType;
	OADGraphicProperties* mGraphicProperties;
	CHDTrendlineLabel* mLabel;
	EDString* mName;
}
@property(retain) id name;	// converted property
@property(retain) id graphicProperties;	// converted property
@property(retain) id label;	// converted property
@property(assign) int type;	// converted property
@property(assign) int movingAveragePeriod;	// converted property
@property(assign) int polynomialOrder;	// converted property
@property(assign) double interceptYAxis;	// converted property
@property(assign) double forward;	// converted property
@property(assign) double backward;	// converted property
@property(assign, getter=isDisplayRSquaredValue) bool displayRSquaredValue;	// converted property
@property(assign, getter=isDisplayEquation) bool displayEquation;	// converted property
+(id)trendline;
-(id)defaultNameWithSeriesName:(id)seriesName;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
// converted property setter: -(void)setGraphicProperties:(id)properties;
// converted property getter: -(id)graphicProperties;
// converted property setter: -(void)setLabel:(id)label;
// converted property getter: -(id)label;
// converted property setter: -(void)setType:(int)type;
// converted property getter: -(int)type;
// converted property setter: -(void)setMovingAveragePeriod:(int)period;
// converted property getter: -(int)movingAveragePeriod;
// converted property setter: -(void)setPolynomialOrder:(int)order;
// converted property getter: -(int)polynomialOrder;
// converted property setter: -(void)setInterceptYAxis:(double)axis;
// converted property getter: -(double)interceptYAxis;
// converted property setter: -(void)setForward:(double)forward;
// converted property getter: -(double)forward;
// converted property setter: -(void)setBackward:(double)backward;
// converted property getter: -(double)backward;
// converted property setter: -(void)setDisplayRSquaredValue:(bool)value;
// converted property getter: -(bool)isDisplayRSquaredValue;
// converted property setter: -(void)setDisplayEquation:(bool)equation;
// converted property getter: -(bool)isDisplayEquation;
-(void)dealloc;
-(id)init;
@end
