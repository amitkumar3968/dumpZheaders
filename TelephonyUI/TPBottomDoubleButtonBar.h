/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomSingleButtonBar.h"

@class TPButton, UIView;

@interface TPBottomDoubleButtonBar : TPBottomSingleButtonBar {
	TPButton* _button2;
	UIView* _well1;
	UIView* _well2;
	UIView* _wellContainer;
}
@property(readonly, retain) TPButton* button2;	// converted property
+(float)_wellPadding;
-(void)setWellAlpha:(float)alpha;
-(void)layoutSubviews;
-(void)_layoutButtons;
-(void)_layoutWells;
-(void)setDrawsSeparateWells:(BOOL)wells;
// converted property getter: -(id)button2;
-(void)setButton2:(id)a2 andStyle:(BOOL)style;
-(void)setButton:(id)button andStyle:(BOOL)style;
-(void)_updateButtonSettings:(id)settings;
-(void)dealloc;
-(id)initForVideoChatWithFrame:(CGRect)frame;
-(id)initForEmergencyCallWithFrame:(CGRect)frame;
-(id)initForCallFailureWithFrame:(CGRect)frame;
-(id)initForIncomingCallWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(float)_buttonWidth;
@end

