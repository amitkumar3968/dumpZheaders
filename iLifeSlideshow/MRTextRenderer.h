/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString;

@interface MRTextRenderer : XXUnknownSuperclass {
	NSAttributedString* _text;
	NSAttributedString* _cachedText;
	NSAttributedString* _placeholderText;
	CGSize _definedSize;
	CGSize _resolution;
	int _maxNumberOfLines;
	int _lastGlyphIndex;
	BOOL _truncate;
	BOOL _renderAtDefinedSize;
	float _lineSpacingFactor;
	CGSize _inset;
	float _scale;
	int _columnCount;
	float _columnMargin;
	float _extraFooter;
	BOOL _centerVertically;
	CGSize _cachedSize;
	CGSize _originalCacheSize;
	CGRect _imageRect;
}
@property(assign, nonatomic) CGRect imageRect;	// @synthesize=_imageRect
@property(assign, nonatomic) BOOL centerVertically;	// @synthesize=_centerVertically
@property(assign, nonatomic) float extraFooter;	// @synthesize=_extraFooter
@property(assign, nonatomic) float columnMargin;	// @synthesize=_columnMargin
@property(assign, nonatomic) int columnCount;	// @synthesize=_columnCount
@property(assign, nonatomic) float scale;	// @synthesize=_scale
@property(assign, nonatomic) CGSize inset;	// @synthesize=_inset
@property(assign, nonatomic) float lineSpacingFactor;	// @synthesize=_lineSpacingFactor
@property(assign, nonatomic) int maxNumberOfLines;	// @synthesize=_maxNumberOfLines
@property(assign, nonatomic) BOOL renderAtDefinedSize;	// @synthesize=_renderAtDefinedSize
@property(assign, nonatomic) CGSize definedSize;	// @synthesize=_definedSize
@property(assign, nonatomic) BOOL truncate;	// @synthesize=_truncate
@property(assign, nonatomic) CGSize resolution;	// @synthesize=_resolution
@property(assign, nonatomic) NSAttributedString* placeholderText;	// @synthesize=_placeholderText
@property(assign, nonatomic) NSAttributedString* text;	// @synthesize=_text
// declared property setter: -(void)setImageRect:(CGRect)rect;
// declared property getter: -(CGRect)imageRect;
// declared property setter: -(void)setCenterVertically:(BOOL)vertically;
// declared property getter: -(BOOL)centerVertically;
// declared property setter: -(void)setExtraFooter:(float)footer;
// declared property getter: -(float)extraFooter;
// declared property setter: -(void)setColumnMargin:(float)margin;
// declared property getter: -(float)columnMargin;
// declared property setter: -(void)setColumnCount:(int)count;
// declared property getter: -(int)columnCount;
// declared property setter: -(void)setScale:(float)scale;
// declared property getter: -(float)scale;
// declared property setter: -(void)setInset:(CGSize)inset;
// declared property getter: -(CGSize)inset;
// declared property setter: -(void)setLineSpacingFactor:(float)factor;
// declared property getter: -(float)lineSpacingFactor;
// declared property setter: -(void)setRenderAtDefinedSize:(BOOL)definedSize;
// declared property getter: -(BOOL)renderAtDefinedSize;
// declared property setter: -(void)setDefinedSize:(CGSize)size;
// declared property getter: -(CGSize)definedSize;
// declared property setter: -(void)setTruncate:(BOOL)truncate;
// declared property getter: -(BOOL)truncate;
// declared property setter: -(void)setMaxNumberOfLines:(int)lines;
// declared property getter: -(int)maxNumberOfLines;
// declared property getter: -(CGSize)resolution;
// declared property getter: -(id)placeholderText;
-(void)trimWhitespace;
-(id)_truncateTextToFitInSize:(CGSize)size fromCenter:(BOOL)center outSize:(CGSize*)size3;
-(void)squeezeWidthForLineCount:(int)lineCount;
-(CGSize)_shadowSizeOffsetForString:(id)string;
-(CGSize)shadowOffset;
-(int)_numberOfLinesInString:(id)string;
-(id)truncatedText;
-(int)numberOfLinesForTruncatedText;
-(int)numberOfLines;
-(CGSize)_sizeOfString:(id)string;
-(CGRect)frameOfLineWithGlyphAtIndex:(int)index range:(NSRange*)range;
-(CGPoint)originOfGlyphAtIndex:(int)index;
-(int)glyphIndexForStringIndex:(int)stringIndex;
-(XXStruct_K5nmsA)rangeOfStringForGlyphIndex:(int)glyphIndex;
-(CGContextRef)retainedContextOfGlyphAtIndex:(int)index;
-(int)countOfGlyphs;
-(CGPoint)originOfWordAtIndex:(int)index;
-(CGContextRef)retainedContextOfWordsInRange:(XXStruct_K5nmsA)range;
-(XXStruct_K5nmsA)rangeOfGlyphsForWordsInRange:(XXStruct_K5nmsA)range;
-(XXStruct_K5nmsA)rangeOfGlyphsOnLine:(int)glyphsOnLine;
-(XXStruct_K5nmsA)rangeOfWordsOnLine:(int)wordsOnLine;
-(int)countOfWords;
-(CGRect)_textClipRectForString:(id)string;
-(void)_drawInContext:(CGContextRef)context withAttributedString:(id)attributedString withSize:(CGSize)size andScale:(float)scale;
-(CGContextRef)_retainedContextFromAttributedString:(id)attributedString withSize:(CGSize)size;
-(CGRect)_tightFrameOfLineAtIndex:(int)index inString:(id)string withSize:(CGSize)size;
-(CGRect)tightFrameOfLineAtIndex:(int)index;
-(float)_scale;
-(CGRect)tightFrameOfAllLines;
-(CGSize)_sizeToRendererAt;
-(CGSize)sizeOfContext;
-(CGSize)sizeOfText;
-(CGContextRef)retainedContext;
-(void)clearCache;
-(void)cacheText;
// declared property setter: -(void)setResolution:(CGSize)resolution;
// declared property setter: -(void)setText:(id)text;
// declared property setter: -(void)setPlaceholderText:(id)text;
// declared property getter: -(id)text;
-(void)cleanup;
-(void)finalize;
-(void)dealloc;
-(id)initWithText:(id)text resolution:(CGSize)resolution;
-(id)init;
-(id)_invertRect:(CGRect)rect inRect:(CGRect)rect2;
@end
