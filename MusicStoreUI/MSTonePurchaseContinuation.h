/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class ABPeoplePickerNavigationController, UIActionSheet, UIAlertView;

@interface MSTonePurchaseContinuation : XXUnknownSuperclass <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	ABPeoplePickerNavigationController* _peoplePicker;
}
-(void)_showPeoplePicker;
-(void)_pickAssigneeToneStyle;
-(void)_dismissPeoplePicker;
-(void)_destroyAlertView;
-(void)_destroyActionSheet;
-(id)_copyAllowedToneStyles;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertViewCancel:(id)cancel;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheetCancel:(id)cancel;
-(void)start;
-(void)cancel;
-(void)dealloc;
-(id)initWithPurchase:(id)purchase;
@end

