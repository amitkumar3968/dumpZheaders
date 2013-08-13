/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ECUtils : XXUnknownSuperclass {
}
+(void)incrementFormulaCellCount:(unsigned*)count;
+(void)incrementTotalCellCount:(unsigned*)count;
+(bool)isValidDateTime:(double)time edWorkbook:(id)workbook;
+(id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;
+(id)lassoStyleTableReferenceFromTableId:(id)tableId;
+(id)renameFunction:(id)function;
+(BOOL)isRenameFunction:(id)function;
+(double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;
@end

