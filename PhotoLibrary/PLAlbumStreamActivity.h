/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLCloudSharedCreateAlbumViewControllerDelegate.h"
#import "PLAbstractAlbumPickerViewControllerDelegate.h"
#import "PhotoLibrary-Structs.h"
#import "PLActivity.h"

@class UIViewController, NSObject, PLCloudSharedCreateAlbumViewController, PLModalDimmingViewController;
@protocol PLUserEditableAssetContainer, PLAlbumStreamActivityDelegate;

@interface PLAlbumStreamActivity : PLActivity <PLCloudSharedCreateAlbumViewControllerDelegate, PLAbstractAlbumPickerViewControllerDelegate> {
@private
	PLModalDimmingViewController* _modalDimmingViewController;
	PLCloudSharedCreateAlbumViewController* _createAlbumViewController;
	UIViewController* _referenceViewController;
	id<PLAlbumStreamActivityDelegate> _delegate;
	NSObject<PLUserEditableAssetContainer>* _destinationStreamingAlbum;
	BOOL _destinationAlbumWasCreated;
}
@property(assign, nonatomic) id<PLAlbumStreamActivityDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) UIViewController* referenceViewController;	// @synthesize=_referenceViewController
@property(readonly, assign) BOOL destinationAlbumWasCreated;	// @synthesize=_destinationAlbumWasCreated
@property(retain, nonatomic) NSObject<PLUserEditableAssetContainer>* destinationStreamingAlbum;	// @synthesize=_destinationStreamingAlbum
// declared property getter: -(BOOL)destinationAlbumWasCreated;
// declared property setter: -(void)setDestinationStreamingAlbum:(id)album;
// declared property getter: -(id)destinationStreamingAlbum;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setReferenceViewController:(id)controller;
// declared property getter: -(id)referenceViewController;
-(BOOL)albumPickerController:(id)controller shouldEnableAlbum:(id)album;
-(void)albumStreamingCreateViewController:(id)controller didSucceed:(BOOL)succeed;
-(void)_createStreamsPickerContainer;
-(void)_switchToPostCommentController;
-(void)_publishAssets:(id)assets toAlbum:(id)album orCreateWithName:(id)name comment:(id)comment invitationRecipients:(id)recipients wantsPublicWebsite:(BOOL)website completion:(id)completion;
-(void)_createNewStreamContainer;
-(BOOL)_presentActivityOnViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)_handleCompletionWithStatus:(int)status animated:(BOOL)animated;
-(BOOL)_sharedAlbumAllowsAdding:(NSObject*)adding;
-(void)_restoreOriginalStatusBar;
-(int)_preferredStatusBarStyle;
-(void)cancelAlbumStreamActivityAnimated:(BOOL)animated;
-(void)presentActivityOnViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(id)activityViewController;
-(void)prepareWithActivityItems:(id)activityItems;
-(BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;
-(id)_beforeActivity;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)dealloc;
@end

