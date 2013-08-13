/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "UIAlertViewDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CKBalloonViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIModalViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABPersonViewControllerDelegate.h"
#import "ABUnknownPersonViewControllerDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "CKTranscriptButtonViewDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "AFContextProvider.h"
#import "UIKeyInput.h"
#import "QLPreviewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, CKTimedQueue, CKTypingIndicatorView, CKMessageEntryView, CKBalloonView, CKEffectsWindow, CKTranscriptTableView, CKMessageComposition, CKTranscriptHeaderView, CKRecipientSelectionView, CKLinksController, CKTranscriptBubbleData, CKQLPreviewController, CKTranscriptStatusController, CKMultiDict, UIView, UIImageView, CKRecipientGenerator, CKRecipientListView, UITapGestureRecognizer, EKICSPreviewController, UINavigationController, UINavigationItem, CKMessageEncodingInfo, UIBarButtonItem, NSMutableArray, NSMutableSet, UIWindow, NSDictionary, NSString, ABPeoplePickerNavigationController, UIToolbar, NSNotification, CKTranscriptToolbarView, UIImagePickerController, CKConversation, UIPopoverController, NSObject, NSArray;
@protocol OS_dispatch_group, CKTranscriptComposeDelegate, CKMessage;

@interface CKTranscriptController : XXUnknownSuperclass <UIAlertViewDelegate, ABPeoplePickerNavigationControllerDelegate, CKBalloonViewDelegate, UIActionSheetDelegate, UIModalViewDelegate, UITableViewDataSource, UITableViewDelegate, ABPersonViewControllerDelegate, ABUnknownPersonViewControllerDelegate, ABNewPersonViewControllerDelegate, CKTranscriptButtonViewDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate> {
@private
	EKICSPreviewController* _icsPreviewController;
	CKConversation* _conversation;
	UINavigationController* _navigationController;
	UINavigationItem* _navItem;
	CKTranscriptStatusController* _statusBar;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _clearAllItem;
	CKTranscriptToolbarView* _transcriptToolbarView;
	CKTranscriptHeaderView* _transcriptHeaderView;
	UIView* _backPlacard;
	UIImageView* _transcriptTopShadow;
	UIImageView* _transcriptLeftShadow;
	CKTranscriptTableView* _transcriptTable;
	CKRecipientListView* _recipientListView;
	CKRecipientSelectionView* _recipientSelectionView;
	CKMessageEntryView* _entryView;
	CKBalloonView* _balloonToRestoreAfterRotation;
	CKTranscriptBubbleData* _bubbleInfo;
	id<CKMessage> _lastMessage;
	id<CKTranscriptComposeDelegate> _composeDelegate;
	NSMutableArray* _outboundMessageLayers;
	CKTypingIndicatorView* _typingIndicatorForSendAnimation;
	NSMutableSet* _hiddenIndexPaths;
	id _scrollBlock;
	NSMutableArray* _presetMessageParts;
	NSArray* _newCompositionAddresses;
	NSString* _serviceAvailabilityKey;
	CKMessageComposition* _newComposition;
	CKMessageEncodingInfo* _textMessageEncodingInfo;
	int _storedStatusBarStyle;
	int _setupState;
	BOOL _dimmed;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	id _alertViewHandler;
	UIWindow* _autorotateDisabledWindow;
	unsigned _locked : 1;
	unsigned _visible : 1;
	unsigned _viewNeedsSetup : 1;
	unsigned _newRecipient : 1;
	unsigned _sending : 1;
	unsigned _recipientListShouldBeExpanded : 1;
	unsigned _transitioningToTranscript : 1;
	unsigned _entryViewCanAcceptFocus : 1;
	unsigned _isAnimatingMessageSend : 1;
	unsigned _entryViewWasActiveBeforeEdit : 1;
	unsigned _entryViewWasActiveBeforePushingViewController : 1;
	unsigned _entryViewWasActiveBeforeSwitchingConversations : 1;
	unsigned _recipientSelectionViewWasActiveBeforePushingViewController : 1;
	unsigned _showingRecipientSelectionResults : 1;
	unsigned _automaticKeyboardWasDisabled : 1;
	unsigned _togglingEditing : 1;
	unsigned _keyboardUndocked : 1;
	unsigned _suspendScrollDueToMediaViewing : 1;
	unsigned _triedToResetEntryViewSizeWhileNotInAWindow : 1;
	unsigned _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
	unsigned _preparingForResume : 1;
	unsigned _appeared : 1;
	unsigned _appearing : 1;
	unsigned _settingConversation : 1;
	unsigned _needsTransitionToFullTranscript : 1;
	unsigned _heldUpdateCount;
	unsigned _transcriptNeedsUpdate;
	unsigned _storedStatusBarIsHidden : 1;
	CKRecipientGenerator* _recipientGenerator;
	NSDictionary* _abPropertiesCache;
	ABPeoplePickerNavigationController* _peoplePickerController;
	CKLinksController* _linkViewController;
	UIToolbar* _actionsToolbar;
	BOOL _canSafelyDismissImagePicker;
	UIEdgeInsets _transcriptAreaInsets;
	float _transcriptTableBottomOffset;
	CGRect _keyboardScreenFrame;
	CGRect _keyboardScreenFrameWithoutAccessoryView;
	NSNotification* _keyboardNotification;
	BOOL _showingKeyboard;
	BOOL _hidingKeyboard;
	BOOL _pushingKeyboard;
	BOOL _animatingKeyboardDueToPush;
	BOOL _kpgPinnedToBottomOfTranscript;
	CGAffineTransform _kpgStartingTransform;
	CGAffineTransform _kpgCurrentTransform;
	float _kpgAnchorY;
	int _pendingInterfaceOrientation;
	BOOL _inRotation;
	BOOL _willRotateView;
	BOOL _shouldAdjustTranscriptOffsetForRotation;
	CKTimedQueue* _statusQueue;
	CKEffectsWindow* _effectsWindow;
	BOOL _scrollToBottomWhenScrollViewBeginsDecelerating;
	BOOL _didCancel;
	NSString* _initialSystemKeyboardID;
	UIImagePickerController* _mediaController;
	UIPopoverController* _mediaPopoverController;
	CKQLPreviewController* _previewController;
	CKMultiDict* _holdingUpdatesKeyStack;
	BOOL _safeToMarkAsRead;
	NSObject<OS_dispatch_group>* _transcriptTransactionGroup;
}
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;
@property(assign, nonatomic) int returnKeyType;
@property(assign, nonatomic) int keyboardAppearance;
@property(assign, nonatomic) int keyboardType;
@property(assign, nonatomic) int spellCheckingType;
@property(assign, nonatomic) int autocorrectionType;
@property(assign, nonatomic) int autocapitalizationType;
@property(assign, nonatomic) BOOL safeToMarkAsRead;	// @synthesize=_safeToMarkAsRead
@property(readonly, assign, nonatomic) CKRecipientSelectionView* recipientSelectionView;	// @synthesize=_recipientSelectionView
@property(copy, nonatomic) NSArray* newCompositionAddresses;	// @synthesize=_newCompositionAddresses
@property(copy, nonatomic) id alertHandler;	// @synthesize=_alertViewHandler
@property(copy, nonatomic) id scrollBlock;	// @synthesize=_scrollBlock
@property(assign, nonatomic, getter=isDimmed) BOOL dimmed;	// @synthesize=_dimmed
@property(retain, nonatomic) NSMutableArray* presetMessageParts;	// @synthesize=_presetMessageParts
@property(assign, nonatomic) NSNumber* canSafelyDismissImagePicker;
@property(assign, nonatomic) id<CKTranscriptComposeDelegate> composeDelegate;	// @synthesize=_composeDelegate
@property(retain) id composition;	// converted property
@property(retain) CKConversation* conversation;	// converted property
@property(readonly, retain) UIBarButtonItem* clearAllItem;	// converted property
@property(readonly, retain) CKTranscriptTableView* transcriptTable;	// converted property
@property(readonly, retain) CKMessageEntryView* entryView;	// converted property
@property(readonly, retain) CKEffectsWindow* effectsWindow;	// converted property
+(id)tableColor;
+(void)_sendDidFinishSavingImageNotificationWithImage:(id)_send error:(id)error context:(void*)context;
+(void)_sendDidFinishSavingVideoNotificationWithPath:(id)_send error:(id)error context:(void*)context;
+(void)_sendDidStartSavingMediaNotification;
// declared property getter: -(BOOL)safeToMarkAsRead;
// declared property getter: -(id)recipientSelectionView;
// declared property setter: -(void)setNewCompositionAddresses:(id)addresses;
// declared property getter: -(id)newCompositionAddresses;
// declared property setter: -(void)setAlertHandler:(id)handler;
// declared property getter: -(id)alertHandler;
// declared property setter: -(void)setScrollBlock:(id)block;
// declared property getter: -(id)scrollBlock;
// declared property getter: -(BOOL)isDimmed;
// declared property setter: -(void)setPresetMessageParts:(id)parts;
// declared property getter: -(id)presetMessageParts;
// declared property setter: -(void)setComposeDelegate:(id)delegate;
// declared property getter: -(id)composeDelegate;
-(BOOL)_shouldUseExistingConversations;
-(void)_handleMessageRemovedNotification:(id)notification;
-(void)_conversationDidChangeNotification:(id)_conversation;
-(void)showPopover:(id)popover withPresenter:(id)presenter withHandler:(id)handler;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)_resizeEffectsWindowForMessageThrow;
-(void)_hideEffectsWindowForMessageThrow:(BOOL)messageThrow;
-(id)_contactImageForMessage:(id)message;
-(void)_handleSendAsSMSSettingChanged:(id)changed;
// declared property setter: -(void)setCanSafelyDismissImagePicker:(id)picker;
// declared property getter: -(id)canSafelyDismissImagePicker;
-(float)_maximumContentOffset;
-(CGPoint)_offsetForRow:(int)row withInternalOffset:(float)internalOffset;
-(void)_calculateTopVisibleRow:(int*)row andOffset:(float*)offset forTransitionToEditing:(BOOL)editing;
-(void)_resetTranscriptInsets;
-(float)_bottomInset;
-(float)_heightOfTopTranscriptArea;
-(float)_heightOfSpaceAboveKeyboard:(CGRect)spaceAboveKeyboard undocked:(BOOL)undocked;
-(void)_cancelKeyboardPushGesture:(id)gesture;
-(void)_setupKeyboardPushGesture;
-(void)_handleKeyboardPushGesture:(id)gesture inNavigationBar:(BOOL)navigationBar;
-(void)_handleKeyboardPushGesture:(id)gesture forNavigationController:(id)navigationController;
-(void)_adjustCustomTitleViewFrame:(int)frame;
-(void)_refreshStatusBar;
-(id)_statusBar;
-(void)_requeryIDStatuses;
-(void)_updateRecipientListView:(BOOL)view;
-(void)_hideRecipientListView;
-(void)_showRecipientListView;
-(id)_overlayView;
-(float)_overlayViewMinHeight;
-(float)_maxHeightForOverlayView:(id)overlayView entryViewResize:(int)resize;
-(BOOL)isEditable;
-(void)deleteBackward;
-(void)insertText:(id)text;
-(BOOL)hasText;
-(id)defaultFirstResponder;
-(id)inputAccessoryView;
-(id)_entryView;
-(float)_accessoryViewHeight;
-(BOOL)canBecomeFirstResponder;
-(void)_reflowMessageContent;
-(void)_updateFirstResponder;
-(void)showKeyboardForReply;
-(void)_updatePhotoButtonEnabled;
-(void)_resetEntryViewSize;
-(CGSize)_idealSizeForEntryView:(CGSize)entryView;
-(void)_restoreEntryViewCursor;
-(id)_fieldForFocus;
-(void)_makeFieldForFocusActive;
-(void)_makeRecipientEntryViewActive;
-(void)_makeContentEntryViewActive;
-(void)_updateActionsToolbarItemsForRotation:(int)rotation;
-(void)_updateActionsToolbarItems;
-(id)_actionsToolbar;
-(void)_setVisible:(BOOL)visible;
-(BOOL)_isVisible;
-(id)_recipientGenerator;
-(BOOL)shouldDismissAfterSend;
-(void)_shrinkRecipientList;
-(BOOL)_isGroupMessage;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(id)getCurrentContext;
-(BOOL)allowContextProvider:(id)provider;
-(void)transcriptStatusBar:(id)bar showNavBarCustomView:(id)view;
-(void)transcriptStatusBar:(id)bar showNavBarTitle:(id)title;
-(id)recipientSelectionView:(id)view recipientsForText:(id)text;
-(id)recipientSelectionView:(id)view recipientForRecord:(void*)record property:(int)property identifier:(int)identifier;
-(id)recipientSelectionView:(id)view recipientForAddress:(id)address;
-(void)recipientSelectionViewFinishedWithPeoplePicker:(id)peoplePicker;
-(void)recipientSelectionView:(id)view showPeoplePickerWithDelegate:(id)delegate;
-(void)recipientSelectionViewRecipientListChanged:(id)changed;
-(void)recipientSelectionViewReturnPressed:(id)pressed;
-(void)recipientSelectionView:(id)view isShowingSearchResults:(BOOL)results;
-(BOOL)recipientSelectionView:(id)view isValidAddress:(id)address;
-(void)recipientSelectionView:(id)view contentSizeChanged:(CGSize)changed;
-(void)recipientListView:(id)view contentSizeDidChange:(CGSize)contentSize;
-(void)recipientListView:(id)view addressAtomClicked:(id)clicked;
-(void)linksController:(id)controller showABCardForLinkProperties:(id)linkProperties;
-(void)balloonDidFinishDataDetectorAction:(id)balloon;
-(void)balloonWillResignFirstResponder:(id)balloon;
-(void)restoreBalloonStateAfterRotation:(id)rotation;
-(CGRect)clippedTargetRectForBalloon:(id)balloon;
// converted property getter: -(id)transcriptTable;
-(void)_setEntryViewVisible:(BOOL)visible;
-(id)navigationItem;
-(void)showAddToExistingContactViewForEntity:(id)entity;
-(void)showNewContactViewForEntity:(id)entity;
-(void*)_newPersonWithValue:(CFStringRef)value forMultiValueProperty:(int)multiValueProperty;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)dismissPeoplePicker;
-(void)_restoreSelectionViewIfNecessary;
-(void)dismissPeoplePicker:(id)picker;
-(void)peoplePickerNavigationController:(id)controller insertEditorDidConfirm:(BOOL)insertEditor forPerson:(void*)person;
-(BOOL)peoplePickerNavigationController:(id)controller shouldShowInsertEditorForPerson:(void*)person insertProperty:(int*)property copyInsertValue:(id*)value copyInsertLabel:(id*)label;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)showURLsForText:(id)text;
-(void)showABCardForLinkProperties:(id)linkProperties;
-(id)_personViewControllerForProps:(id)props;
-(id)_unknownPersonViewControllerForProps:(id)props;
-(void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void*)newPerson;
-(void)unknownPersonViewController:(id)controller didResolveToPerson:(void*)person;
-(BOOL)unknownPersonViewController:(id)controller shouldPresentMessageCompositionWithVCard:(id)vcard filename:(id)filename;
-(BOOL)personViewController:(id)controller shouldPresentMessageCompositionWithVCard:(id)vcard filename:(id)filename;
-(BOOL)sharedShouldPresentMessageCompositionWithVCard:(id)shared filename:(id)filename;
-(BOOL)personViewController:(id)controller shouldPerformDefaultActionForPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)showABCardForPerson:(void*)person highlightedProperty:(int)property identifier:(int)identifier;
-(void)_displayABPersonViewController:(id)controller;
-(id)_abPersonViewControllerForPerson:(void*)person property:(int)property withIdentifier:(int)identifier;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(BOOL)_editableAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_actuallyClearCurrentMessageThread;
-(void)_resendMessageAtIndexPath:(id)indexPath;
-(void)_downgradeMessageAtIndexPath:(id)indexPath;
-(void)_downgradeMessage:(id)message validateSend:(BOOL)send;
-(void)transcriptButtonView:(id)view buttonClicked:(short)clicked;
-(BOOL)isNewRecipient;
-(void)setupForNewRecipient;
-(void)_refreshViewForNewRecipientIfNeeded;
-(void)_setupNewComposition;
-(void)setNewComposition:(id)composition addresses:(id)addresses;
-(id)unatomizedRecipientText;
-(id)proposedRecipients;
-(id)recipients;
// converted property setter: -(void)setComposition:(id)composition;
-(void)setMessageParts:(id)parts;
-(void)clearComposition;
// converted property getter: -(id)composition;
-(BOOL)_resizeMessageEntryView:(id)view contentSize:(CGSize)size animate:(BOOL)animate;
-(BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)animate;
-(BOOL)messageEntryView:(id)view contentSizeChanged:(CGSize)changed animate:(BOOL)animate;
-(BOOL)getContainerWidth:(float*)width offset:(float*)offset;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)disabled;
-(void)messageEntryViewSendButtonHit:(id)hit;
-(BOOL)entryField:(id)field shouldInsertMediaObject:(id)object;
-(BOOL)entryField:(id)field shouldChangeContentTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)entryField:(id)field shouldChangeSubjectTextInRange:(NSRange)range replacementText:(id)text;
-(void)entryFieldSubjectChanged:(id)changed;
-(void)entryFieldContentChanged:(id)changed;
-(void)entryFieldWillDeactivate:(id)entryField;
-(BOOL)entryFieldShouldBecomeActive:(id)entryField;
-(void)entryFieldDidBecomeActive:(id)entryField;
-(void)_characterCountUISettingDidChangeNotification:(id)_characterCountUISetting;
-(void)_updateCharacterCount;
-(void)_updateCharacterCountReplacingCharactersInRange:(NSRange)range replacementText:(id)text;
-(BOOL)_isSMSDeliverableComposition:(id)composition forConversationWithRecipientCount:(unsigned)recipientCount recipientsRequired:(BOOL)required;
-(unsigned)countOfRecipientsIfSendingMessageNow;
-(void)send:(id)send;
-(void)_startCreatingNewMessageForSending:(id)sending;
-(void)scrollToMessageWithGUID:(id)guid;
-(void)messageCellTappedSendAsSMS:(id)sms;
-(id)messageCellSendAsSMSText:(id)text;
-(void)messageCellTappedFailureButton:(id)button;
-(void)messageCellTappedBalloon:(id)balloon;
-(id)_messageForMessageCell:(id)messageCell;
-(BOOL)_shouldShowSendAsSMSForMessage:(id)message;
-(void)sendMessage:(id)message;
-(void)clearCurrentMessageThread;
-(BOOL)_isHoldingUpdatesToTranscript;
-(void)refreshTranscriptWithAnimation:(BOOL)animation;
-(void)refreshTranscriptIfNeededWithAnimation:(BOOL)animation;
-(void)resetHoldingUpdates;
-(void)_endHoldingUpdatesToTranscriptWithKey:(id)key;
-(void)_beginHoldingUpdatesToTranscriptWithKey:(id)key;
-(void)_cancelMessageSendAnimation;
-(void)_finishSendAnimation;
-(void)_throwOutboundMessageToTable;
-(void)startSendAnimationForMessage:(id)message;
-(float)_topPaddingForRow:(int)row forEditing:(BOOL)editing;
-(BOOL)_contactPhotoIsTallerThanMessageAtIndex:(int)index;
-(float)_heightOfContactPhotoForMessageAtIndex:(int)index;
-(float)_bottomPaddingForBubbleRow:(int)bubbleRow;
-(float)_topPaddingForBubbleRow:(int)bubbleRow;
-(void)transitionFromNewMessageToConversation;
-(void)_endTransitioningToTranscript;
-(void)_beginTransitioningToTranscript;
-(CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(float)heightDelta;
-(void)accessibilityLargeTextDidChange;
-(int)numberOfRows;
-(void)_setMessagesHiddenForRows:(id)rows;
-(id)appendMessageToBubbleData:(id)bubbleData;
-(BOOL)_computeBubbleData:(BOOL)data;
-(void)_unloadBubbleData;
-(id)bubbleData;
-(void)_hideTranscriptHeaderView;
-(void)_faceTimeAvailabilityChange:(id)change;
-(void)_showTranscriptHeaderView;
-(void)_updateTranscriptHeaderView;
-(void)_clearExpandRecipientListFlag;
-(void)_setupTranscriptHeader;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)clearButtonClicked:(id)clicked;
-(void)actionButtonClicked:(id)clicked;
-(void)_forwardSelectedMessages:(id)messages;
-(void)_deleteMessagesAtIndexPaths:(id)indexPaths;
-(void)_deleteSelectedMessages:(id)messages;
-(void)dismissViewControllerWithTransition:(int)transition completion:(id)completion;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(CGPoint)tableView:(id)view newContentOffsetAfterUpdate:(CGPoint)update context:(id)context;
-(void)cancelButtonClicked:(id)clicked;
-(void)updateNavigationButtons;
// converted property getter: -(id)clearAllItem;
-(void)updateActionItem;
// declared property setter: -(void)setDimmed:(BOOL)dimmed;
-(void)updateTitle;
// converted property getter: -(id)effectsWindow;
-(void)moveCursorToEnd;
-(void)addPresetMessagePart:(id)part;
-(void)_setupViewForConversation;
// converted property getter: -(id)entryView;
-(BOOL)isSendingMessage;
-(void)_setEntryViewSize:(CGSize)size animate:(BOOL)animate animationLength:(float)length;
-(void)updateEntryView;
-(void)_setupRecipientSelectionView;
// converted property getter: -(id)conversation;
-(void)_markBubbleDataDirty;
-(void)_reloadTranscriptLayer;
-(void)_reloadTranscriptLayerForcingBubbleDataReload:(BOOL)reload;
// converted property setter: -(void)setConversation:(id)conversation;
-(void)_removeRecipientSelectionView;
-(void)_setConversation:(id)conversation;
-(void)_refreshViewForCurrentConversationIfNeeded;
-(void)scrollBubbleIndexToVisible:(int)visible;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(int)index;
-(void)_receivedConversationPreferredServiceChangedNotification:(id)notification;
-(void)_extendedPreviewCreated:(id)created;
-(void)_attachmentRestored:(id)restored;
-(void)_conversationDidEndBatchUpdates:(id)_conversation;
-(void)_conversationDidBeginBatchUpdates:(id)_conversation;
-(void)timedQueueFired:(id)fired;
-(void)scrollViewWillBeginDecelerating:(id)scrollView;
-(void)_dequeueStatusActions;
-(void)_processRemovedIndices:(id)indices insertedIndices:(id)indices2 reloadedIndices:(id)indices3;
-(void)_queueStatusAction:(int)action message:(id)message conversation:(id)conversation delay:(double)delay;
-(void)_handleMessagePartsUpdated:(id)updated;
-(void)_receivedMessageTypingNotification:(id)notification;
-(void)_receivedMessageContentChangedNotification:(id)notification;
-(void)_receivedMessageSentNotification:(id)notification;
-(void)_receivedMessageReadNotification:(id)notification;
-(void)_receivedMessageErrorNotification:(id)notification;
-(void)_receivedMessageDeliveredNotification:(id)notification;
-(void)_messageReceived:(id)received;
-(BOOL)_messageIsForCurrentConversation:(id)currentConversation;
-(void)_handleAddressBookChangedNotification:(id)notification;
-(void)_localeChanged:(id)changed;
-(void)_chatUnreadCountDidChange:(id)_chatUnreadCount;
-(void)systemApplicationWillEnterForeground;
-(void)parentControllerDidResume:(BOOL)parentController animating:(BOOL)animating;
-(void)prepareForResume;
-(void)didReceiveMemoryWarning;
-(void)prepareForSuspend;
-(void)_performResume:(BOOL)resume;
-(void)_changedStatusBarFrame:(id)frame;
-(void)_screenUnlocked:(id)unlocked;
-(void)_screenLocked:(id)locked;
-(void)parentControllerDidBecomeActive;
-(void)_applicationBecameActive:(id)active;
-(void)registerForNotifications;
-(void)registerForSharedNotifications;
-(void)_markMessagesAsReadIfNecessary;
-(void)_updateBackPlacardSubviews;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(id)rotatingFooterView;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_reflowTranscriptCells;
-(void)_entryViewWillRotate:(id)_entryView;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;
-(void)_saveDraftState;
-(void)applicationDidEndResumeAnimation;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)_canReloadView;
-(void)viewDidUnload;
-(void)viewWillUnload;
-(void)loadView;
-(void)dealloc;
-(void)performDelayedAFContextManagerInitialization;
-(id)initWithNavigationController:(id)navigationController;
-(id)init;
// declared property setter: -(void)setSafeToMarkAsRead:(BOOL)markAsRead;
-(id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect*)rect;
-(CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id*)sourceView;
-(void)previewControllerDidDismiss:(id)previewController;
-(void)previewControllerWillDismiss:(id)previewController;
-(void)previewControllerDidAppear:(id)previewController;
-(void)previewControllerWillAppear:(id)previewController;
-(void)_showCurrentPreviewItemForPreviewController:(id)previewController;
-(void)_hideCurrentPreviewItemForPreviewController:(id)previewController;
-(BOOL)previewController:(id)controller shouldOpenURL:(id)url forPreviewItem:(id)previewItem;
-(id)_supportedMediaTypesForPhotoPicker;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)_showVCalViewerForRow:(int)row;
-(void)_showVCardViewerForRow:(int)row;
-(void)_showPassbookCardViewForRow:(int)row;
-(void)_showMediaForTranscriptStartingAtRow:(int)row;
-(BOOL)_displayPreviewItemForRow:(int)row;
-(void)updateQLPreviewControllerIfVisible;
-(id)previewItemsForRow:(int)row currentItemIndex:(int*)index containsRestoring:(BOOL*)restoring;
-(void)video:(id)video didFinishSavingWithError:(id)error contextInfo:(void*)info;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)hideMediaPickerAnimated:(BOOL)animated;
-(void)showMediaPicker:(id)picker animated:(BOOL)animated;
-(void)_addPart:(id)part;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)_userDidCaptureImage;
-(void)_userDidCancelCapturingImage;
-(void)_showPhotoPickerWithSourceType:(int)sourceType;
-(void)_showMediaSourceSelectionSheet;
-(void)addMedia:(id)media;
-(BOOL)_shouldAllowCameraAttachments;
-(void)_setupMediaEntry;
-(void)_entryDebugShowEntryHUD;
-(void)entryDebugSliderChange:(id)change;
-(void)entryDebugClear;
-(CGRect)_keyboardScreenFrame:(CGRect)frame withoutAccessoryViewOfHeight:(float)height orientation:(int)orientation;
-(float)_heightOfKeyboard;
-(float)_heightOfKeyboardScreenFrame:(CGRect)keyboardScreenFrame;
-(float)_heightOfKeyboardScreenFrame:(CGRect)keyboardScreenFrame orientation:(int)orientation;
-(float)_distanceFromBottomOfScreenToTopEdgeOfKeyboard;
-(float)_distanceFromBottomOfScreenToTopEdgeOfKeyboardScreenFrame:(CGRect)keyboardScreenFrame orientation:(int)orientation;
-(CGRect)_keyboardFrame;
-(CGRect)_keyboardFrameForKeyboardScreenFrame:(CGRect)keyboardScreenFrame;
-(BOOL)_keyboardIsUndocked;
-(BOOL)_keyboardIsOnScreen;
-(BOOL)_keyboardScreenFrameIsOnScreen:(CGRect)screen;
-(void)_keyboardDidChangeFrame:(id)_keyboard;
-(void)_keyboardLayoutDidChange:(id)_keyboardLayout;
-(void)_keyboardDidShowOrHide:(id)_keyboard;
-(void)_keyboardWillShowOrHide:(id)_keyboard;
-(void)rememberConversationKeyboard;
-(void)setConversationKeyboard;
-(id)_remoteLogDumpButtonTitle;
-(id)_localLogDumpButtonTitle;
-(void)_performRemoteLogDump;
-(void)_performLocalLogDump;
-(void)__handleLoggingTapped:(id)tapped;
-(void)_showLoggingAlertIfNecessary;
-(void)_tearDownLoggingTapGestureRecognizer;
-(void)_setupLoggingTapGestureRecognizer;
-(BOOL)_shouldShowInternalUILogging;
-(BOOL)_shouldShowUILogging;
@end

