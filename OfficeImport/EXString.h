/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXString : XXUnknownSuperclass {
}
+(id)readStringWithAsciiCodeFromXmlStringElement:(xmlNode*)xmlStringElement;
+(id)edStringWithRunsFromXmlDivElement:(xmlNode*)xmlDivElement state:(id)state;
+(id)edStringWithRunsFromXmlStringElement:(xmlNode*)xmlStringElement state:(id)state;
+(id)edTextFromXmlStringElement:(xmlNode*)xmlStringElement;
+(id)cleanupWhitespace:(id)whitespace;
+(void)buildEDString:(id)string fromText:(id)text edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;
+(void)buildEDString:(id)string fromNode:(xmlNode*)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;
+(void)buildEDString:(id)string fromChildrenOfNode:(xmlNode*)node edFont:(id)font keepWhitespace:(bool)whitespace state:(id)state;
+(void)parseStringWithAsciiCode:(id)asciiCode;
@end
