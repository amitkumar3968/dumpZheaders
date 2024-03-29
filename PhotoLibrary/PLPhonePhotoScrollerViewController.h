/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLPhotoScrollerViewController.h"
#import "UINavigationControllerDelegate.h"

@class UIView;

@interface PLPhonePhotoScrollerViewController : PLPhotoScrollerViewController <UINavigationControllerDelegate> {
@private
	UIView* _savedButtonBarSuperview;
	unsigned _isModalTransition : 1;
	unsigned _didDisappearUnderModalTransition : 1;
	UIView* _viewToRemoveForSlideShow;
}
-(void)_updateNavigationBar;
-(BOOL)_isAirPlayEnabled;
-(BOOL)_isPerformingModalTransitionFromCamera;
-(BOOL)isModalTransitioning;
-(void)beginSlideshowByRemovingView:(id)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidDisappear:(BOOL)view;
-(void)_emailComposeSheetIsReady;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)didMoveToPhotoAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithPhoto:(id)photo inAlbum:(NSObject*)album;
-(id)initWithPhoto:(id)photo inAlbum:(NSObject*)album lockStatusBar:(BOOL)bar delayImageLoading:(BOOL)loading;
@end

