/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EFHelper.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EDWorkbook, EDWorksheet, ECMappingContext;

__attribute__((visibility("hidden")))
@interface EDFormulaHelper : XXUnknownSuperclass <EFHelper> {
@private
	EDWorkbook* mWorkbook;
	EDWorksheet* mWorksheet;
	int mRowNumber;
	int mColumnNumber;
	ECMappingContext* mMappingContext;
}
-(int)columnNumber;
-(int)rowNumber;
-(id)workbook;
-(bool)isThereContentOutsideOfLassoBoundsForRowMin:(unsigned)rowMin rowMax:(unsigned)max columnMin:(unsigned)min columnMax:(unsigned)max4;
-(int)resolveFunctionName:(id)name;
-(BOOL)isCurrentSheet:(id)sheet;
-(unsigned)resolveTableColumn:(id)column columnName:(id)name;
-(unsigned)resolveTableToSheetId:(id)sheetId;
-(id)resolveTable:(id)table;
-(unsigned)resolveFile:(id)file;
-(unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;
-(unsigned)resolveSheet:(id)sheet;
-(unsigned)resolveName:(id)name;
-(void)dealloc;
-(id)initWithWorkbook:(id)workbook worksheet:(id)worksheet rowNumber:(int)number columnNumber:(int)number4;
-(unsigned)createIndexWithType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;
@end

