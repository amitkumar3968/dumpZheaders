/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "SBDeviceLockViewWithKeyboard.h"


@interface SBDeviceLockViewWithKeyboardPhone : SBDeviceLockViewWithKeyboard {
}
@property(assign) BOOL showsEmergencyCallButton;	// converted property
-(void)_layoutForCurrentOrientation;
-(void)hardwareReturnKeyPressed:(id)pressed;
-(void)returnKeyPressed:(id)pressed;
// converted property setter: -(void)setShowsEmergencyCallButton:(BOOL)button;
// converted property getter: -(BOOL)showsEmergencyCallButton;
-(id)_initWithStyle:(int)style interfaceOrientation:(int)orientation showsEmergencyCall:(BOOL)call;
@end
