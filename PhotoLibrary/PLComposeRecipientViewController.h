/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UIPopoverControllerDelegate.h"
#import "MFContactsSearchConsumer.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, MFSearchShadowView, NSArray, UITableView, NSNumber, UIScrollView, UIPopoverController, PLComposeRecipientView;
@protocol PLComposeRecipientViewControllerDelegate;

@interface PLComposeRecipientViewController : XXUnknownSuperclass <MFContactsSearchConsumer, UITableViewDelegate, UITableViewDataSource, UIPopoverControllerDelegate> {
	PLComposeRecipientView* _recipientView;
	UIScrollView* _recipientContainerView;
	CGRect _keyboardFrame;
	unsigned _maxExpandRows;
	id<PLComposeRecipientViewControllerDelegate> _delegate;
	MFContactsSearchManager* _searchManager;
	MFContactsSearchResultsModel* _searchResultsModel;
	MFSearchShadowView* _shadowView;
	NSArray* _searchResults;
	NSNumber* _currentSearchTaskID;
	UITableView* _searchResultsTable;
	UIPopoverController* _searchResultsPopoverController;
	UIPopoverController* _peoplePickerPopoverController;
	struct {
		unsigned showingPeoplePicker : 1;
		unsigned showingSearchResultsTable : 1;
		unsigned offsettingForResultsTable : 1;
		unsigned wasFirstResponder : 1;
	} _flags;
@private
	BOOL _drawsLetterpress;
}
@property(assign, nonatomic) unsigned maxExpandRows;	// @synthesize=_maxExpandRows
@property(assign, nonatomic) BOOL drawsLetterpress;	// @synthesize=_drawsLetterpress
@property(readonly, assign, nonatomic) PLComposeRecipientView* recipientView;	// @synthesize=_recipientView
@property(assign, nonatomic) id<PLComposeRecipientViewControllerDelegate> delegate;	// @synthesize=_delegate
+(void)recordRecentEventForAddresses:(id)addresses;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(unsigned)maxExpandRows;
// declared property setter: -(void)setDrawsLetterpress:(BOOL)letterpress;
// declared property getter: -(BOOL)drawsLetterpress;
// declared property getter: -(id)recipientView;
-(BOOL)isRecipientViewFirstResponder;
-(void)makeRecipientViewResignFirstResponder;
-(void)makeRecipientViewFirstResponder;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)composeRecipientViewReturnPressed:(id)pressed;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record identifier:(int)identifier;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(void)composeRecipientView:(id)view showPersonCardForAtom:(id)atom;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(BOOL)composeRecipientViewIsShowingPeoplePicker:(id)picker;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
-(void)endedNetworkActivity;
-(void)beganNetworkActivity;
-(void)finishedTaskWithID:(id)anId;
-(void)finishedSearchingForType:(int)type;
-(void)consumeSearchResults:(id)results type:(int)type taskID:(id)anId;
-(void)_searchForRecipientWithText:(id)text;
-(void)_updateSearchResultsTableVisibility;
-(BOOL)_searchResultsShowInPopover;
-(id)_newShadowView;
-(id)_newSearchResultsTable;
-(void)_setSearchResults:(id)results;
-(id)_searchManager;
-(void)_presentSearchResultsPopover;
-(void)_keyboardSizeDidChange:(id)_keyboardSize;
-(void)_updateViewsLayoutAnimated:(BOOL)animated completion:(id)completion;
-(void*)_addressBook;
-(void)_forceDismissPeoplePickerPopover;
// declared property setter: -(void)setMaxExpandRows:(unsigned)rows;
-(id)recipients;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidUnload;
-(void)loadView;
-(void)didReceiveMemoryWarning;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

