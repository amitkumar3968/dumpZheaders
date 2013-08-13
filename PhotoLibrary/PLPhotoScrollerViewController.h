/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLAlbumChangeObserver.h"
#import "PLPhotoBrowserController.h"

@class UIBarButtonItem, UINavigationItem, UIToolbar;

@interface PLPhotoScrollerViewController : PLPhotoBrowserController <PLAlbumChangeObserver> {
	UINavigationItem* _navItem;
	UIBarButtonItem* _doneItem;
	int _previousInterfaceOrientation;
	unsigned _modalSheetIsPresent : 1;
	unsigned _dontChangeStatusBar : 1;
	unsigned _toolbarWasHiddenWhenSelfWasPushed : 1;
	unsigned _viewWillDisappear : 1;
}
@property(retain, nonatomic) UIBarButtonItem* doneItem;
@property(retain, nonatomic) UIToolbar* buttonBar;
@property(readonly, assign, nonatomic) unsigned visibleItemIndex;
@property(assign) BOOL dontChangeStatusBar;	// converted property
// declared property getter: -(id)doneItem;
// declared property setter: -(void)setDoneItem:(id)item;
-(void)_forceRotationToPortaitIfNecessary;
-(void)updateNavigationItemTitle;
// declared property getter: -(unsigned)visibleItemIndex;
-(void)didMoveToPhotoAtIndex:(unsigned)index;
-(void)startSettingWallpaper;
-(void)willPresentActionSheet:(id)sheet;
-(id)airTunesButton;
-(void)updateAirTunesButton;
-(void)removeAirTunesButton;
-(void)addAirTunesButton;
// converted property getter: -(BOOL)dontChangeStatusBar;
// converted property setter: -(void)setDontChangeStatusBar:(BOOL)bar;
-(void)removeRemakerContainerView;
-(id)remakerContainerView;
-(void)_setupButtonBar;
// declared property getter: -(id)buttonBar;
// declared property setter: -(void)setButtonBar:(id)bar;
-(void)_updateToolbar:(BOOL)toolbar;
-(void)setToolbarHidden:(BOOL)hidden withDuration:(double)duration;
-(void)_updateCommentsButtonFrameForUIOrientation:(int)uiorientation;
-(id)_currentToolbarItems;
-(id)navigationItem;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)setParentViewController:(id)controller;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)loadView;
-(void)dealloc;
-(id)_initWithAlbum:(NSObject*)album lockStatusBar:(BOOL)bar currentImageIndex:(int)index delayImageLoading:(BOOL)loading;
@end
