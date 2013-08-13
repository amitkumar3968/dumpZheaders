/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import "MSStructuredPageTableDataSource.h"


@interface MSTrackListDataSource : MSStructuredPageTableDataSource {
}
-(id)_stylesheetString;
-(int)tableViewStyle;
-(id)placeholderCellForIndexPath:(id)indexPath;
-(void)reloadCellContexts;
-(float)heightForPlaceholderCells;
-(id)headerViewForSection:(int)section;
-(void)configurePlaceholderCell:(id)cell forIndexPath:(id)indexPath;
-(void)configureCell:(id)cell forIndexPath:(id)indexPath;
-(id)cellForIndexPath:(id)indexPath;
-(id)cellConfigurationForIndex:(int)index item:(id)item;
-(Class)cellConfigurationClassForItem:(id)item;
-(BOOL)canShowItemOfferButtonForItem:(id)item;
-(BOOL)canShowPreviewForItem:(id)item;
-(BOOL)canDoubleTapIndexPath:(id)path;
@end
