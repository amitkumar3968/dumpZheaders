/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UISearchBar, CKSpotlightQuery, NSArray, UISearchDisplayController;
@protocol CKConversationSearcherDelegate;

@interface CKConversationSearcher : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate> {
	id<CKConversationSearcherDelegate> _delegate;
	NSArray* _sortedSearchResults;
	UISearchDisplayController* _searchController;
	UISearchBar* _searchBar;
	CKSpotlightQuery* _currentQuery;
	BOOL _shouldDisplayNoResults;
	BOOL _active;
	BOOL _showingSearchResults;
}
@property(readonly, assign, nonatomic, getter=isShowingSearchResults) BOOL showingSearchResults;	// @synthesize=_showingSearchResults
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// @synthesize=_active
@property(readonly, assign, nonatomic) UISearchDisplayController* searchController;
@property(readonly, retain) UISearchBar* searchBar;	// converted property
// declared property getter: -(BOOL)isShowingSearchResults;
// declared property getter: -(BOOL)isActive;
// converted property getter: -(id)searchBar;
// declared property getter: -(id)searchController;
-(void)setDelegate:(id)delegate;
-(BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
-(void)searchDisplayController:(id)controller didHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
-(void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
-(void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_cancel;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

