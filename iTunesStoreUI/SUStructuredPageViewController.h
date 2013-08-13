/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "ISURLOperationDelegate.h"
#import "SUItemTableViewController.h"

@class SUStructuredPage, UILabel;

@interface SUStructuredPageViewController : SUItemTableViewController <ISURLOperationDelegate> {
	Class _dataSourceClass;
	UILabel* _noItemsLabel;
	SUStructuredPage* _structuredPage;
}
@property(retain, nonatomic) SUStructuredPage* structuredPage;	// @synthesize=_structuredPage
@property(retain, nonatomic) Class dataSourceClass;	// @synthesize=_dataSourceClass
// declared property getter: -(id)structuredPage;
// declared property getter: -(Class)dataSourceClass;
-(void)_reloadTermsAndConditions;
-(void)_reloadNoItemsLabel;
-(void)_reloadLoadMoreCellAtIndexPath:(id)indexPath;
-(void)_loadMoreWithURL:(id)url;
-(void)_loadMoreOperation:(id)operation finishedWithOutput:(id)output;
-(BOOL)_gotoURLForItem:(id)item withURLIndex:(int)urlindex;
-(BOOL)_handleLoadMoreForIndexPath:(id)indexPath;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)bannerCell:(id)cell tappedButtonAtIndex:(int)index;
// declared property setter: -(void)setStructuredPage:(id)page;
// declared property setter: -(void)setDataSourceClass:(Class)aClass;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(id)storePageProtocol;
-(void)setLoading:(BOOL)loading;
-(void)reloadWithStorePage:(id)storePage forURL:(id)url;
-(void)reloadData;
-(BOOL)loadMoreWithURL:(id)url;
-(BOOL)hasDisplayableContent;
-(BOOL)handleSelectionForIndexPath:(id)indexPath tapCount:(int)count;
-(CGRect)documentBounds;
-(BOOL)canSelectRowAtIndexPath:(id)indexPath;
-(id)newTermsAndConditionsFooter;
-(id)newNoItemsOverlayLabel;
-(id)newDataSource;
-(void)dealloc;
-(id)init;
@end
