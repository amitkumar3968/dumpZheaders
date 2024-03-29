/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIFoundation-Structs.h"
#import "NSGlyphStorage.h"
#import "NSCoding.h"

@class NSStorage, NSTextContainer, NSTextStorage, NSGlyphGenerator, NSTypesetter, NSMutableArray, UIFont, NSRunStorage, NSSortedArray;

@interface NSLayoutManager : XXUnknownSuperclass <NSCoding, NSGlyphStorage> {
@private
	NSTextStorage* _textStorage;
	NSGlyphGenerator* _glyphGenerator;
	NSTypesetter* _typesetter;
	NSMutableArray* _textContainers;
	NSStorage* _containerUsedRects;
	NSStorage* _glyphs;
	NSRunStorage* _containerRuns;
	NSRunStorage* _fragmentRuns;
	NSRunStorage* _glyphLocations;
	NSRunStorage* _glyphRotationRuns;
	CGRect _extraLineFragmentRect;
	CGRect _extraLineFragmentUsedRect;
	NSTextContainer* _extraLineFragmentContainer;
	NSSortedArray* _glyphHoles;
	NSSortedArray* _layoutHoles;
	lmFlags _lmFlags;
	id _delegate;
	unsigned short _textViewResizeDisableStack;
	unsigned short _displayInvalidationDisableStack;
	NSRange _deferredDisplayCharRange;
	CGRect* _cachedRectArray;
	unsigned _cachedRectArrayCapacity;
	char* _glyphBuffer;
	unsigned _glyphBufferSize;
	NSRange _cachedLocationNominalGlyphRange;
	unsigned _cachedLocationGlyphIndex;
	CGPoint _cachedLocation;
	NSRange _cachedFontCharRange;
	UIFont* _cachedFont;
	unsigned _firstUnlaidGlyphIndex;
	unsigned _firstUnlaidCharIndex;
	NSRange _newlyFilledGlyphRange;
	id _extraData;
}
@property(assign) BOOL usesFontLeading;	// converted property
@property(assign) int typesetterBehavior;	// converted property
@property(assign) float hyphenationFactor;	// converted property
@property(assign) BOOL showsControlCharacters;	// converted property
@property(assign) BOOL showsInvisibleCharacters;	// converted property
@property(assign) BOOL usesScreenFonts;	// converted property
@property(assign) BOOL backgroundLayoutEnabled;	// converted property
@property(assign) BOOL allowsNonContiguousLayout;	// converted property
@property(assign) id delegate;	// converted property
@property(retain) NSTypesetter* typesetter;	// converted property
@property(retain) NSGlyphGenerator* glyphGenerator;	// converted property
@property(retain) NSTextStorage* textStorage;	// converted property
@property(assign) BOOL ignoresAntialiasThreshold;	// converted property
@property(assign) BOOL ignoresViewTransformations;	// converted property
@property(assign) BOOL flipsIfNeeded;	// converted property
@property(readonly, retain) NSMutableArray* textContainers;	// converted property
@property(readonly, assign) CGRect extraLineFragmentRect;	// converted property
@property(readonly, assign) CGRect extraLineFragmentUsedRect;	// converted property
@property(readonly, assign) unsigned firstUnlaidGlyphIndex;	// converted property
+(BOOL)_showsControlCharacters;
+(BOOL)_showsInvisibleCharacters;
+(BOOL)_ignoresViewTransformations;
+(BOOL)_usesScreenFonts;
+(void)initialize;
+(void)_doSomeBackgroundLayout;
+(BOOL)_inBackgroundLayout;
+(id)_defaultLinkAttributes;
// converted property setter: -(void)setUsesFontLeading:(BOOL)leading;
// converted property getter: -(BOOL)usesFontLeading;
-(float)defaultBaselineOffsetForFont:(id)font;
-(float)defaultLineHeightForFont:(id)font;
-(id)substituteFontForFont:(id)font;
-(id)_temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange*)range inRange:(NSRange)range3;
-(id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange*)range inRange:(NSRange)range3;
-(id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange*)range inRange:(NSRange)range4;
-(id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex longestEffectiveRange:(NSRange*)range inRange:(NSRange)range4;
-(id)_temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange*)range;
-(id)temporaryAttribute:(id)attribute atCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange*)range;
-(void)removeTemporaryAttribute:(id)attribute forCharacterRange:(NSRange)characterRange;
-(void)addTemporaryAttribute:(id)attribute value:(id)value forCharacterRange:(NSRange)characterRange;
-(void)addTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;
-(void)setTemporaryAttributes:(id)attributes forCharacterRange:(NSRange)characterRange;
-(id)temporaryAttributesAtCharacterIndex:(unsigned)characterIndex effectiveRange:(NSRange*)range;
-(unsigned)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned)index alternatePositions:(BOOL)positions inDisplayOrder:(BOOL)displayOrder positions:(float*)positions4 characterIndexes:(unsigned*)indexes;
-(unsigned)characterIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceBetweenInsertionPoints:(float*)distanceBetweenInsertionPoints;
-(unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer fractionOfDistanceThroughGlyph:(float*)distanceThroughGlyph;
-(float)fractionOfDistanceThroughGlyphForPoint:(CGPoint)point inTextContainer:(id)textContainer;
-(unsigned)glyphIndexForPoint:(CGPoint)point inTextContainer:(id)textContainer;
-(NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(CGRect)boundingRectWithoutAdditionalLayout inTextContainer:(id)textContainer;
-(NSRange)glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;
-(CGRect)boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer;
-(CGRect*)rectArrayForGlyphRange:(NSRange)glyphRange withinSelectedGlyphRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned*)count;
-(CGRect*)rectArrayForCharacterRange:(NSRange)characterRange withinSelectedCharacterRange:(NSRange)range inTextContainer:(id)textContainer rectCount:(unsigned*)count;
-(NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned)nominallySpacedGlyphsContainingIndex;
-(NSRange)glyphRangeForTextContainer:(id)textContainer;
-(NSRange)characterRangeForGlyphRange:(NSRange)glyphRange actualGlyphRange:(NSRange*)range;
-(NSRange)glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange*)range;
-(CGRect)boundsRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(CGRect)layoutRectForTextBlock:(id)textBlock atIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(CGRect)boundsRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;
-(CGRect)layoutRectForTextBlock:(id)textBlock glyphRange:(NSRange)range;
-(void)setBoundsRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;
-(void)setLayoutRect:(CGRect)rect forTextBlock:(id)textBlock glyphRange:(NSRange)range;
-(CGSize)attachmentSizeForGlyphAtIndex:(unsigned)index;
-(BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned)index;
-(BOOL)notShownAttributeForGlyphAtIndex:(unsigned)index;
-(CGPoint)locationForGlyphAtIndex:(unsigned)index;
-(id)extraLineFragmentTextContainer;
// converted property getter: -(CGRect)extraLineFragmentUsedRect;
// converted property getter: -(CGRect)extraLineFragmentRect;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range allowLayout:(BOOL)layout;
-(CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range withoutAdditionalLayout:(BOOL)layout;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(CGRect)lineFragmentRectForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range withoutAdditionalLayout:(BOOL)layout;
-(CGRect)usedRectForTextContainer:(id)textContainer;
-(id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)textContainerForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range withoutAdditionalLayout:(BOOL)layout;
-(void)getFirstUnlaidCharacterIndex:(unsigned*)index glyphIndex:(unsigned*)index2;
// converted property getter: -(unsigned)firstUnlaidGlyphIndex;
-(unsigned)firstUnlaidCharacterIndex;
-(void)setAttachmentSize:(CGSize)size forGlyphRange:(NSRange)glyphRange;
-(void)setDrawsOutsideLineFragment:(BOOL)fragment forGlyphAtIndex:(unsigned)index;
-(void)setNotShownAttribute:(BOOL)attribute forGlyphAtIndex:(unsigned)index;
-(void)setLocations:(CGPoint*)locations startingGlyphIndexes:(unsigned*)indexes count:(unsigned)count forGlyphRange:(NSRange)glyphRange;
-(void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange;
-(void)setLocation:(CGPoint)location forStartOfGlyphRange:(NSRange)glyphRange coalesceRuns:(BOOL)runs;
-(void)setExtraLineFragmentRect:(CGRect)rect usedRect:(CGRect)rect2 textContainer:(id)container;
-(void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3;
-(void)setTextContainer:(id)container forGlyphRange:(NSRange)glyphRange;
-(unsigned)getGlyphs:(unsigned*)glyphs range:(NSRange)range;
-(unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned*)glyphs characterIndexes:(unsigned*)indexes glyphInscriptions:(unsigned*)inscriptions elasticBits:(BOOL*)bits bidiLevels:(char*)levels;
-(unsigned)getGlyphsInRange:(NSRange)range glyphs:(unsigned*)glyphs characterIndexes:(unsigned*)indexes glyphInscriptions:(unsigned*)inscriptions elasticBits:(BOOL*)bits;
-(int)intAttribute:(int)attribute forGlyphAtIndex:(unsigned)index;
-(unsigned)glyphIndexForCharacterAtIndex:(unsigned)index;
-(unsigned)characterIndexForGlyphAtIndex:(unsigned)index;
-(BOOL)isValidGlyphIndex:(unsigned)index;
-(unsigned)glyphAtIndex:(unsigned)index;
-(unsigned)glyphAtIndex:(unsigned)index isValidIndex:(BOOL*)index2;
-(unsigned)numberOfGlyphs;
-(void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(NSRange)glyphRange;
-(void)setIntAttribute:(int)attribute value:(int)value forGlyphAtIndex:(unsigned)index;
-(void)setCharacterIndex:(unsigned)index forGlyphAtIndex:(unsigned)index2;
-(void)deleteGlyphsInRange:(NSRange)range;
-(void)_primitiveDeleteGlyphsInRange:(NSRange)range;
-(void)replaceGlyphAtIndex:(unsigned)index withGlyph:(unsigned)glyph;
-(void)insertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;
-(void)insertGlyphs:(const unsigned*)glyphs length:(unsigned)length forStartingGlyphAtIndex:(unsigned)index characterIndex:(unsigned)index4;
-(void)ensureLayoutForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer;
-(void)ensureLayoutForTextContainer:(id)textContainer;
-(void)ensureLayoutForGlyphRange:(NSRange)glyphRange;
-(void)ensureLayoutForCharacterRange:(NSRange)characterRange;
-(void)ensureGlyphsForGlyphRange:(NSRange)glyphRange;
-(void)ensureGlyphsForCharacterRange:(NSRange)characterRange;
-(void)textStorage:(id)storage edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range5;
-(void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
-(void)invalidateDisplayForGlyphRange:(NSRange)glyphRange;
-(void)invalidateDisplayForCharacterRange:(NSRange)characterRange;
-(void)_primitiveInvalidateDisplayForGlyphRange:(NSRange)glyphRange;
-(void)invalidateLayoutForCharacterRange:(NSRange)characterRange isSoft:(BOOL)soft actualCharacterRange:(NSRange*)range;
-(void)invalidateLayoutForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange*)range;
-(void)invalidateGlyphsForCharacterRange:(NSRange)characterRange changeInLength:(int)length actualCharacterRange:(NSRange*)range;
-(void)_invalidateGlyphsForCharacterRange:(NSRange)characterRange editedCharacterRange:(NSRange)range changeInLength:(int)length actualCharacterRange:(NSRange*)range4;
-(unsigned)layoutOptions;
// converted property getter: -(int)typesetterBehavior;
// converted property setter: -(void)setTypesetterBehavior:(int)behavior;
// converted property getter: -(float)hyphenationFactor;
// converted property setter: -(void)setHyphenationFactor:(float)factor;
// converted property getter: -(BOOL)showsControlCharacters;
// converted property setter: -(void)setShowsControlCharacters:(BOOL)characters;
// converted property getter: -(BOOL)showsInvisibleCharacters;
// converted property setter: -(void)setShowsInvisibleCharacters:(BOOL)characters;
// converted property setter: -(void)setUsesScreenFonts:(BOOL)fonts;
// converted property getter: -(BOOL)usesScreenFonts;
// converted property getter: -(BOOL)backgroundLayoutEnabled;
// converted property setter: -(void)setBackgroundLayoutEnabled:(BOOL)enabled;
-(BOOL)hasNonContiguousLayout;
-(void)_setGlyphsPerLineEstimate:(unsigned)estimate integerOffsetPerLineEstimate:(unsigned)estimate2;
-(void)_setGlyphsPerLineEstimate:(unsigned)estimate offsetPerLineEstimate:(float)estimate2;
// converted property getter: -(BOOL)allowsNonContiguousLayout;
// converted property setter: -(void)setAllowsNonContiguousLayout:(BOOL)layout;
-(void)textContainerChangedTextView:(id)view;
-(void)textContainerChangedGeometry:(id)geometry;
-(void)removeTextContainerAtIndex:(unsigned)index;
-(void)insertTextContainer:(id)container atIndex:(unsigned)index;
-(void)addTextContainer:(id)container;
-(NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)andAfterContainer;
// converted property getter: -(id)textContainers;
// converted property setter: -(void)setDelegate:(id)delegate;
// converted property getter: -(id)delegate;
// converted property setter: -(void)setTypesetter:(id)typesetter;
// converted property getter: -(id)typesetter;
-(void)_setGlyphGenerator:(id)generator;
// converted property setter: -(void)setGlyphGenerator:(id)generator;
-(id)_glyphGenerator;
// converted property getter: -(id)glyphGenerator;
-(void)replaceTextStorage:(id)storage;
// converted property setter: -(void)setTextStorage:(id)storage;
-(id)attributedString;
// converted property getter: -(id)textStorage;
-(id)description;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)finalize;
-(id)init;
-(void)_commonInit;
-(BOOL)_drawsUnderlinesLikeWebKit;
-(void)_setDrawsUnderlinesLikeWebKit:(BOOL)kit;
-(id)_selectionRangesForInsertionPointRange:(NSRange)insertionPointRange;
-(int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned)index inDisplayOrder:(BOOL)displayOrder positions:(float**)positions characterIndexes:(unsigned**)indexes count:(unsigned*)count alternatePositions:(float**)positions6 characterIndexes:(unsigned**)indexes7 count:(unsigned*)count8;
-(id)_insertionPointHelperForGlyphAtIndex:(unsigned)index;
-(void)_setAlwaysDrawsActive:(BOOL)active;
-(BOOL)_alwaysDrawsActive;
// converted property setter: -(void)setIgnoresAntialiasThreshold:(BOOL)threshold;
// converted property getter: -(BOOL)ignoresAntialiasThreshold;
// converted property setter: -(void)setIgnoresViewTransformations:(BOOL)transformations;
// converted property getter: -(BOOL)ignoresViewTransformations;
-(void)setBaselineOffset:(float)offset forGlyphAtIndex:(unsigned)index;
-(float)baselineOffsetForGlyphAtIndex:(unsigned)index;
-(void)setLineFragmentRect:(CGRect)rect forGlyphRange:(NSRange)glyphRange usedRect:(CGRect)rect3 baselineOffset:(float)offset;
// converted property setter: -(void)setFlipsIfNeeded:(BOOL)needed;
// converted property getter: -(BOOL)flipsIfNeeded;
-(BOOL)_hasSeenRightToLeft;
-(void)_setHasSeenRightToLeft:(BOOL)left;
-(BOOL)_isInUILayoutMode;
-(void)_setIsInUILayoutMode:(BOOL)uilayoutMode;
-(void)_clearTemporaryAttributesForCharacterRange:(NSRange)characterRange changeInLength:(int)length;
-(void)_clearTemporaryAttributes;
-(void)_clearCurrentAttachmentSettings;
-(void)_setCurrentAttachmentRect:(CGRect)rect index:(unsigned)index;
-(unsigned)_currentAttachmentIndex;
-(CGRect)_currentAttachmentRect;
-(id)_attachmentSizesRun;
-(void)_promoteGlyphStoreToFormat:(unsigned)format;
-(void)_insertGlyphs:(unsigned*)glyphs elasticAttributes:(BOOL*)attributes count:(unsigned)count atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index;
-(void)_simpleDeleteGlyphsInRange:(NSRange)range;
-(void)_simpleInsertGlyph:(unsigned)glyph atGlyphIndex:(unsigned)glyphIndex characterIndex:(unsigned)index elastic:(BOOL)elastic;
-(void)_setNeedToFlushGlyph:(BOOL)flushGlyph;
-(BOOL)_needToFlushGlyph;
-(unsigned)_glyphAtIndex:(unsigned)index characterIndex:(unsigned*)index2 glyphInscription:(unsigned*)inscription isValidIndex:(BOOL*)index4;
-(float)_rotationForGlyphAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(void)_setRotation:(float)rotation forGlyphAtIndex:(unsigned)index;
-(void)_drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;
-(char*)_packedGlyphs:(unsigned)glyphs range:(NSRange)range length:(unsigned*)length;
-(id)selectedTextAttributesForCharacterAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(void)_drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point parameters:(NSDrawingParameters*)parameters;
-(void)_firstTextViewChanged;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft;
-(void)_invalidateLayoutForExtendedCharacterRange:(NSRange)extendedCharacterRange isSoft:(BOOL)soft invalidateUsage:(BOOL)usage;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length;
-(void)_invalidateGlyphsForExtendedCharacterRange:(NSRange)extendedCharacterRange changeInLength:(int)length includeBlocks:(BOOL)blocks;
-(unsigned)_indexOfFirstGlyphInTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;
-(NSRange)_glyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer fast:(BOOL)fast okToFillHoles:(BOOL)fillHoles;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer okToFillHoles:(BOOL)fillHoles;
-(NSRange)_firstPassGlyphRangeForBoundingRect:(CGRect)boundingRect inTextContainer:(id)textContainer hintGlyphRange:(NSRange)range okToFillHoles:(BOOL)fillHoles;
-(CGRect)_boundingRectForGlyphRange:(NSRange)glyphRange inTextContainer:(id)textContainer fast:(BOOL)fast fullLineRectsOnly:(BOOL)only;
-(CGRect*)_rectArrayForRange:(NSRange)range withinSelectionRange:(NSRange)range2 rangeIsCharRange:(BOOL)range3 singleRectOnly:(BOOL)only fullLineRectsOnly:(BOOL)only5 inTextContainer:(id)textContainer rectCount:(unsigned*)count rangeWithinContainer:(NSRange*)container glyphsDrawOutsideLines:(BOOL*)lines;
-(void)_growCachedRectArrayToSize:(unsigned)size;
-(void)_fixSelectionAfterChangeInCharacterRange:(NSRange)characterRange changeInLength:(int)length;
-(id)_selectedRanges;
-(void)_resizeTextViewForTextContainer:(id)textContainer;
-(void)_invalidateDisplayIfNeeded;
-(void)_invalidateInsertionPoint;
-(NSStoredContainerUsage*)_validatedStoredUsageForTextContainerAtIndex:(unsigned)index;
-(void)_recalculateUsageForTextContainerAtIndex:(unsigned)index;
-(void)_invalidateUsageForTextContainersInRange:(NSRange)range;
-(void)_updateUsageForTextContainer:(id)textContainer addingUsedRect:(CGRect)rect;
-(id)_blockDescription;
-(id)_layoutTreeDescription;
-(id)_glyphTreeDescription;
-(id)_layoutHoleDescription;
-(id)_glyphHoleDescription;
-(id)_glyphDescription;
-(id)_glyphDescriptionForGlyphRange:(NSRange)glyphRange;
-(id)_glyphLocationDescription;
-(id)_lineFragmentDescription;
-(id)_lineFragmentDescription:(BOOL)description;
-(id)_lineFragmentDescriptionForGlyphRange:(NSRange)glyphRange includeGlyphLocations:(BOOL)locations;
-(id)_containerDescription;
-(void)_markSelfAsDirtyForBackgroundLayout:(id)backgroundLayout;
-(NSRange)_primitiveGlyphRangeForCharacterRange:(NSRange)characterRange;
-(NSRange)_primitiveCharacterRangeForGlyphRange:(NSRange)glyphRange;
-(NSRange)_glyphRangeForCharacterRange:(NSRange)characterRange actualCharacterRange:(NSRange*)range okToFillHoles:(BOOL)fillHoles;
-(unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;
-(unsigned)_glyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;
-(unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles;
-(unsigned)_smallEncodingGlyphIndexForCharacterIndex:(unsigned)characterIndex startOfRange:(BOOL)range okToFillHoles:(BOOL)fillHoles considerNulls:(BOOL)nulls;
-(void)_fillLayoutHoleAtIndex:(unsigned)index desiredNumberOfLines:(unsigned)lines;
-(void)_fillLayoutHoleForCharacterRange:(NSRange)characterRange desiredNumberOfLines:(unsigned)lines isSoft:(BOOL)soft;
-(void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned)index;
-(void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned)glyphIndex nextGlyphIndex:(unsigned*)index;
-(BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned)glyphIndex forCharacterRange:(NSRange)characterRange inTextContainer:(id)textContainer lineLimit:(unsigned)limit nextGlyphIndex:(unsigned*)index;
-(void)_fillGlyphHoleForCharacterRange:(NSRange)characterRange startGlyphIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;
-(void)_fillGlyphHoleAtIndex:(unsigned)index desiredNumberOfCharacters:(unsigned)characters;
-(BOOL)_canDoLayout;
-(void)_adjustCharacterIndicesForRawGlyphRange:(NSRange)rawGlyphRange byDelta:(int)delta;
-(NSRange)_extendedCharRangeForInvalidation:(NSRange)invalidation editedCharRange:(NSRange)range;
-(void)_setRowArrayCache:(id)cache;
-(id)_rowArrayCache;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange;
-(NSRange)_blockRowRangeForGlyphRange:(NSRange)glyphRange completeRows:(BOOL*)rows;
-(NSRange)_blockRowRangeForCharRange:(NSRange)charRange;
-(NSRange)_blockRowRangeForCharRange:(NSRange)charRange completeRows:(BOOL*)rows;
-(NSRange)_blockRangeForGlyphRange:(NSRange)glyphRange;
-(NSRange)_blockRangeForCharRange:(NSRange)charRange;
-(void)_mergeLayoutHoles;
-(void)_mergeGlyphHoles;
-(void)underlineGlyphRange:(NSRange)range underlineType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;
-(void)strikethroughGlyphRange:(NSRange)range strikethroughType:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin;
-(void)_lineGlyphRange:(NSRange)range type:(int)type lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range4 containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;
-(void)drawStrikethroughForGlyphRange:(NSRange)glyphRange strikethroughType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;
-(void)drawUnderlineForGlyphRange:(NSRange)glyphRange underlineType:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin;
-(void)_drawLineForGlyphRange:(NSRange)glyphRange type:(int)type baselineOffset:(float)offset lineFragmentRect:(CGRect)rect lineFragmentGlyphRange:(NSRange)range containerOrigin:(CGPoint)origin isStrikethrough:(BOOL)strikethrough;
-(void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders;
-(void)_drawLineForGlyphRange:(NSRange)glyphRange inContext:(CGContextRef)context from:(float)from to:(float)to at:(float)at thickness:(float)thickness lineOrigin:(CGPoint)origin breakForDescenders:(BOOL)descenders flipped:(BOOL)flipped;
-(void)showAttachmentCell:(id)cell inRect:(CGRect)rect characterIndex:(unsigned)index;
-(void)showCGGlyphs:(const unsigned short*)glyphs positions:(const CGPoint*)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context;
-(void)_showStyledCGGlyphs:(const unsigned short*)glyphs positions:(const CGPoint*)positions count:(unsigned)count font:(id)font matrix:(id)matrix attributes:(id)attributes inContext:(CGContextRef)context options:(id)options lineHeight:(float)height;
-(void)drawGlyphsForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;
-(void)fillBackgroundRectArray:(CGRect*)array count:(unsigned)count forCharacterRange:(NSRange)characterRange color:(id)color;
-(void)drawBackgroundForGlyphRange:(NSRange)glyphRange atPoint:(CGPoint)point;
@end

