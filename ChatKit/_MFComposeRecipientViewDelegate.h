/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"


@protocol _MFComposeRecipientViewDelegate
@optional
-(void)composeRecipientViewDidBecomeFirstResponder:(id)composeRecipientView;
-(void)composeRecipientViewWillBecomeFirstResponder:(id)composeRecipientView;
-(void)composeRecipientViewDidResignFirstResponder:(id)composeRecipientView;
-(void)composeRecipientViewReturnPressed:(id)pressed;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record property:(int)property identifier:(int)identifier;
-(id)composeRecipientView:(id)view composeRecipientForRecord:(void*)record identifier:(int)identifier;
-(id)composeRecipientView:(id)view composeRecipientForAddress:(id)address;
-(void)composeRecipientView:(id)view showPersonCardForAtom:(id)atom;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)composeRecipientView;
-(BOOL)composeRecipientViewIsShowingPeoplePicker:(id)picker;
-(void)composeRecipientViewRequestAddRecipient:(id)recipient;
-(void)composeRecipientView:(id)view textDidChange:(id)text;
-(void)composeRecipientView:(id)view didChangeSize:(CGSize)size;
-(void)composeRecipientViewEndedEditing:(id)editing;
-(void)composeRecipientViewBeganEditing:(id)editing;
-(void)composeRecipientViewDidFinishEnteringRecipient:(id)composeRecipientView;
-(void)composeRecipientView:(id)view requestDeleteRecipientAtIndex:(int)index;
@end
