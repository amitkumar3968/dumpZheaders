/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UINavigationControllerDelegate.h"
#import "PhotoLibrary-Structs.h"
#import "PLRootLibraryNavigationController.h"
#import "PLAlbumListChangeObserver.h"
#import "PLAlbumChangeObserver.h"
#import "PLDismissableViewController.h"
#import "UITabBarControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PLPhotosPickerSessionParticipant.h"

@class UINavigationController, NSDictionary, PLPhotosPickerSession;

@interface PLTabbedLibraryViewController : XXUnknownSuperclass <UITabBarControllerDelegate, UINavigationControllerDelegate, PLPhotosPickerSessionParticipant, PLAlbumListChangeObserver, PLAlbumChangeObserver, PLDismissableViewController, PLRootLibraryNavigationController> {
@private
	PLPhotosPickerSession* _currentPickerSession;
	NSDictionary* _filteredAlbumListsByContentMode;
	int _pendingSelectedContentMode;
	int _baseAlbumListFilter;
	BOOL _showPlacesTab;
	BOOL _psBadgeIsDirty;
	BOOL _barHiddenExplicitly;
}
@property(retain, nonatomic) PLPhotosPickerSession* currentPickerSession;	// @synthesize=_currentPickerSession
@property(assign, nonatomic) int selectedContentMode;
@property(readonly, assign, nonatomic) BOOL needsTabBar;
@property(readonly, assign, nonatomic) UINavigationController* selectedNavigationController;
@property(readonly, assign) int baseAlbumListFilter;	// @synthesize=_baseAlbumListFilter
+(void)initialize;
// declared property getter: -(int)baseAlbumListFilter;
// declared property getter: -(id)currentPickerSession;
-(void)prepareForDefaultImageSnapshot;
-(void)_makeViewControllersPerformSelector:(SEL)selector withNotification:(id)notification;
-(void)albumDidChange:(id)album;
-(void)albumListDidChange:(id)albumList;
-(void)_libraryDidChange:(id)_library;
-(void)_applicationWillEnterForeground:(id)_application;
-(void)_updateDisplayedTabs:(BOOL)tabs;
-(id)_navigationControllerForContentMode:(int)contentMode replacedController:(id*)controller;
-(BOOL)_navigationControllerIsShowingSingleAlbum:(id)album;
-(BOOL)_photoStreamTabShouldShowSingleAlbum;
-(id)_existingNavigationControllerForContentMode:(int)contentMode;
-(id)libraryViewControllerWithContentMode:(int)contentMode singleAlbum:(BOOL)album;
-(void)_updatePhotoStreamTabBadgeForNavigationController:(id)navigationController;
// declared property getter: -(BOOL)needsTabBar;
-(void)showTabBarIfNeeded:(BOOL)needed;
-(void)showBarWithTransition:(int)transition;
-(void)hideTabBar:(BOOL)bar;
-(BOOL)prepareForDismissingAnimated:(BOOL)dismissingAnimated;
-(BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)currentTabAnimated;
-(BOOL)commentIsAvailableForNavigation:(id)navigation inAsset:(id)asset;
-(BOOL)assetIsAvailableForNavigation:(id)navigation inAlbum:(NSObject*)album;
-(NSObject*)_availableAlbumToNavigateToAsset:(id)asset preferredAlbum:(NSObject*)album;
-(BOOL)albumIsAvailableForNavigation:(NSObject*)navigation;
-(BOOL)contentModeIsAvailableForNavigation:(int)navigation;
-(void)navigateToComment:(id)comment forAsset:(id)asset animated:(BOOL)animated;
-(void)navigateToRevealAsset:(id)revealAsset inAlbum:(NSObject*)album animated:(BOOL)animated;
-(void)navigateToAsset:(id)asset inAlbum:(NSObject*)album animated:(BOOL)animated;
-(void)_navigateToAsset:(id)asset andPerformAction:(int)action inAlbum:(NSObject*)album animated:(BOOL)animated;
-(void)navigateToContentMode:(int)contentMode animated:(BOOL)animated completion:(id)completion;
-(void)navigateToRevealAlbum:(NSObject*)revealAlbum initiallyHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)navigateToAlbum:(NSObject*)album animated:(BOOL)animated completion:(id)completion;
-(void)_navigateToAlbum:(NSObject*)album andPerformAction:(int)action initiallyHidden:(BOOL)hidden animated:(BOOL)animated completion:(id)completion;
-(int)_contentModeForAlbum:(NSObject*)album;
// declared property getter: -(int)selectedContentMode;
// declared property setter: -(void)setSelectedContentMode:(int)mode;
// declared property setter: -(void)setCurrentPickerSession:(id)session;
// declared property getter: -(id)selectedNavigationController;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)init;
-(id)initWithBaseAlbumListFilter:(int)baseAlbumListFilter;
@end

