/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UILabel, UIButton, PLCommentTextView, UIScrollView;

@interface PLPhotoCommentEntryView : XXUnknownSuperclass {
@private
	UIScrollView* _scrollview;
	UIView* _styledSeparatorView;
	UILabel* placeholderLabel;
	UILabel* _placeholderLabel;
	PLCommentTextView* _textView;
	UIButton* _postButton;
}
@property(readonly, assign, nonatomic) UIButton* postButton;	// @synthesize=_postButton
@property(readonly, assign, nonatomic) UILabel* placeholderLabel;	// @synthesize=_placeholderLabel
@property(readonly, assign, nonatomic) PLCommentTextView* textView;	// @synthesize=_textView
// declared property getter: -(id)postButton;
// declared property getter: -(id)textView;
// declared property getter: -(id)placeholderLabel;
-(void)layoutSubviews;
-(void)adjustButtonPosition;
-(float)preferredHeightForOrientation:(int)orientation;
-(float)heightForTextContentHeight:(float)textContentHeight orientation:(int)orientation;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

