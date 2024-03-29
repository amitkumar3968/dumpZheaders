/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class EDWorksheet, ECColumnWidthConvertor, CMStyle;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
	EDWorksheet* edWorksheet;
	CMStyle* mStyle;
	int mMaxPopulatedColumn;
	int mMaxPopulatedRow;
	double* mColumnGrid;
	double* mRowGrid;
	int mWidth;
	int mHeight;
	ECColumnWidthConvertor* mColumnWidthConvertor;
}
-(CGSize)preprocessSizeWithState:(id)state;
-(CGSize)preprocessDrawableSizeWithState:(id)state;
-(int)preprocessHeightWithState:(id)state;
-(int)preprocessWidthWithState:(id)state;
-(id)columnWidthConvertor;
-(void)mapAt:(id)at withState:(id)state;
-(int)height;
-(int)width;
-(double)defaultColumnWidth;
-(double)xlColumnWidthToPoints:(double)points;
-(double)defaultRowHeight;
-(int)maxRowNumber;
-(double*)rowGrid;
-(int)columnCount;
-(double*)columnGrid;
-(BOOL)isVisible;
-(void)dealloc;
-(void)_initWithState:(id)state;
-(id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;
-(void)mapTableStyleAt:(id)at withState:(id)state;
-(void)mapTableAt:(id)at withState:(id)state;
-(void)mapDrawablesAt:(id)at withState:(id)state;
-(void)mapGridAt:(id)at;
-(void)mapColumnInfosAt:(id)at withState:(id)state;
-(void)countRowsAndColumnsWithState:(id)state;
-(void)setRowGrid;
@end

