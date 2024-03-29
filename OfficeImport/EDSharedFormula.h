/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormula.h"

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula : EDFormula {
@private
	unsigned mBaseFormulaIndex;
	int mRowBaseOrOffset;
	int mColumnBaseOrOffset;
	EDReference* mBaseFormulaRange;
}
@property(assign) int columnBaseOrOffset;	// converted property
@property(assign) int rowBaseOrOffset;	// converted property
@property(assign) unsigned baseFormulaIndex;	// converted property
-(bool)isSharedFormula;
-(id)warningWithRowBlocks:(id)rowBlocks;
// converted property setter: -(void)setColumnBaseOrOffset:(int)offset;
// converted property getter: -(int)columnBaseOrOffset;
// converted property setter: -(void)setRowBaseOrOffset:(int)offset;
// converted property getter: -(int)rowBaseOrOffset;
-(bool)isBaseFormula;
-(id)baseFormulaWithRowBlocks:(id)rowBlocks;
// converted property setter: -(void)setBaseFormulaIndex:(unsigned)index;
// converted property getter: -(unsigned)baseFormulaIndex;
-(void)dealloc;
-(id)init;
-(id)initWithFormula:(id)formula;
-(void)updateBaseFormulaRangeWithRow:(int)row column:(int)column;
-(id)baseFormulaRange;
-(void)archiveByAppendingToMutableData:(CFDataRef)mutableData;
-(void)unarchiveFromData:(CFDataRef)data offset:(unsigned*)offset;
@end

