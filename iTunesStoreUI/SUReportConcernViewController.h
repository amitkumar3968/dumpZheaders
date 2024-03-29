/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUTableViewController.h"
#import "iTunesStoreUI-Structs.h"


@interface SUReportConcernViewController : SUTableViewController {
@private
	BOOL _animatingKeyboard;
	unsigned long long _itemIdentifier;
	UIEdgeInsets _originalTableInsets;
}
@property(readonly, assign, nonatomic) unsigned long long itemIdentifier;	// @synthesize=_itemIdentifier
// declared property getter: -(unsigned long long)itemIdentifier;
-(void)_fetchConcerns;
-(void)_submit:(id)submit;
-(void)_cancel:(id)cancel;
-(void)_showKeyboardDidStop:(id)_showKeyboard finished:(id)finished context:(void*)context;
-(void)_hideKeyboardDidStop:(id)_hideKeyboard finished:(id)finished context:(void*)context;
-(void)operation:(id)operation finishedWithOutput:(id)output;
-(void)operation:(id)operation failedWithError:(id)error;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(void)keyboardWillShowWithInfo:(id)keyboard;
-(void)keyboardWillHideWithInfo:(id)keyboard;
-(BOOL)handleSelectionForIndexPath:(id)indexPath tapCount:(int)count;
-(id)initWithItemIdentifier:(unsigned long long)itemIdentifier;
@end

