/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUGradientButton.h"

@class UIImageView, NSString;

@interface SUReviewsButton : SUGradientButton {
	UIImageView* _disclosureView;
	float _userRating;
	int _userRatingCount;
	NSString* _userRatingCountString;
}
@property(retain, nonatomic) NSString* userRatingCountString;	// @synthesize=_userRatingCountString
@property(assign, nonatomic) int userRatingCount;	// @synthesize=_userRatingCount
@property(assign, nonatomic) float userRating;	// @synthesize=_userRating
// declared property getter: -(id)userRatingCountString;
// declared property getter: -(int)userRatingCount;
// declared property getter: -(float)userRating;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)layoutSubviews;
-(CGRect)contentRectForBounds:(CGRect)bounds;
// declared property setter: -(void)setUserRatingCountString:(id)string;
// declared property setter: -(void)setUserRatingCount:(int)count;
// declared property setter: -(void)setUserRating:(float)rating;
-(void)reloadView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
