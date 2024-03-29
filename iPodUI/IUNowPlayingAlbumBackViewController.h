/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IUBackOfAlbumTableViewControllerDelegate.h"
#import "MPSwipableViewDelegate.h"
#import "iPodUI-Structs.h"

@class IUNowPlayingAlbumBackView, NSString, UIImage, IUBackOfAlbumTableViewController, UITableView, IUModalContext, IUBackOfAlbumDataSource, MPMediaQuery;

@interface IUNowPlayingAlbumBackViewController : XXUnknownSuperclass <IUBackOfAlbumTableViewControllerDelegate, MPSwipableViewDelegate> {
	IUNowPlayingAlbumBackView* _backView;
	id _coverFlowDelegate;
	MPMediaQuery* _customQuery;
	IUBackOfAlbumDataSource* _dataSource;
	unsigned _skipNextScrollToVisible : 1;
	int _style;
	IUBackOfAlbumTableViewController* _tableViewController;
	IUModalContext* _modalContext;
}
@property(retain, nonatomic) IUModalContext* modalContext;	// @synthesize=_modalContext
@property(readonly, assign, nonatomic) IUBackOfAlbumDataSource* dataSource;	// @synthesize=_dataSource
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(retain, nonatomic) NSString* title;
@property(retain, nonatomic) NSString* subtitle;
@property(assign, nonatomic) int style;	// @synthesize=_style
@property(retain, nonatomic) MPMediaQuery* customQuery;	// @synthesize=_customQuery
@property(assign, nonatomic) id coverFlowDelegate;	// @synthesize=_coverFlowDelegate
@property(retain, nonatomic) UIImage* artworkImage;
// declared property getter: -(int)style;
// declared property getter: -(id)modalContext;
// declared property getter: -(id)dataSource;
// declared property getter: -(id)customQuery;
// declared property getter: -(id)coverFlowDelegate;
-(id)_tableViewController;
-(void)_scrollCurrentRowToVisible;
-(void)_reloadDataFromItemChange:(BOOL)itemChange;
-(void)_reloadData;
-(void)_handleSwipeRight;
-(id)_backView;
-(void)_trackWillChangeNotification:(id)_track;
-(void)_dataSourceInvalidated:(id)invalidated;
-(void)_databaseContentsDidChangeNotification:(id)_databaseContents;
-(void)tableViewController:(id)controller didPerformDefaultActionForRow:(int)row;
-(void)swipableView:(id)view tappedWithCount:(unsigned)count;
-(void)swipableView:(id)view swipedInDirection:(int)direction;
// declared property getter: -(id)title;
// declared property getter: -(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setStyle:(int)style;
// declared property setter: -(void)setCustomQuery:(id)query;
// declared property setter: -(void)setCoverFlowDelegate:(id)delegate;
// declared property setter: -(void)setArtworkImage:(id)image;
// declared property getter: -(id)artworkImage;
-(void)accessoryButtonTapped:(id)tapped;
-(void)willMoveToParentViewController:(id)parentViewController;
-(void)setItem:(id)item;
-(BOOL)_shouldUseQueryRepresentativeTrackForItem;
-(id)aggregateStatisticsDisplayCountKey;
-(void)loadView;
-(BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;
// declared property getter: -(id)tableView;
// declared property setter: -(void)setModalContext:(id)context;
-(void)dealloc;
-(id)init;
@end

