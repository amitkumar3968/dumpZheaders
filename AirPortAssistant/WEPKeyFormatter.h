/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "AirPortAssistant-Structs.h"
#import "UTF8Formatter.h"


__attribute__((visibility("hidden")))
@interface WEPKeyFormatter : UTF8Formatter {
}
+(id)wepKeyFormatter:(unsigned)formatter;
+(id)sharedWEPKeyFormatter;
-(BOOL)isPartialStringValid:(id)valid newEditingString:(id*)string errorDescription:(id*)description;
@end

