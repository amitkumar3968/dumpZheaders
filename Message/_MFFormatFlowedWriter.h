/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Message-Structs.h"

@class NSMutableString, PlainTextDocument;

@interface _MFFormatFlowedWriter : XXUnknownSuperclass {
	PlainTextDocument* _inputDocument;
	unsigned long _encoding;
	NSMutableString* _outputString;
	NSMutableString* _quotedString;
	unsigned _addedTrailingSpaces : 1;
	NSMutableString* _lineString;
}
@property(readonly, retain) NSMutableString* outputString;	// converted property
@property(readonly, retain) NSMutableString* quotedString;	// converted property
+(id)newWithPlainTextDocument:(id)plainTextDocument encoding:(unsigned long)encoding;
-(BOOL)addedTrailingSpaces;
// converted property getter: -(id)quotedString;
// converted property getter: -(id)outputString;
-(void)_outputQuotedParagraph:(id)paragraph range:(NSRange)range withQuoteLevel:(unsigned)quoteLevel;
-(unsigned)_findLineBreakInRange:(NSRange)range maxCharWidthCount:(unsigned)count endIsURL:(BOOL)url;
-(void)dealloc;
@end
