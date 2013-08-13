/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EDWorkbook, EDRowBlock, EDWorksheet, EDRowBlocks, EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : XXUnknownSuperclass {
@private
	EDWorkbook* mWorkbook;
	EDWorksheet* mCurrentSheet;
	EDCollection* mReferences;
	EDReference* mReference;
	EDRowBlocks* mRowBlocks;
	EDRowBlock* mRowBlock;
	unsigned mRowBlockIndex;
	EDRowInfo* mRowInfo;
	unsigned mRowInfoIndex;
	unsigned mCellIndex;
	unsigned mNextArrayIndex;
	int mCurrentCellIndex;
	unsigned mPreviousColumnNumber;
}
+(id)referenceIteratorWithReferenceArray:(id)referenceArray workbook:(id)workbook;
+(id)referenceIteratorWithReference:(id)reference workbook:(id)workbook;
-(unsigned)currentCellIndex;
-(EDCellHeader*)nextCell;
-(void)setCurrentSheet:(id)sheet;
-(void)dealloc;
-(id)initWithReferenceArray:(id)referenceArray workbook:(id)workbook;
-(id)initWithReference:(id)reference workbook:(id)workbook;
-(id)initWithReferenceArray:(id)referenceArray reference:(id)reference workbook:(id)workbook;
-(bool)nextRow;
-(bool)nextReference;
-(void)setReference:(id)reference;
@end

