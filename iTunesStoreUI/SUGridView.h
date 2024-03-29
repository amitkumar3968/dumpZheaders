/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "UITableViewDelegate.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDataSource.h"

@class SUGridRowTableViewCellLayoutManager, NSMutableDictionary, UIControl, UITableView;
@protocol SUGridViewDataSource, SUGridViewDelegate;

@interface SUGridView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	int _animationCount;
	CFArrayRef _columnCountBySection;
	id<SUGridViewDataSource> _dataSource;
	id<SUGridViewDelegate> _delegate;
	SUGridRowTableViewCellLayoutManager* _layoutManager;
	struct {
		unsigned commitEditing : 1;
		unsigned deleteConfirmationTitle : 1;
		unsigned editingStyle : 1;
		unsigned heightForHeader : 1;
		unsigned margin : 1;
		unsigned numberOfSections : 1;
		unsigned titleForHeader : 1;
		unsigned viewForHeader : 1;
		unsigned willDisplayCell : 1;
	} _respondFlags;
	NSMutableDictionary* _reusableCells;
	UITableView* _tableView;
	UIControl* _touchCaptureView;
}
@property(readonly, assign, nonatomic) UITableView* tableView;	// @synthesize=_tableView
@property(assign, nonatomic) id<SUGridViewDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) id<SUGridViewDataSource> dataSource;	// @synthesize=_dataSource
// declared property getter: -(id)tableView;
// declared property getter: -(id)dataSource;
// declared property getter: -(id)delegate;
-(void)_reloadColumnCounts;
-(void)_endSwipeToDelete;
-(id)_copyCellSetForIndexPaths:(id)indexPaths;
-(BOOL)_canDeleteCellAtIndexPath:(id)indexPath;
-(void)_animateDeletionOfCellsAtIndexPaths:(id)indexPaths;
-(void)_reuseColumnCellsForCell:(id)cell;
-(int)_minimumColumnCount;
-(void)_animateDeletionOfCell:(id)cell;
-(void)_deleteAnimationStopped;
-(void)_touchCaptureAction:(id)action;
-(void)_gridSwipeGesture:(id)gesture;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)marginForTableView:(id)tableView;
-(void)layoutSubviews;
-(id)visibleCells;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property setter: -(void)setDataSource:(id)source;
-(void)reloadData;
-(void)reloadCellsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;
-(id)indexPathForCellAtPoint:(CGPoint)point;
-(id)indexPathForCell:(id)cell;
-(int)globalRowForRowAtIndexPath:(id)indexPath;
-(int)globalIndexForCellAtIndexPath:(id)indexPath;
-(id)dequeueReusableCellWithIdentifier:(id)identifier;
-(void)deleteSections:(id)sections withRowAnimation:(int)rowAnimation;
-(void)deleteCellsAtIndexPaths:(id)indexPaths animated:(BOOL)animated;
-(id)cellForIndexPath:(id)indexPath;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame tableViewStyle:(int)style;
-(id)initWithFrame:(CGRect)frame;
@end

