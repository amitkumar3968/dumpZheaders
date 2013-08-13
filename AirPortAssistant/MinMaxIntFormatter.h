/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "APFormatter.h"
#import "AirPortAssistant-Structs.h"


__attribute__((visibility("hidden")))
@interface MinMaxIntFormatter : APFormatter {
	int _minimum;
	int _maximum;
}
@property(assign) int maximum;	// converted property
@property(assign) int minimum;	// converted property
+(id)formatterForMin:(int)min max:(int)max;
-(BOOL)isPartialStringValid:(id)valid newEditingString:(id*)string errorDescription:(id*)description;
// converted property getter: -(int)maximum;
// converted property setter: -(void)setMaximum:(int)maximum;
// converted property getter: -(int)minimum;
// converted property setter: -(void)setMinimum:(int)minimum;
-(id)initWithMin:(int)min max:(int)max;
@end

