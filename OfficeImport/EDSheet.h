/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDDelayedNode.h"

@class TSUPointerKeyDictionary, EDWarnings, ESDContainer, EDWorkbook, EDString, EDProcessors, NSMutableArray, EDPageSetup, EDHeaderFooter, EDColorReference;

__attribute__((visibility("hidden")))
@interface EDSheet : OCDDelayedNode {
@private
	EDWorkbook* mWorkbook;
	EDString* mName;
	bool mHidden;
	bool mDisplayFormulas;
	bool mDisplayGridlines;
	bool mIsDialogSheet;
	EDColorReference* mDefaultGridlineColorReference;
	EDHeaderFooter* mHeaderFooter;
	EDPageSetup* mPageSetup;
	NSMutableArray* mDrawables;
	TSUPointerKeyDictionary* mTextBoxMap;
	TSUPointerKeyDictionary* mCommentMap;
	EDProcessors* mProcessors;
	EDWarnings* mWarnings;
	ESDContainer* mEscherDrawing;
}
@property(assign, nonatomic) bool isDialogSheet;	// @synthesize=mIsDialogSheet
@property(retain) id pageSetup;	// converted property
@property(retain) id headerFooter;	// converted property
@property(retain) id defaultGridlineColor;	// converted property
@property(assign, getter=isDisplayGridlines) bool displayGridlines;	// converted property
@property(assign, getter=isDisplayFormulas) bool displayFormulas;	// converted property
@property(assign, getter=isHidden) bool hidden;	// converted property
@property(retain) id name;	// converted property
@property(retain) id escherDrawing;	// converted property
@property(retain) id defaultGridlineColorReference;	// converted property
+(id)sheetWithWorkbook:(id)workbook;
// declared property setter: -(void)setIsDialogSheet:(bool)sheet;
// declared property getter: -(bool)isDialogSheet;
-(id)warnings;
-(void)applyProcessors;
-(id)processors;
-(void)setEDComment:(id)comment forShape:(id)shape;
-(id)edCommentForShape:(id)shape;
-(void)setEDTextBox:(id)box forShape:(id)shape;
-(id)edTextBoxForShape:(id)shape;
-(id)drawables;
-(void)removeDrawableAtIndex:(unsigned)index;
-(void)addDrawable:(id)drawable;
-(id)drawableAtIndex:(unsigned)index;
-(unsigned)drawableCount;
// converted property setter: -(void)setPageSetup:(id)setup;
// converted property getter: -(id)pageSetup;
// converted property setter: -(void)setHeaderFooter:(id)footer;
// converted property getter: -(id)headerFooter;
// converted property setter: -(void)setDefaultGridlineColor:(id)color;
// converted property getter: -(id)defaultGridlineColor;
// converted property setter: -(void)setDisplayGridlines:(bool)gridlines;
// converted property getter: -(bool)isDisplayGridlines;
// converted property setter: -(void)setDisplayFormulas:(bool)formulas;
// converted property getter: -(bool)isDisplayFormulas;
// converted property setter: -(void)setHidden:(bool)hidden;
// converted property getter: -(bool)isHidden;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(id)name;
-(id)workbook;
-(void)doneWithNonRowContent;
-(void)dealloc;
-(id)initWithWorkbook:(id)workbook;
-(void)reduceMemoryIfPossible;
// converted property setter: -(void)setEscherDrawing:(id)drawing;
// converted property getter: -(id)escherDrawing;
-(id)drawableEnumerator;
// converted property setter: -(void)setDefaultGridlineColorReference:(id)reference;
// converted property getter: -(id)defaultGridlineColorReference;
-(void)teardown;
-(void)setup;
@end
