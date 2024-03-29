/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "SSDownloadManagerObserver.h"
#import "IUGeniusGridViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "IUiPodViewController.h"
#import "iPodUI-Structs.h"

@class NSTimer, UIImageView, UIPageControl, UIScrollView, IUGeniusGridView, MPGeniusMix, NSMutableSet, NSMutableArray, UITableViewCell;

@interface IUGeniusMixViewController : IUiPodViewController <IUGeniusGridViewDelegate, SSDownloadManagerObserver, UIScrollViewDelegate> {
@private
	UIImageView* _artworkImageView;
	BOOL _didPushMix;
	IUGeniusGridView* _flippedGridView;
	NSMutableArray* _gridViews;
	BOOL _isObservingDownloads;
	BOOL _isZooming;
	UITableViewCell* _moreListTableViewCell;
	NSTimer* _navBarUpdateTimer;
	UIPageControl* _pageControl;
	UIScrollView* _scrollView;
	BOOL _shouldUpdateNavBar;
	NSMutableSet* _unusedGridViewPool;
}
@property(readonly, assign, nonatomic) MPGeniusMix* selectedMix;
-(void)_zoomOutDidStop;
-(void)_zoomArtworkOut;
-(void)_zoomArtworkInForDataSource:(id)dataSource;
-(id)_viewControllerContextForCurrentPage;
-(void)_unloadGridViews;
-(void)_updateNavigationBarForCurrentPageAnimated:(BOOL)currentPageAnimated;
-(void)_reloadDataWithSelectedMix:(id)selectedMix;
-(void)_pruneGridViewPages;
-(int)_playingGeniusMixPage;
-(int)_pageForContentOffset;
-(BOOL)_hasGridViewForPage:(int)page;
-(id)_geniusMixDataSource;
-(void)_flipGridView:(id)view toOrientation:(int)orientation animated:(BOOL)animated;
-(void)_enqueueGridViewForReuse:(id)reuse;
-(id)_dequeueExistingGridView;
-(BOOL)_currentPageIsPlayingGeniusMix;
-(void)_createGridViewIfNecessaryForPage:(int)page;
-(CGPoint)_contentOffsetForPage:(int)page;
-(CGPoint)_contentOffsetForCurrentPage;
// declared property getter: -(id)selectedMix;
-(void)_nowPlayingItemDidChange:(id)_nowPlayingItem;
-(void)_networkTypeDidChangeNotification:(id)_networkType;
-(void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;
-(void)geniusGridViewWasTapped:(id)tapped;
-(void)_pageControlValueDidChange:(id)_pageControlValue;
-(void)_downloadMixForCurrentPage:(id)currentPage;
-(void)_cancelDownloadingMixForCurrentPage:(id)currentPage;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)reloadData;
-(int)navigationTransition;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)unregisterForPlayerNotifications;
-(void)registerForPlayerNotifications;
-(void)viewDidDisappear:(BOOL)view;
-(id)moreListTableCell;
-(id)_moreListTitle;
-(void)loadView;
-(void)dealloc;
-(id)init;
@end

