/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface SUItemOfferButton : XXUnknownSuperclass {
@private
	int _animationHorizontalAlignment;
	NSString* _buttonStyle;
	NSString* _confirmationTitle;
	BOOL _isShowingConfirmation;
	NSString* _offerTitle;
	BOOL _shouldShowConfirmation;
}
@property(assign, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;	// @synthesize=_isShowingConfirmation
@property(assign, nonatomic) BOOL shouldShowConfirmation;	// @synthesize=_shouldShowConfirmation
@property(copy, nonatomic) NSString* offerTitle;	// @synthesize=_offerTitle
@property(copy, nonatomic) NSString* itemOfferButtonStyle;	// @synthesize=_buttonStyle
@property(copy, nonatomic) NSString* confirmationTitle;	// @synthesize=_confirmationTitle
@property(assign, nonatomic) int animationHorizontalAlignment;	// @synthesize=_animationHorizontalAlignment
+(id)itemOfferButtonStyleForItem:(id)item offer:(id)offer;
+(double)defaultAnimationDuration;
// declared property getter: -(BOOL)isShowingConfirmation;
// declared property setter: -(void)setShouldShowConfirmation:(BOOL)showConfirmation;
// declared property getter: -(BOOL)shouldShowConfirmation;
// declared property getter: -(id)offerTitle;
// declared property getter: -(id)itemOfferButtonStyle;
// declared property getter: -(id)confirmationTitle;
// declared property setter: -(void)setAnimationHorizontalAlignment:(int)alignment;
// declared property getter: -(int)animationHorizontalAlignment;
-(void)_reloadButton;
-(XXStruct_pACr2D)_configurationForStyle:(id)style;
-(void)_applyConfiguration:(XXStruct_pACr2D)configuration;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setShowingConfirmation:(BOOL)confirmation duration:(double)duration;
// declared property setter: -(void)setShowingConfirmation:(BOOL)confirmation;
// declared property setter: -(void)setOfferTitle:(id)title;
// declared property setter: -(void)setItemOfferButtonStyle:(id)style;
// declared property setter: -(void)setConfirmationTitle:(id)title;
-(BOOL)configureForItem:(id)item offer:(id)offer;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

