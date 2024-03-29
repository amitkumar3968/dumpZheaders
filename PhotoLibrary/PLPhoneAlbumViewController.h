/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLAlbumViewController.h"
#import "PLActivityViewControllerDelegate.h"
#import "PhotoLibrary-Structs.h"
#import "UIActionSheetDelegate.h"
#import "PLSlideshowSettingsViewControllerDelegate.h"
#import "PLPhotosPickerSessionParticipant.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "PLAbstractAlbumPickerViewControllerDelegate.h"

@class NSTimer, UIViewController, UINavigationController, UIBarButtonItem, NSArray, PLAlbumPickerViewController, PLSegmentedControl, PLActivityViewController, NSMutableArray, PLPhotosPickerSession, PLProgressView, PLManagedAsset, PLVideoRemaker, NSDictionary, UIActionSheet, UIAlertView;

@interface PLPhoneAlbumViewController : PLAlbumViewController <MFMailComposeViewControllerDelegate, UIActionSheetDelegate, PLAbstractAlbumPickerViewControllerDelegate, PLActivityViewControllerDelegate, PLPhotosPickerSessionParticipant, PLSlideshowSettingsViewControllerDelegate> {
@private
	PLSegmentedControl* _filterControl;
	UIBarButtonItem* _shareItem;
	UIBarButtonItem* _addToFromItem;
	UIBarButtonItem* _deleteItem;
	UIBarButtonItem* _doneItem;
	NSMutableArray* _shareButtonTitles;
	UINavigationController* _composeNavigationController;
	UIActionSheet* _actionSheet;
	NSArray* _moveSheetActions;
	PLAlbumPickerViewController* _albumPickerController;
	UIAlertView* _createAlbumAlert;
	unsigned _dataInsertionCount;
	unsigned _showPhotosVideosFilter : 1;
	unsigned _remaking : 1;
	unsigned _trimmingForMMS : 1;
	unsigned _didSetPublishCapabilities : 1;
	unsigned _deviceCannotShareVideo : 1;
	unsigned _remakingWasCancelled : 1;
	unsigned _toolbarWasHiddenWhenSelfWasPushed : 1;
	unsigned _forceHideToolbar : 1;
	unsigned _didSetHDVideoUploadCapability : 1;
	unsigned _canUploadHDVideoOver3G : 1;
	unsigned _remakeAfterPublish : 1;
	unsigned _canPlaySlideshow : 1;
	unsigned _ignoreAlbumDidChangeNotification : 1;
	unsigned _hasChangesInEditSession : 1;
	int _selectedImageCount;
	int _selectedVideoCount;
	int _selectedUnknownCount;
	int _selectedPlaceholderCount;
	PLVideoRemaker* _remaker;
	int _remakerMode;
	SEL _completionSelector;
	PLManagedAsset* _currentVideo;
	NSDictionary* _trimDictionary;
	int _previousAlbumFilter;
	NSTimer* _progressUpdateTimer;
	PLProgressView* _progressView;
	PLPhotosPickerSession* _currentPickerSession;
	PLActivityViewController* _activityViewController;
	UIViewController* _slideshowSettingsViewController;
	id _nextViewDidLayoutSubviewsHandler;
	id _activityTarget;
	SEL _activityAction;
	int allowedAlbumViewActions;
}
@property(retain, nonatomic) PLPhotosPickerSession* currentPickerSession;	// @synthesize=_currentPickerSession
@property(retain, nonatomic) UIBarButtonItem* doneItem;
@property(assign) int allowedAlbumViewActions;	// @synthesize
@property(assign) BOOL canPlaySlideshow;
@property(assign, nonatomic) BOOL showPhotosVideosFilter;
// declared property getter: -(id)currentPickerSession;
// declared property setter: -(void)setAllowedAlbumViewActions:(int)actions;
// declared property getter: -(int)allowedAlbumViewActions;
// declared property getter: -(id)doneItem;
// declared property setter: -(void)setDoneItem:(id)item;
-(id)slideshowSettingsViewController:(id)controller slideshowSettingsForAirPlayService:(id)airPlayService;
-(id)slideshowSettingsViewController:(id)controller alternateTransitionLocalizationsForAirPlayService:(id)airPlayService;
-(id)slideshowSettingsViewController:(id)controller transitionKeysForAirPlayService:(id)airPlayService;
-(void)slideshowSettingsViewController:(id)controller didSelectAirPlayService:(id)service;
-(void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)pressed;
-(void)videoRemakerDidEndRemaking:(id)videoRemaker temporaryPath:(id)path;
-(void)_remakerDidFinish:(id)_remaker;
-(void)videoRemakerDidBeginRemaking:(id)videoRemaker;
-(void)_cancelRemaking:(id)remaking;
-(void)_sendViaMMS;
-(void)_sendViaEmail;
-(void)editVideoViewControllerDidCancel:(id)editVideoViewController;
-(void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;
-(void)_transcodeVideo:(id)video usingMode:(int)mode completionSelector:(SEL)selector;
-(BOOL)_showTrimViewControllerIfNeededForVideo:(id)video usingMode:(int)mode;
-(void)_showTrimViewControllerForVideo:(id)video maximumTrimDuration:(double)duration trimButtonTitle:(id)title;
-(void)_showRemakerProgressView:(BOOL)view;
-(void)_publishingAgentsDidForceCancel:(id)_publishingAgents;
-(void)_publishingAgentDidFinishPublishing:(id)_publishingAgent;
-(void)_publishingAgentDidCancel:(id)_publishingAgent;
-(void)_clearPublishingAgentIfCurrent:(id)current;
-(void)_publishingAgentDidEndRemaking:(id)_publishingAgent;
-(void)_publishingAgentDidStartRemaking:(id)_publishingAgent;
-(void)_updateProgressView;
-(id)_currentPublishingAgent;
-(void)_showMMSCompositionForVideo:(id)video startTime:(double)time endTime:(double)time3;
-(void)_showTextMessageComposition:(id)composition;
-(void)_showMailCompositionForVideo:(id)video transcodedVideoPath:(id)path;
-(void)_showMailCompositionForPhotos:(id)photos;
-(void)_fadeOutAnimation:(id)animation finished:(id)finished context:(void*)context;
-(void)_fadeOut;
-(id)editButtonItem;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(id)selectedPhotos;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(void)_dismissActionSheet;
-(void)_presentActionSheet;
-(void)_showCreateAlbumDialogWithPhotos:(id)photos;
-(void)_showAlbumPickerToAddPhotos:(id)addPhotos removeFromCurrentAlbum:(BOOL)currentAlbum;
-(void)_showDeleteConfirmation:(id)confirmation;
-(void)_removeSelectedItems;
-(void)_deleteSelectedItems;
-(void)_saveAssetsToCameraRoll:(id)cameraRoll;
-(void)_showMoveActions:(id)actions;
-(void)_copySelectedItems:(id)items;
-(void)activityViewControllerDidDismiss:(id)activityViewController;
-(void)_displayActivitySheet:(id)sheet;
-(void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(NSObject*)newlyCreatedAlbum;
-(void)_toggleEditing:(id)editing;
-(void)_playSlideshow;
-(void)_endSlideshowSettings;
-(void)_showSlideshowSettings:(id)settings;
-(void)_updateTopRightButtonAnimated:(BOOL)animated;
-(void)_updateActionButtons;
-(id)_actionToolbarItems;
-(id)_defaultToolbarItems;
-(id)_tabBar;
// declared property setter: -(void)setCanPlaySlideshow:(BOOL)slideshow;
// declared property getter: -(BOOL)canPlaySlideshow;
-(BOOL)_shouldShowActionButton;
-(void)_updateToolbarVisibilityAnimated:(BOOL)animated updateItems:(BOOL)items;
-(void)_mailAccountsDidChange:(id)_mailAccounts;
-(void)libraryDidChange:(id)library;
-(void)albumDidChange:(id)album;
-(void)paste:(id)paste;
-(void)copy:(id)copy;
-(void)_filterWasToggled:(id)toggled;
-(BOOL)_isPerformingModalTransitionFromCamera;
-(BOOL)_allowSavingToCameraRoll;
-(int)_allowedDeleteOperation;
-(BOOL)_canAddToAssets;
-(BOOL)_canAddAssets;
-(BOOL)_isCameraAlbum;
-(BOOL)_shouldApplyRecentsFilterInitially;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(BOOL)prepareForDismissingAnimated:(BOOL)dismissingAnimated;
-(void)_restoreAlbumViewSelectionFromPickerSession;
// declared property setter: -(void)setCurrentPickerSession:(id)session;
-(void)actionSheet:(id)sheet willDismissWithButtonIndex:(int)buttonIndex;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(BOOL)albumPickerController:(id)controller shouldEnableAlbum:(id)album;
-(BOOL)_canEmailMedia;
-(BOOL)_canUploadHDVideo;
-(void)albumView:(id)view didTapPhotoAtIndexPath:(id)indexPath;
-(void)albumViewSelectionDidChange:(id)albumViewSelection added:(id)added removed:(id)removed;
-(BOOL)albumView:(id)view canSelectPhotoAtIndexPath:(id)indexPath;
-(void)albumViewPhotoMoveDidComplete:(id)albumViewPhotoMove;
-(void)albumView:(id)view movePhotoAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(void)smsComposeControllerSendStarted:(id)started;
-(void)smsComposeControllerCancelled:(id)cancelled;
-(void)smsComposeControllerAppeared:(id)appeared;
-(void)smsComposeControllerDataInserted:(id)inserted;
-(void)performBlockAfterNextViewDidLayoutSubviews:(id)performBlockAfterNextView;
-(void)scrollToRevealPhoto:(id)revealPhoto animated:(BOOL)animated;
-(void)pushPhotoScrollerViewControllerForPhoto:(id)photo toComment:(id)comment animated:(BOOL)animated;
-(void)pushPhotoScrollerViewControllerForPhoto:(id)photo animated:(BOOL)animated;
-(void)pushPhotoScrollerViewControllerForPhoto:(id)photo animated:(BOOL)animated delayImageLoading:(BOOL)loading;
-(void)pushPhotoScrollerViewControllerForPhoto:(id)photo toComment:(id)comment animated:(BOOL)animated delayImageLoading:(BOOL)loading;
-(void)setCurrentFilter:(int)filter;
// declared property getter: -(BOOL)showPhotosVideosFilter;
// declared property setter: -(void)setShowPhotosVideosFilter:(BOOL)filter;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)_suppresionContexts;
-(BOOL)_appAllowsSupressionOfAlerts;
-(void)applicationWillEnterForeground:(id)application;
-(void)setShowingEmptyAlbumView:(BOOL)view;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)_loadConfiguration:(id)configuration;
-(void)_saveConfiguration:(id)configuration;
-(void)prepareForDefaultImageSnapshot;
-(void)dealloc;
-(id)initWithAlbum:(NSObject*)album;
@end

