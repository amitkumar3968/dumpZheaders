/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "IUiPodViewController.h"
#import "IUVideoSummaryViewDataSource.h"

@class IUEmbeddedStorePageViewController, IUVideoSummaryView, MPMediaItem;

@interface IUVideoSummaryViewController : IUiPodViewController <IUVideoSummaryViewDataSource> {
	IUEmbeddedStorePageViewController* _crossMerchandisingViewController;
	IUVideoSummaryView* _videoSummaryView;
	int _layoutOrientation;
}
@property(readonly, assign, nonatomic) MPMediaItem* firstMediaItem;
+(BOOL)supportsViewControllerStyle:(int)style;
+(Class)backstopViewClass;
-(void)_reloadCrossMerchandising:(BOOL)merchandising;
-(void)_removeCrossMerchandising:(BOOL)merchandising;
-(id)_newURLRequestPropertiesForMediaItem:(id)mediaItem;
-(void)_layoutViewsForOrientation:(int)orientation;
-(void)_networkTypeChangedNotification:(id)notification;
-(id)footerViewForVideoSummaryView:(id)videoSummaryView;
-(id)mediaItemForVideoSummaryView:(id)videoSummaryView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)title;
-(void)loadView;
-(void)reloadData;
// declared property getter: -(id)firstMediaItem;
-(void)dealloc;
-(id)init;
@end
