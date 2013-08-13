/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDTTable;

__attribute__((visibility("hidden")))
@interface GQHTableState : XXUnknownSuperclass {
@private
	int mPrevRowIndex;
	int mPrevColumnIndex;
	GQDTTable* mTable;
	vector<unsigned short, std::allocator<unsigned short> >* mCellCountInColumns;
	int mGroupLevel;
	bool mSplitTable;
	double mCurrentTablePosition;
	double mLastAttachmentPosition;
	long mSplitTableIndex;
	double mOriginalTableHeight;
}
@property(assign) double originalTableHeight;	// converted property
@property(assign) double lastAttachmentPosition;	// converted property
@property(assign) bool splitTable;	// converted property
@property(assign) int groupLevel;	// converted property
@property(retain) id table;	// converted property
// converted property setter: -(void)setOriginalTableHeight:(double)height;
// converted property getter: -(double)originalTableHeight;
// converted property setter: -(void)setLastAttachmentPosition:(double)position;
// converted property getter: -(double)lastAttachmentPosition;
-(void)addRowHeight:(float)height;
-(double)currentTablePosition;
-(long)nextSplitTableIndex;
-(void)setSplitTableIndex:(long)index;
// converted property setter: -(void)setSplitTable:(bool)table;
// converted property getter: -(bool)splitTable;
// converted property setter: -(void)setGroupLevel:(int)level;
// converted property getter: -(int)groupLevel;
-(vector<unsigned short, std::allocator<unsigned short> >*)cellCountInColumns;
// converted property setter: -(void)setTable:(id)table;
// converted property getter: -(id)table;
-(void)setPrevRowIndex:(int)index columnIndex:(int)index2;
-(int)prevColumnIndex;
-(int)prevRowIndex;
-(void)dealloc;
-(id)init;
@end

