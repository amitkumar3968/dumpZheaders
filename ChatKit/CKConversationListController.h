/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "CKConversationSearcherDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UITableView, CKConversationSearcher, UIToolbar, CKConversationList, NSIndexPath, CKMessagesController;

@interface CKConversationListController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, CKConversationSearcherDelegate, UIActionSheetDelegate> {
	UITableView* _table;
	NSIndexPath* _previouslySelectedIndexPath;
	UIToolbar* _buttonBar;
	unsigned _willBeMarkedReadCount;
	int _disableUpdatesCount;
	unsigned _dirty : 1;
	unsigned _isVisible : 1;
	unsigned _willRotate : 1;
	CKMessagesController* _messagesController;
	CKConversationList* _conversationList;
	CKConversationSearcher* _searcher;
	BOOL _isInitialLoad;
}
@property(retain, nonatomic) NSIndexPath* previouslySelectedIndexPath;	// @synthesize=_previouslySelectedIndexPath
@property(assign, nonatomic) CKMessagesController* messagesController;	// @synthesize=_messagesController
@property(assign, nonatomic) CKConversationList* conversationList;	// @synthesize=_conversationList
// declared property setter: -(void)setPreviouslySelectedIndexPath:(id)path;
// declared property getter: -(id)previouslySelectedIndexPath;
// declared property setter: -(void)setMessagesController:(id)controller;
// declared property getter: -(id)messagesController;
// declared property setter: -(void)setConversationList:(id)list;
// declared property getter: -(id)conversationList;
-(void)selectConversationClosestToDeletedIndex:(unsigned)deletedIndex;
-(void)selectDefaultConversationAnimated:(BOOL)animated;
-(void)_selectConversationAtIndex:(unsigned)index animated:(BOOL)animated;
-(unsigned)_indexOfDefaultConversation;
-(unsigned)_indexOfConverationClosestToDeletedIndex:(unsigned)deletedIndex;
-(void)_keyboardWillShowOrHide:(id)_keyboard;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)searcherWillEndSearch:(id)searcher;
-(void)searcherWillBeginSearch:(id)searcher;
-(void)searcher:(id)searcher willHideSearchResultsTableView:(id)view;
-(void)searcher:(id)searcher didShowSearchResultsTableView:(id)view;
-(void)searcher:(id)searcher userDidSelectChatGUID:(id)user messageGUID:(id)guid;
-(id)searcher:(id)searcher conversationForChatGUID:(id)chatGUID;
-(id)searcherContentsController:(id)controller;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)deleteButtonPressedForIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(float)heightForHeaderInTableView:(id)tableView;
-(id)viewForHeaderInTableView:(id)tableView;
-(void)composeButtonClicked:(id)clicked;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)inputAccessoryView;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)applicationWillSuspend;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)loadView;
-(void)scrollToTop;
-(void)hideSearchUI;
-(void)noteConversationListChanged;
-(void)enableConversationListUpdates;
-(void)enableConversationListUpdatesQuietly;
-(void)disableConversationListUpdates;
-(void)updateConversationList;
-(void)reloadStaleConversations;
-(void)significantTimeChange;
-(void)noteUnreadCountsChanged;
-(void)conversationWillBeMarkedRead:(id)conversation;
-(void)updateConversationSelection;
-(void)updateNavigationItems;
-(void)updateTitle;
-(void)_groupsChanged:(id)changed;
-(void)_conversationMessageWasSent:(id)sent;
-(void)_conversationListDidChange:(id)_conversationList;
-(void)_conversationListDidFinishLoadingConversations:(id)_conversationList;
-(void)_conversationDidChange:(id)_conversation;
-(void)_conversationReadItemsDidChange:(id)_conversationReadItems;
-(void)_conversationWasMarkedAsRead:(id)read;
-(void)_chatParticipantsChangedNotification:(id)notification;
-(void)_chatUnreadCountDidChange:(id)_chatUnreadCount;
-(void)accessibilityLargeTextDidChange;
-(void)dealloc;
-(id)init;
@end

