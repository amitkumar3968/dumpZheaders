/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "NSObject.h"
#import "Preferences-Structs.h"
#import "UIScrollViewDelegate.h"


@protocol UITextViewDelegate <NSObject, UIScrollViewDelegate>
@optional
-(void)textViewDidChangeSelection:(id)textView;
-(void)textViewDidChange:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
@end

