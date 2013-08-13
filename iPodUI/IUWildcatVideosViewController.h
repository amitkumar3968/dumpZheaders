/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUWildcatViewController.h"
#import "IUSegmentedViewControllerDelegate.h"
#import "iPodUI-Structs.h"
#import "IUFoldingTransitionDelegate.h"
#import "IUDoorSwingTransitionViewDelegate.h"
#import "ViewControllerArchiveNode.h"
#import "IUStoreClientPurchaseDestination.h"

@class IUVideosBackstopView, IUiPodSegmentedViewController, UISnapshotView, UIViewController, MPMediaLibrary, IUWildcatVideoDetailViewController, IUVideoPlaybackViewController;

@interface IUWildcatVideosViewController : IUWildcatViewController <IUFoldingTransitionDelegate, IUDoorSwingTransitionViewDelegate, IUSegmentedViewControllerDelegate, ViewControllerArchiveNode, IUStoreClientPurchaseDestination> {
	IUVideosBackstopView* _backstopView;
	IUiPodSegmentedViewController* _browserViewController;
	IUiPodSegmentedViewController* _deviceBrowserViewController;
	IUiPodSegmentedViewController* _sharedLibraryBrowserViewController;
	MPMediaLibrary* _currentSharedLibrary;
	IUWildcatVideoDetailViewController* _detailViewController;
	IUVideoPlaybackViewController* _playbackViewController;
	struct {
		UIViewController* fromViewController;
		UIViewController* toViewController;
		BOOL animated;
	} _transitionContext;
	UISnapshotView* _prerotationSnapshotView;
	int _lastOrientation;
}
@property(readonly, assign, nonatomic) IUVideoPlaybackViewController* playbackViewController;	// @synthesize=_playbackViewController
@property(readonly, assign, nonatomic) IUWildcatVideoDetailViewController* detailViewController;	// @synthesize=_detailViewController
@property(readonly, assign, nonatomic) IUiPodSegmentedViewController* browserViewController;	// @synthesize=_browserViewController
// declared property getter: -(id)playbackViewController;
// declared property getter: -(id)detailViewController;
// declared property getter: -(id)browserViewController;
-(void)_transitionFromViewController:(id)viewController toViewController:(id)viewController2 withFoldingTransition:(id)foldingTransition;
-(void)_transition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3;
-(void)_rotationAnimationDidStop:(id)_rotationAnimation finished:(id)finished context:(void*)context;
-(void)_readyToBeginTransitionToBrowserView:(id)browserView;
-(void)_popSharedLibraryAnimated:(BOOL)animated;
-(id)_newSegmentedController:(BOOL)controller;
-(BOOL)_isPlaybackViewController:(id)controller;
-(CGRect)_frameForViewController:(id)viewController;
-(void)_finishTransitionAnimation:(BOOL)animation;
-(void)_cancelCurrentTransition;
-(void)_backgroundAnimationDidStop:(id)_backgroundAnimation finished:(id)finished context:(void*)context;
-(void)_animateBackgroundForBookTransitionToViewController:(id)viewController;
-(CGRect)_albumFrameForBrowserControllerTransition:(id)browserControllerTransition;
-(id)_albumGridViewControllerFromBrowserController:(id)browserController;
-(void)_libraryDidChangeNotification:(id)_library;
-(void)_sharedLibraryPickedNotification:(id)notification;
-(void)_availableMediaLibrariesDidChangeNotification:(id)_availableMediaLibraries;
-(void)_popSharedLibrary:(id)library;
-(void)segmentedViewController:(id)controller didSelectViewController:(id)controller2;
-(id)segmentedControlForSegmentedViewController:(id)segmentedViewController;
-(void)doorSwingTransitionView:(id)view didFinishTransition:(int)transition;
-(void)foldingTransitionDidStop:(id)foldingTransition finished:(BOOL)finished;
-(id)browserSegmentedViewController;
-(id)directChildViewController;
-(id)topViewController;
-(BOOL)restoreArchivedContexts:(id)contexts;
-(id)copyArchivableContexts;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_enabledMediaTypesDidChange:(id)_enabledMediaTypes;
-(void)loadView;
-(BOOL)_isSupportedInterfaceOrientation:(int)orientation;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(void)setPlaybackViewController:(id)controller makeChildController:(BOOL)controller2;
-(void)setDetailViewController:(id)controller makeChildController:(BOOL)controller2;
-(void)setBrowserViewController:(id)controller makeChildController:(BOOL)controller2;
-(void)_setViewController:(id)controller into:(id*)into makeChildController:(BOOL)controller3;
-(void)finishPurchasedItemTransition;
-(CGRect)preparePurchasedItemForTransition:(unsigned long long)transition;
-(CGSize)detailSizeFromArtSizeForBrowserControllerTransition:(CGSize)browserControllerTransition;
-(void)pushSharedLibrary:(id)library animated:(BOOL)animated;
-(void)pushPlaybackViewController:(id)controller animated:(BOOL)animated;
-(void)popToDetailViewControllerAnimated:(BOOL)detailViewControllerAnimated;
-(void)popToBrowserViewControllerAnimated:(BOOL)browserViewControllerAnimated;
-(void)performPushDetailViewControllerInTransitionView:(id)transitionView;
-(id)newTransitionViewToPushDetailViewContoller:(id)pushDetailViewContoller animated:(BOOL)animated fromFrame:(CGRect)frame;
-(void)pushDetailViewContoller:(id)contoller animated:(BOOL)animated fromFrame:(CGRect)frame;
-(void)dealloc;
-(id)init;
@end
