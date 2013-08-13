/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUiPodViewController.h"

@class NSTimer, UIProgressView, UIImageView;

@interface IUCloudProgressViewController : IUiPodViewController {
@private
	UIImageView* _cloudImageView;
	NSTimer* _cloudProgressTimer;
	UIProgressView* _cloudProgressView;
}
-(void)_updateInProgressDidChangeNotification:(id)_updateInProgress;
-(void)_updateProgressTimerDidFire:(id)_updateProgressTimer;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
@end

