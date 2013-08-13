/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMTableCellStyle : WMStyle {
@private
	double mLeftPadding;
	double mRightPadding;
}
+(float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;
+(id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;
+(id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;
+(id)dominantColorOf:(id)of;
-(double)rightPadding;
-(double)leftPadding;
-(void)addTableCellProperties:(id)properties;
-(id)initWithTableCellProperties:(id)tableCellProperties;
@end

