/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class OABReaderState, OADTable, ESDContainer, OABTableSortedIntArray;

__attribute__((visibility("hidden")))
@interface OABRTable : XXUnknownSuperclass {
@private
	ESDContainer* mSrcTable;
	OADTable* mTgtTable;
	OABReaderState* mState;
	CGPoint mScale;
	int mRowCount;
	int mColumnCount;
	OABTableSortedIntArray* mXCoords;
	OABTableSortedIntArray* mYCoords;
	OABTable2DArray<EshShape* >* mHorzLines;
	OABTable2DArray<EshShape* >* mVertLines;
	OABTable2DArray<OABTableCell>* mCells;
}
-(id).cxx_construct;
-(void)map;
-(void)createTargetTableContents;
-(id)readStrokeFromShape:(EshShape*)shape;
-(void)validateTable;
-(void)readCellsAndLines;
-(void)readCoordinates;
-(void)mapScale;
-(void)readAnchor;
-(void)dealloc;
-(id)initWithSourceTable:(id)sourceTable targetTable:(id)table state:(id)state;
@end

