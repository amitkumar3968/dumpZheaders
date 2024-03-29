/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "UIAlertViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIAlertView, ISDialog;

@interface SUDialog : XXUnknownSuperclass <UIAlertViewDelegate> {
@private
	UIAlertView* _alertView;
	id _completionBlock;
	ISDialog* _dialog;
}
@property(readonly, assign, nonatomic) ISDialog* dialog;	// @synthesize=_dialog
// declared property getter: -(id)dialog;
-(void)_completeWithButtonIndex:(int)buttonIndex;
-(id)_alertView;
-(void)alertViewCancel:(id)cancel;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showWithCompletionBlock:(id)completionBlock;
-(BOOL)isEquivalent:(id)equivalent;
-(void)dealloc;
-(id)initWithDialog:(id)dialog;
@end

