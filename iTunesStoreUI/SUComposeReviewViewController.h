/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUComposeReviewViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "SUViewController.h"

@class SUComposeReviewView, SURatingAlertView, ISReview;

@interface SUComposeReviewViewController : SUViewController <SUComposeReviewViewDelegate, UIAlertViewDelegate> {
	SUComposeReviewView* _composeView;
	SURatingAlertView* _ratingAlert;
	ISReview* _review;
	int _state;
}
-(void)_setReviewByMergingWithReview:(id)review;
-(void)_fetchReviewInfo;
-(void)_submit;
-(void)_cancel;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)composeReviewViewValidityChanged:(id)changed;
-(void)operationFinished:(id)finished;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(id)copyScriptViewController;
-(void)applicationDidEnterBackground;
-(void)setReview:(id)review;
-(id)copyReview;
-(void)dealloc;
-(id)init;
@end

