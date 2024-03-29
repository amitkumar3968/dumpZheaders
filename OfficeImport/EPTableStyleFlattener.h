/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDTable;

__attribute__((visibility("hidden")))
@interface EPTableStyleFlattener : EPStyleFlattener {
@private
	EDTable* mTable;
	unsigned mHeaderRowCount;
	unsigned mTotalsRowCount;
}
-(void)clearCache;
-(void)cacheSizes:(id)sizes inObject:(id)object;
-(int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;
-(id)keysInTheOrderTheyShouldBeApplied;
-(id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;
-(id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;
-(id)extractGlobalStyleElements:(id)elements;
-(id)styleFromObject:(id)object;
-(id)collectionFromWorksheet:(id)worksheet;
-(bool)isObjectSupported:(id)supported;
-(int)stripeOffset:(int)offset row:(bool)row;
@end

