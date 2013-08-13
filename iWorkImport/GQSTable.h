/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GQDTTable, GQDTOverlapCell, GQDTCell;

__attribute__((visibility("hidden")))
@interface GQSTable : XXUnknownSuperclass {
@private
	GQDTTable* mTable;
	GQDTOverlapCell* mCurrentOverlapCell;
	GQDTCell* mLastCellRead;
	BOOL mIsStreaming;
	BOOL mAlwaysPutReadCellsInArray;
	long mCellCount;
	BOOL mIsCounting;
}
@property(assign) BOOL alwaysPutReadCellsInArray;	// converted property
@property(retain) id lastCellRead;	// converted property
@property(retain) id currentOverlapCell;	// converted property
-(BOOL)isCounting;
-(void)setIsCountingCount:(BOOL)count;
-(void)incrementCellPosition;
-(void)skipCells:(long)cells;
-(long)column;
-(long)row;
// converted property setter: -(void)setAlwaysPutReadCellsInArray:(BOOL)array;
// converted property getter: -(BOOL)alwaysPutReadCellsInArray;
-(id)table;
-(BOOL)isStreaming;
// converted property setter: -(void)setLastCellRead:(id)read;
// converted property getter: -(id)lastCellRead;
// converted property setter: -(void)setCurrentOverlapCell:(id)cell;
// converted property getter: -(id)currentOverlapCell;
-(void)dealloc;
-(id)initWithStreaming:(BOOL)streaming table:(id)table;
@end

