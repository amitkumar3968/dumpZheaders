/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMXMLParserContext.h"

@class NSAttributedString, NSString, NSMutableDictionary, NSMutableAttributedString, NSMutableArray, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {
	unsigned _underlineCount;
	unsigned _boldCount;
	unsigned _italicCount;
	unsigned _strikethroughCount;
	unsigned _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	int _baseWritingDirection;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;
}
@property(assign) int baseWritingDirection;	// @synthesize=_baseWritingDirection
@property(retain, nonatomic) NSArray* fileTransferGUIDs;	// @synthesize=_fileTransferGUIDs
@property(readonly, assign, nonatomic) NSAttributedString* body;
@property(retain, nonatomic) NSString* foregroundColor;	// @synthesize=_foregroundColor
@property(retain, nonatomic) NSString* backgroundColor;	// @synthesize=_backgroundColor
// declared property setter: -(void)setBaseWritingDirection:(int)direction;
// declared property getter: -(int)baseWritingDirection;
// declared property setter: -(void)setForegroundColor:(id)color;
// declared property getter: -(id)foregroundColor;
// declared property setter: -(void)setBackgroundColor:(id)color;
// declared property getter: -(id)backgroundColor;
// declared property setter: -(void)setFileTransferGUIDs:(id)guids;
// declared property getter: -(id)fileTransferGUIDs;
// declared property getter: -(id)body;
-(void)appendInlineImageWithGUID:(id)guid filename:(id)filename width:(int)width height:(int)height;
-(void)appendFileTransferWithGUID:(id)guid;
-(void)appendString:(id)string;
-(void)_incrementMessagePartNumber;
-(void)popForegroundColor;
-(void)pushForegroundColor:(id)color;
-(void)popBackgroundColor;
-(void)pushBackgroundColor:(id)color;
-(void)popLink;
-(void)pushLink:(id)link;
-(void)popFontSize;
-(void)pushFontSize:(id)size;
-(void)popFontFamily;
-(void)pushFontFamily:(id)family;
-(void)_popValueFromStack:(id)stack attributeName:(id)name;
-(void)_pushValue:(id)value ontoStack:(id)stack attributeName:(id)name;
-(void)decrementStrikethroughCount;
-(void)incrementStrikethroughCount;
-(void)decrementUnderlineCount;
-(void)incrementUnderlineCount;
-(void)decrementItalicCount;
-(void)incrementItalicCount;
-(void)decrementBoldCount;
-(void)incrementBoldCount;
-(void)_updateFontSize;
-(void)_updateFontFamily;
-(void)_clearIvars;
-(void)_initIvars;
-(id)resultsForLogging;
-(id)name;
-(void)reset;
-(void)dealloc;
@end

