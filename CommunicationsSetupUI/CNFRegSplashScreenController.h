/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CNFRegFirstRunExperience.h"

@class CNFRegLearnMoreButton, UIBarButtonItem, CNFRegController;
@protocol CNFRegFirstRunDelegate;

@interface CNFRegSplashScreenController : XXUnknownSuperclass <CNFRegFirstRunExperience> {
@private
	CNFRegLearnMoreButton* _learnMoreButton;
	id<CNFRegFirstRunDelegate> _delegate;
	CNFRegController* _regController;
}
@property(assign, nonatomic) BOOL showSplash;
@property(retain, nonatomic) UIBarButtonItem* customRightButton;	// @dynamic
@property(retain, nonatomic) UIBarButtonItem* customLeftButton;	// @dynamic
@property(readonly, assign, nonatomic) int currentAppearanceStyle;	// @dynamic
@property(assign, nonatomic) id<CNFRegFirstRunDelegate> delegate;	// @synthesize=_delegate
@property(retain, nonatomic) CNFRegController* regController;	// @synthesize=_regController
// declared property setter: -(void)setRegController:(id)controller;
// declared property getter: -(id)regController;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(id)customRightButton;
// declared property setter: -(void)setCustomRightButton:(id)button;
// declared property getter: -(id)customLeftButton;
// declared property setter: -(void)setCustomLeftButton:(id)button;
// declared property getter: -(int)currentAppearanceStyle;
-(id)_shadowedLabelWithFont:(id)font text:(id)text;
-(id)_shadowLabelColor;
-(void)_getStartedPressed:(id)pressed;
-(void)_learnMorePressed:(id)pressed;
-(void)viewWillAppear:(BOOL)view;
-(void)willBecomeActive;
-(void)loadView;
-(float)_startingYOffset;
-(id)splashImage;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)initWithRegController:(id)regController account:(id)account;
-(id)init;
@end
