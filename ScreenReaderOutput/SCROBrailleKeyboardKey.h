/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import "SCROBrailleKey.h"

@class NSString;

@interface SCROBrailleKeyboardKey : SCROBrailleKey {
	NSString* _keyString;
	unsigned _modifiers;
}
@property(assign) unsigned modifiers;	// converted property
@property(retain) NSString* keyString;	// converted property
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)description;
// converted property setter: -(void)setModifiers:(unsigned)modifiers;
// converted property getter: -(unsigned)modifiers;
// converted property setter: -(void)setKeyString:(id)string;
// converted property getter: -(id)keyString;
-(void)dealloc;
@end

