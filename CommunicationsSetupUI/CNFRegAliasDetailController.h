/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import "CNFRegListController.h"

@class PSSpecifier, CNFRegAlias, NSArray;

@interface CNFRegAliasDetailController : CNFRegListController {
@private
	CNFRegAlias* _alias;
	PSSpecifier* _removeGroupSpecifier;
	PSSpecifier* _removeButtonSpecifier;
	NSArray* _resendValidationSpecifierGroup;
}
@property(retain, nonatomic) CNFRegAlias* alias;	// @synthesize=_alias
// declared property setter: -(void)setAlias:(id)alias;
// declared property getter: -(id)alias;
-(void)_setupEventHandlers;
-(void)_showAliasValidationError:(id)error;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)_buildSpecifierCache:(id)cache;
-(void)resendValidationEmailTapped:(id)tapped;
-(void)showRemoveAliasConfirmation;
-(void)setRemoveAliasEnabled:(BOOL)enabled animated:(BOOL)animated;
-(void)forgetAliasTapped:(id)tapped;
-(void)_showResendGroup:(BOOL)group animated:(BOOL)animated;
-(void)_updateUIAnimated:(BOOL)animated;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)specifierList;
-(id)bundle;
-(void)dealloc;
-(id)initWithRegController:(id)regController alias:(id)alias;
@end
