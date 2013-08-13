/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : XXUnknownSuperclass <NSCopying> {
@private
	unsigned _kind;
	NSString* _name;
	id _value;
}
@property(retain) id objectValue;	// converted property
@property(retain) id stringValue;	// converted property
@property(retain) NSString* name;	// converted property
@property(readonly, assign) unsigned kind;	// converted property
+(void)_escapeCharacters:(const unsigned short*)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;
+(void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;
+(id)elementWithName:(id)name stringValue:(id)value;
+(id)elementWithName:(id)name;
+(id)attributeWithName:(id)name stringValue:(id)value;
+(id)textWithStringValue:(id)stringValue;
-(void)_appendXMLStringToString:(CFStringRef)string level:(int)level;
-(id)closingTagString;
-(id)contentString;
-(id)openingTagString;
-(id)XMLString;
-(id)description;
// converted property getter: -(id)objectValue;
// converted property setter: -(void)setObjectValue:(id)value;
// converted property getter: -(id)stringValue;
// converted property setter: -(void)setStringValue:(id)value;
// converted property getter: -(id)name;
// converted property setter: -(void)setName:(id)name;
// converted property getter: -(unsigned)kind;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;
-(id)initWithKind:(unsigned)kind;
@end

