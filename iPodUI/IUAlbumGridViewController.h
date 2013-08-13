/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUWildcatVideoDetailViewControllerDelegate.h"
#import "iPodUI-Structs.h"
#import "UIAlertViewDelegate.h"
#import "IUiPodViewController.h"
#import "IUAlbumGridCellContextDelegate.h"
#import "IUAlbumGridRowCellDelegate.h"
#import "MPImageCacheDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "IUAlbumGridTableViewDelegate.h"

@class MPImageCache, UIControl, IUAlbumGridViewControllerTransitionCache, MPImageModifier, IUAlbumGridTableView, NSMutableSet, IUSegmentedViewController, IUWildcatVideoDetailViewController, IUAlbumGridCellContext, UIAlertView;

@interface IUAlbumGridViewController : IUiPodViewController <IUAlbumGridCellContextDelegate, IUAlbumGridRowCellDelegate, MPImageCacheDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, IUAlbumGridTableViewDelegate, UIAlertViewDelegate, IUWildcatVideoDetailViewControllerDelegate> {
	IUSegmentedViewController* _segmentedViewController;
	IUAlbumGridCellContext* _cellContext;
	MPImageCache* _imageCache;
	IUAlbumGridTableView* _tableView;
	UIControl* _tableFooterView;
	unsigned _dimmedAlbumIndex;
	int _deferReloadDataCount;
	unsigned _selectedAlbumIndex;
	BOOL _editing;
	BOOL _deleting;
	BOOL _wasRecentlyScrolling;
	BOOL _showCellTitles;
	BOOL _deferredReloadData;
	BOOL _shouldHideSelectedAlbum;
	IUAlbumGridViewControllerTransitionCache* _transitionCache;
	id _restoreViewInfoAfterLoad;
	UIAlertView* _deleteConfirmationAlert;
	NSMutableSet* _cellsInUse;
	NSMutableSet* _previousCellsInUse;
	IUWildcatVideoDetailViewController* _videoDetailViewController;
	Class _cachedImageModifierClass;
	MPImageModifier* _imageModifier;
}
@property(retain, nonatomic) MPImageModifier* imageModifier;	// @synthesize=_imageModifier
@property(readonly, assign, nonatomic) unsigned _albumsPerRow;
@property(retain, nonatomic) IUWildcatVideoDetailViewController* videoDetailViewController;	// @synthesize=_videoDetailViewController
@property(assign, nonatomic) BOOL editing;	// @synthesize=_editing
@property(assign, nonatomic) IUSegmentedViewController* segmentedViewController;	// @synthesize=_segmentedViewController
+(BOOL)supportsViewControllerStyle:(int)style;
// declared property setter: -(void)setImageModifier:(id)modifier;
// declared property getter: -(id)imageModifier;
// declared property setter: -(void)setSegmentedViewController:(id)controller;
// declared property getter: -(id)segmentedViewController;
// declared property getter: -(BOOL)editing;
// declared property getter: -(id)videoDetailViewController;
-(void)_selectionActionForCell:(id)cell albumIndex:(unsigned)index;
-(BOOL)_prepareForSelectionActionForCell:(id)cell albumIndex:(unsigned)index;
-(unsigned long long)_persistentUIDOfRepresentativeTrackForAlbumIndex:(unsigned)albumIndex;
-(CGRect)_fromFrameForTransitionFromCell:(id)cell albumIndex:(unsigned)index;
-(id)_scrollToAlbumWithIndex:(unsigned)index;
-(void)_expireWasRecentlyScrolling;
-(void)_setDimmedAlbumIndex:(unsigned)index;
-(unsigned)_rowForAlbumIndex:(unsigned)albumIndex;
-(id)_gridCellForAlbumIndex:(unsigned)albumIndex;
-(void)_fixupDataSource;
-(id)_createCellContextWithBackgroundColor:(id)backgroundColor albumFillColor:(id)color titleColor:(id)color3 subtitleColor:(id)color4 previousContext:(id)context;
-(void)_cancelDeleteConfirmationAlert:(BOOL)alert;
// declared property getter: -(unsigned)_albumsPerRow;
// declared property setter: -(void)setEditing:(BOOL)editing;
// declared property setter: -(void)setVideoDetailViewController:(id)controller;
-(void)setSelectedAlbumHidden:(BOOL)hidden;
-(void)clearSelectedAlbum;
-(CGRect)selectedAlbumFrameForMediaItem:(id)mediaItem;
-(void)_rentalInfoChangedNotification:(id)notification;
-(void)albumGridRowCell:(id)cell deleteAlbumAtIndex:(unsigned)index;
-(void)alertViewCancel:(id)cancel;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)albumGridCell:(id)cell shouldShowTitleAtIndex:(unsigned)index;
-(void)albumGridRowCell:(id)cell artWasLoadedAtIndex:(unsigned)index imageSubRect:(CGRect)rect;
-(void)albumGridRowCell:(id)cell longTouchInAlbumWithIndex:(unsigned)index;
-(void)albumGridRowCell:(id)cell touchesEndedInAlbumWithIndex:(unsigned)index;
-(void)albumGridRowCell:(id)cell touchesCancelledInAlbumWithIndex:(unsigned)index;
-(void)albumGridRowCell:(id)cell touchesBeganInAlbumWithIndex:(unsigned)index;
-(id)newGridImageViewForAlbumGridRowCell:(id)albumGridRowCell;
-(CGPoint)actualImageOriginForCellContext:(id)cellContext;
-(CGSize)thumbnailSizeForAlbumGridCellContext:(id)albumGridCellContext;
-(unsigned)albumsPerRowForAlbumGridCellContext:(id)albumGridCellContext;
-(void)imageCache:(id)cache loadedImage:(id)image forRequest:(id)request;
-(BOOL)scrollViewShouldScrollToTop:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)tableViewDidSelectNothing:(id)tableView;
-(void)didEstablishRepresentativeTrackWithPersistentUID:(unsigned long long)persistentUID;
-(unsigned long long)representativeTrackPersistentUIDOfSelectedAlbum;
-(id)sectionIndexTitlesForTableView:(id)tableView;
-(id)tableView:(id)view indexPathForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;
-(void)tableViewDidFinishReload:(id)tableView;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)copyArchivableContexts;
-(BOOL)shouldShowStoreButton;
-(void)restoreViewControllerInfo:(id)info animated:(BOOL)animated;
-(void)reloadData;
-(void)setContext:(id)context;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(BOOL)isDeferringReloadData;
-(void)endDeferringReloadData;
-(void)beginDeferringReloadData;
-(void)dealloc;
-(id)init;
@end

