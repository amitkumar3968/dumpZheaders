/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayDiagnostics.framework/AirPlayDiagnostics
 */

#import "UIAlertViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UINavigationController;
@protocol AirPlayDiagnosticsFullscreenControllerDelegate;

@interface AirPlayDiagnosticsFullscreenController : XXUnknownSuperclass <UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UINavigationControllerDelegate> {
@private
	UINavigationController* _navController;
	id<AirPlayDiagnosticsFullscreenControllerDelegate> _delegate;
}
@property(retain, nonatomic) UINavigationController* navController;	// @synthesize=_navController
@property(assign, nonatomic) id<AirPlayDiagnosticsFullscreenControllerDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setNavController:(id)controller;
// declared property getter: -(id)navController;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)updateAirPlayLogSettings;
-(void)seekApprovalForAirPlayLogSettings;
-(BOOL)hasCorrectAirPlayLogSettings;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)checkLogSettings;
-(void)dealloc;
-(void)cancelReport;
-(void)startReport;
-(void)cleanupNavigationController;
-(void)invalidate;
-(void)initNavigationControllerWith:(id)with;
-(id)init;
@end
