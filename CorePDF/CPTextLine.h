/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPTextObject.h"

@class CPCharSequence, NSArray;

@interface CPTextLine : CPTextObject <CPDisposable> {
	CPCharSequence* charSequence;
	XXStruct_iDweLB* wordArray;
	unsigned wordCount;
	CPInlineContainer* inlineList;
	int lineNumber;
	int columnNumber;
	float baseline;
	BOOL baseLineIsNull;
	BOOL hasBeenSplit;
	BOOL hasBeenProcessed;
	BOOL maySplit;
	BOOL hasTabs;
	NSArray* columnBreaks;
	NSArray* xsegments;
	int levels;
	float maximumLetterGap;
	float maximumWordGap;
	int tabsBefore;
	BOOL irregular;
	unsigned leftSpacerIndex;
	unsigned rightSpacerIndex;
	BOOL isListItem;
	unsigned listSpacerIndex;
	BOOL lineBreakAfter;
	CPPDFStyle* uniformStyle;
	unsigned short uniformStyleFlags;
	float monospaceWidth;
	unsigned* spacesBefore;
	BOOL disposed;
}
@property(assign, nonatomic) BOOL lineBreakAfter;	// @synthesize
@property(assign, nonatomic) unsigned listSpacerIndex;	// @synthesize
@property(assign, nonatomic) BOOL isListItem;	// @synthesize
@property(assign, nonatomic) unsigned rightSpacerIndex;	// @synthesize
@property(assign, nonatomic) unsigned leftSpacerIndex;	// @synthesize
@property(assign) BOOL irregular;	// converted property
@property(assign) float maximumWordGap;	// converted property
@property(assign) float maximumLetterGap;	// converted property
@property(assign) int levels;	// converted property
@property(assign) float baseline;	// converted property
@property(assign) int tabsBefore;	// converted property
@property(assign) BOOL hasTabs;	// converted property
@property(retain) NSArray* columnBreaks;	// converted property
@property(assign) BOOL hasBeenProcessed;	// converted property
@property(assign) BOOL hasBeenSplit;	// converted property
@property(retain) CPCharSequence* charSequence;	// converted property
@property(readonly, assign) XXStruct_iDweLB* wordArray;	// converted property
@property(readonly, assign) unsigned wordCount;	// converted property
@property(readonly, assign) CPInlineContainer* inlineList;	// converted property
@property(readonly, assign) float monospaceWidth;	// converted property
// declared property setter: -(void)setLineBreakAfter:(BOOL)after;
// declared property getter: -(BOOL)lineBreakAfter;
// declared property setter: -(void)setListSpacerIndex:(unsigned)index;
// declared property getter: -(unsigned)listSpacerIndex;
// declared property setter: -(void)setIsListItem:(BOOL)item;
// declared property getter: -(BOOL)isListItem;
// declared property setter: -(void)setRightSpacerIndex:(unsigned)index;
// declared property getter: -(unsigned)rightSpacerIndex;
// declared property setter: -(void)setLeftSpacerIndex:(unsigned)index;
// declared property getter: -(unsigned)leftSpacerIndex;
-(float)medianFontSize;
-(BOOL)hasDropCap;
-(int)topIsAbove:(id)above;
-(id)attributes;
// converted property setter: -(void)setIrregular:(BOOL)irregular;
// converted property getter: -(BOOL)irregular;
// converted property setter: -(void)setMaximumWordGap:(float)gap;
// converted property getter: -(float)maximumWordGap;
// converted property setter: -(void)setMaximumLetterGap:(float)gap;
// converted property getter: -(float)maximumLetterGap;
-(void)recomputeLevels;
// converted property setter: -(void)setLevels:(int)levels;
// converted property getter: -(int)levels;
-(void)setSpaces:(unsigned)spaces beforeWordAtIndex:(unsigned)index;
-(unsigned)spacesBeforeWordAtIndex:(unsigned)index;
// converted property getter: -(float)monospaceWidth;
-(BOOL)isMonospaced;
-(BOOL)styleIsUniform:(CPPDFStyle**)uniform styleFlags:(unsigned short)flags;
-(void)recomputeBaseline;
-(void)translateObjectYBy:(float)by;
-(BOOL)isIndivisible;
-(void)setBaselineToNull;
// converted property setter: -(void)setBaseline:(float)baseline;
// converted property getter: -(float)baseline;
-(BOOL)hyphenated;
-(CGPoint)anchor;
-(BOOL)overlapsHorizontally:(CGRect)horizontally;
-(BOOL)overlapsWith:(id)with;
-(int)baseLineDescending:(id)descending;
-(int)baseLineAscending:(id)ascending;
-(CGRect)bounds;
-(void)fitBoundsToChildren;
// converted property getter: -(int)tabsBefore;
// converted property setter: -(void)setTabsBefore:(int)before;
// converted property getter: -(BOOL)hasTabs;
// converted property setter: -(void)setHasTabs:(BOOL)tabs;
-(void)accept:(id)accept;
// converted property setter: -(void)setColumnBreaks:(id)breaks;
// converted property getter: -(id)columnBreaks;
// converted property getter: -(BOOL)hasBeenProcessed;
// converted property setter: -(void)setHasBeenProcessed:(BOOL)processed;
// converted property getter: -(BOOL)hasBeenSplit;
// converted property setter: -(void)setHasBeenSplit:(BOOL)split;
-(id)properties;
-(BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void*)index passing:(void*)passing;
-(BOOL)mapToWordPairs:(/*function-pointer*/ void*)wordPairs passing:(void*)passing;
-(BOOL)mapToWordsWithIndex:(/*function-pointer*/ void*)index passing:(void*)passing;
-(BOOL)mapToWords:(/*function-pointer*/ void*)words passing:(void*)passing;
-(BOOL)removeTextLines:(id)lines whereTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(id)newTextLineFromWordAt:(unsigned)at lengthInWords:(unsigned)words;
-(BOOL)changesFontAt:(id)at;
-(BOOL)hasJustifiedAlignment;
-(int)align;
-(long)zOrder;
-(void)anchorChunk:(id)chunk atWordIndex:(unsigned)wordIndex;
// converted property getter: -(CPInlineContainer*)inlineList;
-(unsigned)inlineCount;
-(XXStruct_iDweLB*)lastWord;
-(XXStruct_iDweLB*)firstWord;
-(XXStruct_iDweLB*)wordAtIndex:(unsigned)index;
-(CGRect)boundsOfWordAtIndex:(unsigned)index;
// converted property getter: -(unsigned)wordCount;
-(XXStruct_iDweLB*)wordArrayOfSize:(unsigned)size;
// converted property getter: -(XXStruct_iDweLB*)wordArray;
// converted property getter: -(id)charSequence;
// converted property setter: -(void)setCharSequence:(id)sequence;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)init;
@end

