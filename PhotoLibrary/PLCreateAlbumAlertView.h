/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"
#import "UIAlertViewDelegate.h"
#import "PhotoLibrary-Structs.h"


@interface PLCreateAlbumAlertView : XXUnknownSuperclass <UITextFieldDelegate, UIAlertViewDelegate> {
@private
	id completion;
}
@property(copy, nonatomic) id completion;	// @synthesize
+(id)albumCreationAlertView;
// declared property setter: -(void)setCompletion:(id)completion;
// declared property getter: -(id)completion;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)alertView;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)showWithCompletionHandler:(id)completionHandler;
-(void)dealloc;
@end

