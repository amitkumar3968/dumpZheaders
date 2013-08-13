/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUTableDataSource.h"

@class NSMutableArray, NSArray;

@interface SUAggregateDataSource : SUTableDataSource {
	NSMutableArray* _headerViews;
	NSMutableArray* _sources;
	int _tableViewStyle;
}
@property(readonly, assign, nonatomic) NSArray* sources;	// @synthesize=_sources
@property(assign, nonatomic) int tableViewStyle;	// @synthesize=_tableViewStyle
// declared property setter: -(void)setTableViewStyle:(int)style;
// declared property getter: -(int)tableViewStyle;
// declared property getter: -(id)sources;
-(int)_localIndexForSectionIndex:(int)sectionIndex;
-(void)setCellReuseSource:(id)source;
-(void)reloadData;
-(void)reloadCellContexts;
-(int)numberOfSections;
-(int)numberOfRowsInSection:(int)section;
-(int)numberOfColumnsInSection:(int)section;
-(id)headerViewForSection:(int)section;
-(BOOL)deleteIndexPath:(id)path;
-(void)configureCell:(id)cell forIndexPath:(id)indexPath;
-(float)cellHeightForIndexPath:(id)indexPath;
-(id)cellForIndexPath:(id)indexPath;
-(BOOL)canSelectIndexPath:(id)path;
-(BOOL)canDoubleTapIndexPath:(id)path;
-(BOOL)canDeleteIndexPath:(id)path;
-(id)indexPathForRowIndex:(unsigned)rowIndex inSectionIndex:(unsigned)sectionIndex;
-(id)dataSourceForIndexPath:(id)indexPath;
-(void)addDataSource:(id)source withHeaderView:(id)headerView;
-(void)dealloc;
@end

