/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface NSTypesetter : XXUnknownSuperclass {
@private
	void* _reserved;
}
@property(retain) id attributedString;	// converted property
@property(assign) float tightenThresholdForTruncation;	// converted property
@property(assign) BOOL bidiProcessingEnabled;	// converted property
@property(assign) float lineFragmentPadding;	// converted property
@property(assign) float hyphenationFactor;	// converted property
@property(assign) int typesetterBehavior;	// converted property
@property(assign) BOOL usesFontLeading;	// converted property
+(id)sharedSystemTypesetter;
+(id)sharedSystemTypesetterForBehavior:(int)behavior;
+(int)defaultStringDrawingTypesetterBehavior;
+(int)defaultTypesetterBehavior;
+(BOOL)_usesATSTypesetter;
+(void)initialize;
-(void)setBidiLevels:(const char*)levels forGlyphRange:(NSRange)glyphRange;
-(void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;
-(void)setLocation:(CGPoint)location withAdvancements:(const float*)advancements forStartOfGlyphRange:(NSRange)glyphRange;
-(void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphRange:(NSRange)glyphRange;
-(void)setNotShownAttribute:(BOOL)attribute forGlyphRange:(NSRange)glyphRange;
-(void)deleteGlyphsInRange:(NSRange)range;
-(void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;
-(void)substituteGlyphsInRange:(NSRange)range withGlyphs:(unsigned*)glyphs;
-(void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;
-(void)getLineFragmentRect:(CGRect*)rect usedRect:(CGRect*)rect2 remainingRect:(CGRect*)rect3 forStartingGlyphAtIndex:(unsigned)index proposedRect:(CGRect)rect5 lineSpacing:(float)spacing paragraphSpacingBefore:(float)before paragraphSpacingAfter:(float)after;
-(unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned*)glyphs characterIndexes:(unsigned*)indexes glyphInscriptions:(unsigned*)inscriptions elasticBits:(BOOL*)bits bidiLevels:(char*)levels;
-(NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange*)range;
-(NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange*)range;
-(float)baselineOffsetInLayoutManager:(id)layoutManager glyphIndex:(unsigned)index;
-(NSRange)layoutCharactersInRange:(NSRange)range forLayoutManager:(id)layoutManager maximumNumberOfLineFragments:(unsigned)lineFragments;
-(void)layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments nextGlyphIndex:(unsigned*)index;
-(void)_layoutGlyphsInLayoutManager:(id)layoutManager startingAtGlyphIndex:(unsigned)glyphIndex maxNumberOfLineFragments:(unsigned)lineFragments maxCharacterIndex:(unsigned)index nextGlyphIndex:(unsigned*)index5 nextCharacterIndex:(unsigned*)index6;
-(unsigned)actionForControlCharacterAtIndex:(unsigned)index;
-(id)attributesForExtraLineFragment;
-(void)getLineFragmentRect:(CGRect*)rect usedRect:(CGRect*)rect2 forParagraphSeparatorGlyphRange:(NSRange)paragraphSeparatorGlyphRange atProposedOrigin:(CGPoint)proposedOrigin;
-(void)setHardInvalidation:(BOOL)invalidation forGlyphRange:(NSRange)glyphRange;
-(id)currentParagraphStyle;
-(id)currentTextContainer;
-(id)textContainers;
-(id)layoutManager;
-(float)paragraphSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(float)paragraphSpacingBeforeGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(float)lineSpacingAfterGlyphAtIndex:(unsigned)index withProposedLineFragmentRect:(CGRect)proposedLineFragmentRect;
-(void)endLineWithGlyphRange:(NSRange)glyphRange;
-(void)beginLineWithGlyphAtIndex:(unsigned)index;
-(void)endParagraph;
-(void)beginParagraph;
-(unsigned)layoutParagraphAtPoint:(CGPoint*)point;
-(NSRange)paragraphSeparatorCharacterRange;
-(NSRange)paragraphCharacterRange;
-(NSRange)paragraphSeparatorGlyphRange;
-(NSRange)paragraphGlyphRange;
-(void)setParagraphGlyphRange:(NSRange)range separatorGlyphRange:(NSRange)range2;
// converted property getter: -(id)attributedString;
// converted property setter: -(void)setAttributedString:(id)string;
// converted property setter: -(void)setTightenThresholdForTruncation:(float)truncation;
// converted property getter: -(float)tightenThresholdForTruncation;
// converted property setter: -(void)setBidiProcessingEnabled:(BOOL)enabled;
// converted property getter: -(BOOL)bidiProcessingEnabled;
-(id)textTabForGlyphLocation:(float)glyphLocation writingDirection:(int)direction maxLocation:(float)location;
-(id)substituteFontForFont:(id)font;
// converted property setter: -(void)setLineFragmentPadding:(float)padding;
// converted property getter: -(float)lineFragmentPadding;
// converted property setter: -(void)setHyphenationFactor:(float)factor;
// converted property getter: -(float)hyphenationFactor;
// converted property setter: -(void)setTypesetterBehavior:(int)behavior;
// converted property getter: -(int)typesetterBehavior;
// converted property setter: -(void)setUsesFontLeading:(BOOL)leading;
// converted property getter: -(BOOL)usesFontLeading;
-(id)_ellipsisFontForFont:(id)font;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(unsigned)_sweepDirectionForGlyphAtIndex:(long)index;
-(XXUnion_5c6s2D*)_lineFragmentRectForProposedRectArgs;
-(void)_updateParagraphStyleCache:(id)cache;
-(unsigned)_getRemainingNominalParagraphRange:(NSRange*)range andParagraphSeparatorRange:(NSRange*)range2 charactarIndex:(unsigned)index layoutManager:(id)manager string:(id)string;
-(void)_setForceOriginalFontBaseline:(BOOL)baseline;
-(BOOL)_forceOriginalFontBaseline;
-(void)finalize;
-(void)dealloc;
-(XXStruct__MnFEB*)_getAuxData;
-(XXStruct__MnFEB*)_allocateAuxData;
@end
