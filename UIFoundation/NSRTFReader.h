/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSTextTable, NSData, NSMutableAttributedString, NSMutableDictionary, NSFileWrapper, NSCalendar, NSArray, NSMutableArray, NSMutableData, NSMapTable, UIColor;

__attribute__((visibility("hidden")))
@interface NSRTFReader : XXUnknownSuperclass {
@private
	NSMutableAttributedString* _topAttributedString;
	NSMutableAttributedString* _curAttributedString;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSData* _rtfData;
	NSMutableDictionary* _fontTable;
	NSFileWrapper* _document;
	union {
		unsigned char thin[128];
		unsigned short fat[128];
	} _textBuffer;
	unsigned _textBufferIndex;
	int _rtfVersion;
	int _cocoaVersion;
	int _cocoaSubVersion;
	int _readOnly;
	int _usesScreenFonts;
	unsigned long _defaultToUniCharEncoding;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	CGSize _paperSize;
	float _lMargin;
	float _rMargin;
	float _bMargin;
	float _tMargin;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMapTable* _cachedRTFFontTable;
	float _hyphenationFactor;
	float _defaultTabInterval;
	UIColor* _documentBackgroundColor;
	NSRTFPriv _private;
	BOOL _textBufferContentsIsFat;
	BOOL _explicitCharSetEncountered;
	BOOL _isRTLDocument;
	int _readLimit;
	int _thumbnailLimit;
	BOOL _limitReached;
	unsigned char _textFlow;
	NSMutableArray* _layoutOrientationSections;
	unsigned _verticalOrientationLocation;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	NSTextTable* _currentTable;
	NSTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	BOOL _currentRowIsLast;
	BOOL _setTableCells;
	unsigned _currentBorderEdge;
	BOOL _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;
	NSCalendar* _gregorianCalendar;
	NSMutableDictionary* _fontAttributesTable;
}
@property(retain) id mutableAttributedString;	// converted property
@property(assign) unsigned textFlow;	// converted property
@property(assign) int baseWritingDirection;	// converted property
@property(assign) float defaultTabInterval;	// converted property
@property(assign) int cocoaSubVersion;	// converted property
@property(assign) int cocoaVersion;	// converted property
@property(assign) CGSize viewSize;	// converted property
@property(assign) CGSize paperSize;	// converted property
-(void)finalize;
-(void)dealloc;
-(void)_popState;
-(void)_pushState;
-(void)processString:(id)string;
-(void)_addOverride:(int)override forKey:(int)key;
-(void)_addListDefinition:(id)definition forKey:(int)key;
-(id)_listDefinitions;
-(void)_setCurrentListLevel:(int)level;
-(int)_currentListLevel;
-(void)_setCurrentListNumber:(int)number;
-(int)_currentListNumber;
-(void)_updateAttributes;
-(id)_documentInfoDictionary;
-(id)attributesAtEndOfGroup;
-(id)attributedString;
-(id)attributedStringToEndOfGroup;
-(id)_mutableParagraphStyle;
-(id)defaultParagraphStyle;
-(id)mutableAttributes;
// converted property getter: -(id)mutableAttributedString;
// converted property setter: -(void)setMutableAttributedString:(id)string;
-(id)documentAttributes;
-(void)_mergeTableCellsVertically;
-(void)_mergeTableCellsHorizontally;
-(void)_endTableRow;
-(void)_lastTableRow;
-(void)_endTableCell;
-(void)_paragraphInTable;
-(void)_endTableCellDefinition;
-(void)_startTableRowDefinition;
-(void)_setTableNestingLevel:(int)level;
-(void)_clearTableCells;
-(void)_setTableCells;
-(void)_popTableState;
-(void)_pushTableState;
-(void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;
-(BOOL)_currentTableCellIsPlaceholder;
-(BOOL)_currentBorderIsTable;
-(unsigned)_currentBorderEdge;
-(id)_currentTableCell;
-(id)_currentTable;
-(void)_beginTableRow;
-(void)_ensureTableCells;
// converted property getter: -(unsigned)textFlow;
// converted property setter: -(void)setTextFlow:(unsigned)flow;
// converted property getter: -(int)baseWritingDirection;
// converted property setter: -(void)setBaseWritingDirection:(int)direction;
// converted property getter: -(float)defaultTabInterval;
// converted property setter: -(void)setDefaultTabInterval:(float)interval;
-(void)setBackgroundColor:(id)color;
-(void)setHyphenationFactor:(float)factor;
-(void)setBottomMargin:(float)margin;
-(void)setTopMargin:(float)margin;
-(void)setRightMargin:(float)margin;
-(void)setLeftMargin:(float)margin;
-(void)setUsesScreenFonts:(int)fonts;
-(void)setReadOnly:(int)only;
-(float)floatCocoaVersion;
// converted property setter: -(void)setCocoaSubVersion:(int)version;
// converted property setter: -(void)setCocoaVersion:(int)version;
// converted property getter: -(int)cocoaSubVersion;
// converted property getter: -(int)cocoaVersion;
-(void)setViewScale:(int)scale;
-(void)setViewKind:(int)kind;
// converted property getter: -(CGSize)viewSize;
// converted property setter: -(void)setViewSize:(CGSize)size;
// converted property getter: -(CGSize)paperSize;
// converted property setter: -(void)setPaperSize:(CGSize)size;
-(void)setThumbnailLimit:(int)limit;
-(void)setReadLimit:(int)limit;
-(id)_RTFDFileWrapper;
-(void)_setRTFDFileWrapper:(id)wrapper;
-(id)initWithRTF:(id)rtf;
-(id)initWithRTFDFileWrapper:(id)rtfdfileWrapper;
-(id)initWithPath:(id)path;
-(id)initWithRTFD:(id)rtfd;
@end

