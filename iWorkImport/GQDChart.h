/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChartModel, GQDSStyle, GQDChartLegend;

__attribute__((visibility("hidden")))
@interface GQDChart : GQDGraphic {
@private
	GQDChartLegend* mLegend;
	BOOL mIsLegendRetained;
	GQDChartModel* mModel;
	GQDSStyle* mStyle;
	long mType;
}
@property(retain) id legend;	// converted property
+(const StateSpec*)stateForReading;
// converted property setter: -(void)setLegend:(id)legend;
-(long)type;
-(id)graphicStyle;
-(id)style;
-(id)model;
// converted property getter: -(id)legend;
-(void)dealloc;
@end

