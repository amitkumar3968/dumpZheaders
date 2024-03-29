/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "PLPhotosPickerSessionParticipant.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class UILongPressGestureRecognizer, PLAlbumSelectionControlsView, NSMutableSet, PLAlbumFooterView, NSIndexPath, UITapGestureRecognizer, UITableView, UIView, NSSet, PLAutoScroller, PLPhotosPickerSession, UIGestureRecognizer, NSMutableArray;
@protocol PLAlbumViewDataSource, PLAlbumViewDelegate;

@interface PLAlbumView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, PLPhotosPickerSessionParticipant> {
	NSMutableArray* _photosCountBySection;
	unsigned _sectionsCount;
	unsigned _totalItemsCount;
	unsigned _columnsPerRow;
	CGPoint _previousContentOffset;
	float _previousOffsetRatio;
	UITableView* _tableView;
	NSMutableArray* _rowCountBySection;
	id<PLAlbumViewDataSource> _dataSource;
	int _selectionStyle;
	PLPhotosPickerSession* _currentPickerSession;
	UITapGestureRecognizer* _tapRecognizer;
	UIGestureRecognizer* _tapFailedRecognizer;
	NSIndexPath* _photoIndexPathToBeSelected;
	BOOL _allowsSelectionGestures;
	NSMutableSet* _pendingPhotoReloadIndexPaths;
	NSMutableSet* _pendingPhotoRemoveIndexPaths;
	NSMutableSet* _pendingPhotoInsertIndexPaths;
	unsigned _pendingUpdates;
	PLAlbumFooterView* _footerView;
	PLAlbumSelectionControlsView* _selectionControlsView;
	id<PLAlbumViewDelegate> _delegate;
	NSMutableSet* _selectedPhotoIndexPaths;
	NSMutableSet* _activityIndexPaths;
	NSIndexPath* _unreadStartMarkerIndexPath;
	UILongPressGestureRecognizer* _longPressRecognizer;
	NSIndexPath* _calloutSelectionIndexPath;
	BOOL _swipeSelection;
	UIView* _draggedItemView;
	CGSize _draggedItemOffset;
	NSIndexPath* _dragItemCurrentPhotoIndexPath;
	PLAutoScroller* _autoscroller;
	struct {
		unsigned displayTextBadges : 1;
		unsigned canShowCopyCallout : 1;
		unsigned usesViewBasedCells : 1;
		unsigned allowsReordering : 1;
		unsigned delegateCanSelect : 1;
		unsigned delegateSelectionDidChange : 1;
		unsigned delegateDidTapPhoto : 1;
		unsigned delegatePreheatImageData : 1;
		unsigned delegateShouldShowPhotoCount : 1;
		unsigned dataSourceSectionHeaders : 1;
	} _albumViewFlags;
}
@property(retain, nonatomic) PLPhotosPickerSession* currentPickerSession;	// @synthesize=_currentPickerSession
@property(assign, nonatomic) id<PLAlbumViewDelegate> delegate;
@property(assign, nonatomic) id<PLAlbumViewDataSource> dataSource;	// @synthesize=_dataSource
@property(assign, nonatomic) float bottomInset;
@property(assign, nonatomic) BOOL canShowCopyCallout;
@property(assign, nonatomic) BOOL displaysTextBadges;
@property(assign, nonatomic) BOOL allowsReordering;
@property(assign, nonatomic) BOOL usesViewBasedCells;
@property(copy, nonatomic) NSIndexPath* unreadStartMarkerIndexPath;	// @synthesize=_unreadStartMarkerIndexPath
@property(copy, nonatomic) NSSet* activityIndexPaths;
@property(readonly, assign, nonatomic) NSIndexPath* calloutSelectionIndexPath;	// @synthesize=_calloutSelectionIndexPath
@property(copy, nonatomic) NSSet* selectedPhotoIndexPaths;
@property(assign, nonatomic) BOOL allowsSelectionGestures;	// @synthesize=_allowsSelectionGestures
@property(assign, nonatomic) int photoSelectionStyle;
@property(readonly, assign, nonatomic) unsigned totalItemsCount;	// @synthesize=_totalItemsCount
@property(readonly, retain) UITableView* tableView;	// converted property
// declared property getter: -(id)unreadStartMarkerIndexPath;
// declared property getter: -(id)currentPickerSession;
// declared property setter: -(void)setAllowsSelectionGestures:(BOOL)gestures;
// declared property getter: -(BOOL)allowsSelectionGestures;
// declared property getter: -(id)dataSource;
// declared property getter: -(id)calloutSelectionIndexPath;
// declared property getter: -(unsigned)totalItemsCount;
-(void)didMoveToWindow;
-(void)_deselectAllPhotosNotifyingDelegate:(id)delegate;
-(void)_selectAllPhotosNotifyingDelegate:(id)delegate;
-(void)_updateSelectionControls;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
// declared property setter: -(void)setCurrentPickerSession:(id)session;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_selectAfterDelay;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)_longPressGesture:(id)gesture;
-(BOOL)_dragMove:(id)move;
-(void)_tapFailedGesture:(id)gesture;
-(void)_tapGesture:(id)gesture;
-(void)_updateInstalledGestureRecognizers;
-(void)_menuDidHideNotification:(id)_menu;
-(void)rotationDidStart;
-(void)rotationWillStart;
// converted property getter: -(id)tableView;
// declared property getter: -(float)bottomInset;
// declared property setter: -(void)setBottomInset:(float)inset;
// declared property getter: -(BOOL)canShowCopyCallout;
// declared property setter: -(void)setCanShowCopyCallout:(BOOL)callout;
// declared property getter: -(BOOL)displaysTextBadges;
// declared property setter: -(void)setDisplaysTextBadges:(BOOL)badges;
// declared property setter: -(void)setAllowsReordering:(BOOL)reordering;
// declared property getter: -(BOOL)allowsReordering;
// declared property setter: -(void)setUsesViewBasedCells:(BOOL)cells;
// declared property getter: -(BOOL)usesViewBasedCells;
-(void)_updateUnreadMarkerForCell:(id)cell atRowIndexPath:(id)rowIndexPath animated:(BOOL)animated;
-(void)setUnreadStartMarkerIndexPath:(id)path animated:(BOOL)animated;
// declared property setter: -(void)setUnreadStartMarkerIndexPath:(id)path;
-(void)hideActivityOnPhotoAtIndexPath:(id)indexPath;
-(void)showActivityOnPhotoAtIndexPath:(id)indexPath;
// declared property setter: -(void)setActivityIndexPaths:(id)paths;
// declared property getter: -(id)activityIndexPaths;
-(void)_changeActivityStateOfPhotoAtIndexPath:(id)indexPath;
-(void)toggleSelectAll:(id)all;
-(void)clearSelection;
-(void)deselectPhotoAtIndexPath:(id)indexPath;
-(void)selectPhotoAtIndexPath:(id)indexPath;
// declared property setter: -(void)setSelectedPhotoIndexPaths:(id)paths;
// declared property getter: -(id)selectedPhotoIndexPaths;
// declared property setter: -(void)setPhotoSelectionStyle:(int)style;
// declared property getter: -(int)photoSelectionStyle;
-(id)_photoIndexPathAtPoint:(CGPoint)point;
-(void)_changeSelectionOfPhotoAtIndexPath:(id)indexPath notifyDelegate:(BOOL)delegate;
-(void)scrollToBottom:(BOOL)bottom;
-(void)scrollToVisibleItemAtIndexPath:(id)indexPath animated:(BOOL)animated;
-(BOOL)isPhotoVisibleAtIndexPath:(id)indexPath;
-(void)_processPendingUpdates;
-(void)endUpdates;
-(void)beginUpdates;
-(void)removePhotosAtIndexPaths:(id)indexPaths;
-(void)insertPhotosAtIndexPaths:(id)indexPaths;
-(void)reloadPhotoAtIndexPath:(id)indexPath;
-(void)reloadData;
// declared property setter: -(void)setDataSource:(id)source;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(BOOL)canBecomeFirstResponder;
-(void)_updateTableCell:(id)cell photoStartIndexPath:(id)path;
-(id)_firstPhotoIndexPathForRowIndexPath:(id)rowIndexPath;
-(unsigned)_cellPhotoIndexForPhotoIndexPath:(id)photoIndexPath;
-(id)_tableRowIndexPathForPhotoIndexPath:(id)photoIndexPath;
-(void)_preheatImageDataForDownwardScroll:(BOOL)downwardScroll;
-(void)_updateRowAndColumnCount;
-(void)_updateFooterView;
-(void)_updatePhotosAndSectionsCount;
-(unsigned)_leftPaddingForCellWidth:(float)cellWidth;
-(CGSize)_cellSize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

