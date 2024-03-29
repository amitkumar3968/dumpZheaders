/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "APFormatter.h"
#import "AirPortAssistant-Structs.h"

@class NSString, NSCharacterSet;

__attribute__((visibility("hidden")))
@interface MACFormatter : APFormatter {
	NSCharacterSet* _possibleSeparators;
	NSCharacterSet* _possibleSeparatorsInvertedSet;
	NSString* _userPreferredSeparator;
}
@property(retain) NSString* userPreferredSeparator;	// converted property
@property(retain) NSCharacterSet* possibleSeparatorsInvertedSet;	// converted property
@property(retain) NSCharacterSet* possibleSeparators;	// converted property
+(BOOL)parseMACAddress:(const char*)address intoHexString:(char*)string;
+(id)macFormatter;
+(id)sharedMACFormatter;
+(id)macAddressSet;
// converted property getter: -(id)userPreferredSeparator;
// converted property setter: -(void)setUserPreferredSeparator:(id)separator;
// converted property getter: -(id)possibleSeparatorsInvertedSet;
// converted property setter: -(void)setPossibleSeparatorsInvertedSet:(id)set;
// converted property getter: -(id)possibleSeparators;
// converted property setter: -(void)setPossibleSeparators:(id)separators;
-(BOOL)isPartialStringValid:(id*)valid proposedSelectedRange:(NSRange*)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id*)description;
-(void)dealloc;
-(id)init;
@end

