/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SUClientInterface, SUSubtitledButton, UIAlertView, SULinkControl;

@interface SUTermsAndConditionsView : XXUnknownSuperclass {
@private
	UIAlertView* _accountButtonAlert;
	SUSubtitledButton* _button;
	SUClientInterface* _clientInterface;
	BOOL _hideAccountButton;
	float _rightMargin;
	int _style;
	SULinkControl* _termsAndConditionsControl;
	SUClientInterface* clientInterface;
}
@property(assign, nonatomic) int style;	// @synthesize=_style
@property(assign, nonatomic) float rightMargin;	// @synthesize=_rightMargin
@property(assign, nonatomic) BOOL hideAccountButton;	// @synthesize=_hideAccountButton
@property(retain, nonatomic) SUClientInterface* clientInterface;	// @synthesize
// declared property getter: -(int)style;
// declared property getter: -(float)rightMargin;
// declared property getter: -(BOOL)hideAccountButton;
// declared property setter: -(void)setClientInterface:(id)interface;
// declared property getter: -(id)clientInterface;
-(void)_updateButton;
-(id)_termsAndConditionsControl;
-(int)_linkStyleForStyle:(int)style;
-(void)_destroyButton;
-(void)_clearButtonSelection:(id)selection;
-(float)_buttonHeightForStyle:(int)style;
-(id)_button;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)_accountsChangedNotification:(id)notification;
-(void)_termsAndConditionsAction:(id)action;
-(void)_buttonAction:(id)action;
-(void)sizeToFit;
-(void)layoutSubviews;
// declared property setter: -(void)setStyle:(int)style;
// declared property setter: -(void)setRightMargin:(float)margin;
// declared property setter: -(void)setHideAccountButton:(BOOL)button;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
