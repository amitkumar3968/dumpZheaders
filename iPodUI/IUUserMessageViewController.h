/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUiPodViewController.h"

@class IUUserMessageView;

@interface IUUserMessageViewController : IUiPodViewController {
	IUUserMessageView* _messageView;
	BOOL _didAppearShouldAttemptReturnToSourceController;
	BOOL _didDisappearShouldAttemptReturnToSourceController;
}
-(void)_wifiEnabledDidChangeNotification:(id)_wifiEnabled;
-(void)_contentsDidChangeNotification:(id)_contents;
-(void)setContext:(id)context;
-(void)reloadData;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)scheduleAttemptReturnToSourceController;
-(void)attemptReturnToSourceController;
-(void)loadView;
-(id)copyArchivableContexts;
-(void)dealloc;
-(id)init;
@end

