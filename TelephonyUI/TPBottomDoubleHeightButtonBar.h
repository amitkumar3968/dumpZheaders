/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"

@class TPButton, UIView, UIImageView;

@interface TPBottomDoubleHeightButtonBar : TPBottomBar {
	UIImageView* _backgroundView;
	UIView* _topWell;
	UIView* _bottomWell;
	TPButton* _topButton;
	TPButton* _bottomButton;
}
@property(readonly, assign, nonatomic) TPButton* bottomButton;	// @synthesize=_bottomButton
@property(readonly, assign, nonatomic) TPButton* topButton;	// @synthesize=_topButton
+(float)defaultHeightForOrientation:(int)orientation;
+(id)_backgroundImage;
// declared property getter: -(id)bottomButton;
// declared property getter: -(id)topButton;
-(void)dealloc;
-(id)initForIncomingCallOnFaceTimeCallWithFrame:(CGRect)frame;
@end
