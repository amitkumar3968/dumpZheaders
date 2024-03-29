/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import "NSTypesetter.h"

@class NSParagraphStyle, NSAttributedString, NSArray, NSTextContainer, NSLayoutManager;

@interface NSATSTypesetter : NSTypesetter {
@private
	NSAttributedString* attributedString;
	NSRange paragraphGlyphRange;
	NSRange paragraphSeparatorGlyphRange;
	float lineFragmentPadding;
	NSLayoutManager* layoutManager;
	NSArray* textContainers;
	NSTextContainer* currentTextContainer;
	unsigned currentTextContainerIndex;
	CGSize currentTextContainerSize;
	NSParagraphStyle* currentParagraphStyle;
	void* _atsReserved[8];
	id _private;
}
+(BOOL)_allowsScreenFontKerning;
+(id)sharedTypesetter;
+(id)sharedInstance;
+(void)initialize;
-(CGRect)lineFragmentRectForProposedRect:(CGRect)proposedRect remainingRect:(CGRect*)rect;
-(XXUnion_5c6s2D*)_lineFragmentRectForProposedRectArgs;
-(XXStruct__MnFEB*)_allocateAuxData;
-(float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;
-(NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;
-(void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned*)index;
-(unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned)index;
-(float)hyphenationFactorForGlyphAtIndex:(unsigned)index;
-(unsigned)layoutParagraphAtPoint:(CGPoint*)point;
-(unsigned)actionForControlCharacterAtIndex:(unsigned)index;
-(void)endLineWithGlyphRange:(NSRange)glyphRange;
-(void)beginLineWithGlyphAtIndex:(unsigned)index;
-(void)endParagraph;
-(void)beginParagraph;
-(unsigned)_sweepDirectionForGlyphAtIndex:(long)index;
-(BOOL)_usesScreenFonts;
-(void)_flushCachedObjects;
-(BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned*)index characterIndex:(unsigned*)index2 atPoint:(CGPoint*)point renderingContext:(id*)context;
-(void)_setForceWordWrapping:(BOOL)wrapping;
-(BOOL)_forceWordWrapping;
-(void)_setForceTruncation:(BOOL)truncation;
-(BOOL)_forceTruncation;
-(void)_setBaselineRenderingMode:(BOOL)mode;
-(BOOL)_baselineRenderingMode;
-(id)_getATSTypesetterGuts;
-(CTTypesetterRef)_ctTypesetter;
-(const char*)_bidiLevels;
-(int)_baseWritingDirection;
-(void)_doBidiProcessing;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
@end

