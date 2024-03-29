/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UIAlertViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, PLCloudSharedAlbum, UITableView, PLCloudSharedAlbumInvitationRecord;
@protocol PLSubscriberViewControllerDelegate;

@interface PLSubscriberViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
	PLCloudSharedAlbumInvitationRecord* _subscriberRecord;
	PLCloudSharedAlbum* _album;
	UITableView* _subscriberInfoTableView;
	UIImage* _subscriberImage;
	id<PLSubscriberViewControllerDelegate> _delegate;
	BOOL _streamOwner;
	int _resendInvitationSection;
@private
	BOOL _showResendInviteOption;
}
@property(assign, nonatomic) id<PLSubscriberViewControllerDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) PLCloudSharedAlbum* album;	// @synthesize=_album
@property(readonly, assign, nonatomic) PLCloudSharedAlbumInvitationRecord* subscriberRecord;	// @synthesize=_subscriberRecord
@property(retain, nonatomic) UIImage* subscriberImage;	// @synthesize=_subscriberImage
@property(assign, nonatomic) BOOL showResendInviteOption;	// @synthesize=_showResendInviteOption
// declared property setter: -(void)setShowResendInviteOption:(BOOL)option;
// declared property getter: -(BOOL)showResendInviteOption;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setSubscriberImage:(id)image;
// declared property getter: -(id)subscriberImage;
// declared property getter: -(id)subscriberRecord;
// declared property getter: -(id)album;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)_tableViewCustomFooter;
-(id)_subscriberEmail;
-(id)_subscriberLastName;
-(id)_subscriberFirstName;
-(id)_subscriberDescription;
-(void)_subscriberRemovalConpleted;
-(void)_displayRemoveSubscriberConfirmation:(id)confirmation;
-(void)_removeSubscriber;
-(void)_resendInvitation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)loadView;
-(void)dealloc;
-(id)initWithInvitationRecord:(id)invitationRecord forSharedStream:(id)sharedStream;
-(id)initForOwnerOfSharedStream:(id)sharedStream;
@end

