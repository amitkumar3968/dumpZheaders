/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper {
@private
	EDColumnInfo* edColumnInfo;
	double columnWidth;
	int columnSpan;
}
@property(readonly, assign) double columnWidth;	// converted property
-(void)mapAt:(id)at withState:(id)state;
-(id)initWithDefaultWidth:(double)defaultWidth span:(int)span parent:(id)parent;
-(id)initWithEDColumnInfo:(id)edcolumnInfo maxSpan:(int)span parent:(id)parent;
// converted property getter: -(double)columnWidth;
@end

