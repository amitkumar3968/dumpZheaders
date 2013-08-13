/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVState.h"

@class EDWorkbook, EDSheet, EXOAVState, EXOfficeArtState, OCPPackagePart, ECColumnWidthConvertor, NSMutableArray, EDReference, NSMutableDictionary, CPImportTracing, EDResources;
@protocol OCCancelDelegate;

__attribute__((visibility("hidden")))
@interface EXState : OAVState {
@private
	unsigned mCurrentSheetIndex;
	EDSheet* mCurrentSheet;
	unsigned mCellStyleXfsOffset;
	double mDefaultColumnWidth;
	double mDefaultRowHeight;
	OCPPackagePart* mCurrentPart;
	OCPPackagePart* mWorkbookPart;
	CFDictionaryRef mSharedFormulasMap;
	NSMutableArray* mArrayedFormulas;
	EDReference* mSheetDimension;
	EXOfficeArtState* mOfficeArtState;
	EXOAVState* mOAVState;
	bool mMaxColumnsWarned;
	bool mMaxRowsWarned;
	bool mIsPredefinedTableStylesRead;
	NSMutableDictionary* mReferenceForCommentTextBox;
	bool mIsPredefinedDxfsBeingRead;
	xmlNs* mRelationshipNS;
	unsigned mTotalCellsWithContentCount;
	unsigned mTotalCellsWithFormulaCount;
	ECColumnWidthConvertor* mColumnWidthConvertor;
	NSMutableArray* mLegacyDrawables;
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	id<OCCancelDelegate> mCancelDelegate;
	CPImportTracing* mTracing;
}
@property(readonly, assign, nonatomic) id<OCCancelDelegate> cancelDelegate;	// @synthesize=mCancelDelegate
@property(assign, getter=isPredefinedDxfsBeingRead) bool predefinedDxfsBeingRead;	// converted property
@property(assign, getter=isPredefinedTableStylesRead) bool predefinedTableStylesRead;	// converted property
@property(retain) id officeArtState;	// converted property
@property(retain) id sheetDimension;	// converted property
@property(retain) id currentPart;	// converted property
@property(assign) double defaultRowHeight;	// converted property
@property(assign) double defaultColumnWidth;	// converted property
@property(assign) unsigned cellStyleXfsOffset;	// converted property
@property(retain) id currentSheet;	// converted property
@property(retain) id resources;	// converted property
@property(retain) id workbook;	// converted property
@property(assign) unsigned currentSheetIndex;	// converted property
// declared property getter: -(id)cancelDelegate;
-(BOOL)isCancelled;
-(void)reportWorksheetWarning:(CPTaggedMessageStructure*)warning;
-(void)reportWarning:(CPTaggedMessageStructure*)warning;
-(id)legacyDrawables;
-(id)columnWidthConvertor;
-(void)incrementCellsWithFormulaCount;
-(void)incrementCellsWithContentCount;
-(unsigned)cellsWithContentCount;
-(void)relationshipNameSpaceForWorkbook:(xmlNs*)workbook;
-(xmlNs*)relationshipNameSpaceForWorkbook;
// converted property setter: -(void)setPredefinedDxfsBeingRead:(bool)read;
// converted property getter: -(bool)isPredefinedDxfsBeingRead;
-(void)resetForNewSheet;
// converted property setter: -(void)setPredefinedTableStylesRead:(bool)read;
// converted property getter: -(bool)isPredefinedTableStylesRead;
-(id)textBoxForReference:(id)reference;
-(void)setTextBox:(id)box forReference:(id)reference;
-(id)oavState;
// converted property setter: -(void)setOfficeArtState:(id)state;
// converted property getter: -(id)officeArtState;
// converted property setter: -(void)setSheetDimension:(id)dimension;
// converted property getter: -(id)sheetDimension;
-(id)arrayedFormulas;
-(void)addSharedBaseFormulaIndex:(unsigned)index withIndex:(long)index2;
-(unsigned)sharedBaseFormulaIndexWithIndex:(long)index;
-(id)workbookPart;
// converted property setter: -(void)setCurrentPart:(id)part;
// converted property getter: -(id)currentPart;
// converted property setter: -(void)setDefaultRowHeight:(double)height;
// converted property getter: -(double)defaultRowHeight;
// converted property setter: -(void)setDefaultColumnWidth:(double)width;
// converted property getter: -(double)defaultColumnWidth;
// converted property setter: -(void)setCellStyleXfsOffset:(unsigned)offset;
// converted property getter: -(unsigned)cellStyleXfsOffset;
// converted property setter: -(void)setCurrentSheet:(id)sheet;
// converted property getter: -(id)currentSheet;
// converted property setter: -(void)setResources:(id)resources;
// converted property getter: -(id)resources;
// converted property setter: -(void)setWorkbook:(id)workbook;
// converted property getter: -(id)workbook;
// converted property setter: -(void)setCurrentSheetIndex:(unsigned)index;
// converted property getter: -(unsigned)currentSheetIndex;
-(void)dealloc;
-(id)initWithWorkbookPart:(id)workbookPart cancelDelegate:(id)delegate tracing:(id)tracing;
@end

