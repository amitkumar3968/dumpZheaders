/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSpecifier.h"

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier {
	SEL bestGuess;
@private
	NSString* _placeholder;
}
@property(retain) NSString* placeholder;	// converted property
+(id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;
// converted property getter: -(id)placeholder;
// converted property setter: -(void)setPlaceholder:(id)placeholder;
-(void)dealloc;
@end
