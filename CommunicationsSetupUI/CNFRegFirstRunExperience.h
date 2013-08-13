/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import "NSObject.h"

@class UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

@protocol CNFRegFirstRunExperience <NSObject>
@optional
@property(assign, nonatomic) BOOL showSplash;
@required
@property(retain, nonatomic) UIBarButtonItem* customRightButton;
@property(retain, nonatomic) UIBarButtonItem* customLeftButton;
@property(readonly, assign, nonatomic) int currentAppearanceStyle;
@property(assign, nonatomic) id<CNFRegFirstRunDelegate> delegate;
// declared property setter: -(void)setCustomRightButton:(id)button;
// declared property getter: -(id)customRightButton;
// declared property setter: -(void)setCustomLeftButton:(id)button;
// declared property getter: -(id)customLeftButton;
// declared property getter: -(int)currentAppearanceStyle;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)initWithRegController:(id)regController account:(id)account;
@optional
// declared property setter: -(void)setShowSplash:(BOOL)splash;
// declared property getter: -(BOOL)showSplash;
@end

