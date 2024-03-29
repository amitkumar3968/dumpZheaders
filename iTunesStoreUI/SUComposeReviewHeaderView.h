/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SURatingControl, NSString, UIImageView, ISReview, SUComposeTextFieldListView, UIResponder, UILabel;
@protocol SUComposeReviewHeaderDelegate;

@interface SUComposeReviewHeaderView : XXUnknownSuperclass {
	UIImageView* _backgroundView;
	id<SUComposeReviewHeaderDelegate> _delegate;
	SURatingControl* _ratingControl;
	UILabel* _ratingLabel;
	ISReview* _review;
	unsigned _showNicknameField : 1;
	int _style;
	SUComposeTextFieldListView* _textFieldListView;
}
@property(readonly, assign, nonatomic) NSString* title;
@property(assign, nonatomic) float rating;
@property(readonly, assign, nonatomic) NSString* nickname;
@property(readonly, assign, nonatomic) UIResponder* initialFirstResponder;
@property(retain, nonatomic) ISReview* review;	// @synthesize=_review
@property(assign, nonatomic) id<SUComposeReviewHeaderDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) int composeReviewStyle;	// @synthesize=_style
// declared property getter: -(id)review;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(int)composeReviewStyle;
-(void)_setupViewsForPhoneStyle;
-(void)_setupViewsForPadStyle;
-(void)_layoutSubviewsForPhoneStyle;
-(void)_layoutSubviewsForPadStyle;
-(void)textFieldListValuesDidChange:(id)textFieldListValues;
-(void)textFieldListValidityDidChange:(id)textFieldListValidity;
-(id)textFieldList:(id)list configurationForFieldAtIndex:(unsigned)index;
-(int)numberOfFieldsInTextFieldList:(id)textFieldList;
-(int)numberOfColumnsInTextFieldList:(id)textFieldList;
// declared property getter: -(id)title;
// declared property setter: -(void)setReview:(id)review;
// declared property setter: -(void)setRating:(float)rating;
// declared property getter: -(float)rating;
// declared property getter: -(id)nickname;
// declared property getter: -(id)initialFirstResponder;
-(void)sizeToFit;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end

