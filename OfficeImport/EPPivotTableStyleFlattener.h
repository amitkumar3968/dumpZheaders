/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDPivotTable;

__attribute__((visibility("hidden")))
@interface EPPivotTableStyleFlattener : EPStyleFlattener {
@private
	EDPivotTable* mPivotTable;
	int mFirstHeaderRow;
	int mFirstDataRow;
	int mFirstDataColumn;
	unsigned mRowFieldsCount;
	unsigned mColumnFieldsCount;
	unsigned mPageFieldsCount;
}
-(void)clearCache;
-(void)cacheSizes:(id)sizes inObject:(id)object;
-(int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;
-(id)keysInTheOrderTheyShouldBeApplied;
-(id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;
-(id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;
-(id)styleFromObject:(id)object;
-(id)collectionFromWorksheet:(id)worksheet;
-(bool)isObjectSupported:(id)supported;
-(void)addSubtotalColumnLevel:(unsigned)level to:(id)to;
-(void)addSubtotalRowLevel:(unsigned)level to:(id)to;
-(void)addColumnSubheadingLevel:(unsigned)level to:(id)to;
-(void)addRowSubheadingLevel:(unsigned)level to:(id)to;
-(unsigned)constrainLevel:(unsigned)level;
-(int)stripeOffset:(int)offset row:(bool)row;
@end

