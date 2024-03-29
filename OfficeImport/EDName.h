/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDString, EDFormula, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDName : XXUnknownSuperclass {
@private
	unsigned mSheetIndex;
	EDString* mNameString;
	EDFormula* mFormula;
	TSUPointerKeyDictionary* mMaxWorksheetReferences;
}
@property(assign) unsigned sheetIndex;	// converted property
@property(retain) id nameString;	// converted property
-(id)maxWorksheetReferences;
// converted property setter: -(void)setSheetIndex:(unsigned)index;
// converted property getter: -(unsigned)sheetIndex;
-(void)setCleanedFormula:(id)formula;
-(void)setFormula:(id)formula workbook:(id)workbook;
-(id)formula;
// converted property setter: -(void)setNameString:(id)string;
// converted property getter: -(id)nameString;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)isEqualToString:(id)string;
-(BOOL)isEqualToEDName:(id)edname;
-(void)dealloc;
-(id)init;
@end

