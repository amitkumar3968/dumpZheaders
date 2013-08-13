/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIButton, UIImage;

@interface SBDeviceLockKeypadPhone : SBDeviceLockKeypad {
	UIButton* _emergencyCallButton;
	UIButton* _poundButton;
	UIImage* _deleteIcon;
}
@property(assign) BOOL showsEmergencyCallButton;	// converted property
+(id)pressedImage;
+(id)keypadImage;
-(void)_updateCancelAndDeleteButtons;
-(BOOL)emergencyKeyChar;
-(BOOL)cancelKeyChar;
-(BOOL)deleteKeyChar;
-(void)setDeleteEnabled:(BOOL)enabled;
// converted property setter: -(void)setShowsEmergencyCallButton:(BOOL)button;
// converted property getter: -(BOOL)showsEmergencyCallButton;
-(float)_yFudge;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
