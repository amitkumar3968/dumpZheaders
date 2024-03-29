/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class WDTableRowProperties, WDTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface WDTableRow : XXUnknownSuperclass {
@private
	int mIndex;
	WDTable* mTable;
	WDTableRowProperties* mProperties;
	NSMutableArray* mCells;
}
-(id)newCellIterator;
-(id)cellIterator;
-(id)addCellWithIndex:(int)index;
-(id)addCell;
-(id)cellAt:(int)at;
-(int)cellCount;
-(id)properties;
-(id)table;
-(int)index;
-(void)dealloc;
-(id)initWithTable:(id)table at:(int)at;
@end

