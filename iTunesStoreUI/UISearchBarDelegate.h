/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "NSObject.h"


@protocol UISearchBarDelegate <NSObject>
@optional
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
@end

