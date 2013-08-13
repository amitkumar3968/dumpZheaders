/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "NSXMLParserDelegate.h"
#import "IMFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSXMLParser, IMXMLParserContext, IMXMLParserFrame, NSMutableArray;

@interface IMXMLParser : XXUnknownSuperclass <NSXMLParserDelegate> {
	NSXMLParser* _parser;
	IMXMLParserContext* _context;
	IMXMLParserFrame* _topFrame;
	NSMutableArray* _otherFrames;
	TidyDoc* _tidyDoc;
	CFDictionaryRef _framespace;
}
+(id)sharedInstance;
-(void)parser:(id)parser parseErrorOccurred:(id)occurred;
-(void)parser:(id)parser foundIgnorableWhitespace:(id)whitespace;
-(void)parser:(id)parser foundCharacters:(id)characters;
-(void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;
-(void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;
-(BOOL)parseContext:(id)context;
-(id)_newDataByTidyingData:(id)data;
-(void)_teardownTidy;
-(void)_setupTidy;
@end

