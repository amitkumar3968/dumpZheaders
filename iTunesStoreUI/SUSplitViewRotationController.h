/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SURotationController.h"

@class UIViewController;

@interface SUSplitViewRotationController : SURotationController {
	SURotationController* _firstRotationController;
	UIViewController* _firstViewController;
	SURotationController* _secondRotationController;
	UIViewController* _secondViewController;
}
-(id)_secondRotationController;
-(id)_firstRotationController;
-(void)prepareToRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)finishRotationFromInterfaceOrientation:(int)interfaceOrientation;
-(void)animateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)dealloc;
@end

