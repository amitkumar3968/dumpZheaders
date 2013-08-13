/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AirPortAssistant-Structs.h"

@class NSCharacterSet;

__attribute__((visibility("hidden")))
@interface APFormatter : XXUnknownSuperclass {
	NSCharacterSet* _characterSet;
	NSCharacterSet* _invertedCharacterSet;
	unsigned _maxLength;
}
@property(retain) NSCharacterSet* invertedCharacterSet;	// converted property
@property(retain) NSCharacterSet* characterSet;	// converted property
+(id)ipv6AddressSet;
+(id)ipv4AddressWithPrefixSet;
+(id)ipv4AddressSet;
+(id)domainNameFormatter:(unsigned)formatter;
+(id)sharedDomainNameFormatter;
+(id)hexFormatter:(unsigned)formatter;
+(id)ascii7BitFormatter:(unsigned)formatter;
+(id)asciiFormatter:(unsigned)formatter;
+(id)phoneNumberFormatter:(unsigned)formatter;
+(id)sharedPhoneNumberFormatter;
+(id)nonZeroNumberOnly:(unsigned)only;
+(id)numberOnlyFormatter:(unsigned)formatter;
+(id)maxLengthFormatter:(unsigned)formatter;
+(id)multipleIPFormatter:(unsigned)formatter;
+(id)sharedMultipleIPFormatter;
+(id)ipFormatter:(unsigned)formatter;
+(id)sharedIPv4PrefixFormatter;
+(id)sharedIPFormatter;
+(id)romanFormatter:(unsigned)formatter;
+(id)formatterForBSFormatter:(int)bsformatter withMaxLen:(long)maxLen;
+(id)domainNameSet;
+(id)pogoPasswordSet;
+(id)hexSet;
+(id)ascii7BitSet;
+(id)asciiSet;
+(id)phoneNumberSet;
+(id)multipleIpAddressesSet;
+(id)romanSet;
-(BOOL)isPartialStringValid:(id*)valid proposedSelectedRange:(NSRange*)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id*)description;
// converted property getter: -(id)invertedCharacterSet;
// converted property setter: -(void)setInvertedCharacterSet:(id)set;
// converted property getter: -(id)characterSet;
// converted property setter: -(void)setCharacterSet:(id)set;
-(void)dealloc;
-(BOOL)isPartialStringValid:(id)valid newEditingString:(id*)string errorDescription:(id*)description;
-(BOOL)getObjectValue:(id*)value forString:(id)string errorDescription:(id*)description;
-(id)stringForObjectValue:(id)objectValue;
-(id)initWithMaxLength:(unsigned)maxLength;
-(id)initWithCharacterSet:(id)characterSet withMaxLength:(unsigned)maxLength;
-(id)initWithStringOfValidCharacters:(id)validCharacters withMaxLength:(unsigned)maxLength;
@end
