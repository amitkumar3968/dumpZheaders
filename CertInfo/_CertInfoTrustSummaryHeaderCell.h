/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CertInfo-Structs.h"

@class _CertInfoActionButton, UIImage, UILabel, NSString, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : XXUnknownSuperclass {
	UIImage* _certificateImage;
	UIImage* _notTrustedGradient;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	_CertInfoActionButton* _actionButton;
	_CertInfoGradientLabel* _trustedLabel;
	BOOL _trusted;
}
@property(assign, nonatomic, getter=isTrusted) BOOL trusted;	// @synthesize=_trusted
@property(copy, nonatomic) NSString* trustSubtitle;
@property(copy, nonatomic) NSString* trustTitle;
@property(readonly, assign, nonatomic) float rowHeight;
@property(readonly, assign, nonatomic) _CertInfoActionButton* actionButton;
// declared property setter: -(void)setTrusted:(BOOL)trusted;
// declared property getter: -(BOOL)isTrusted;
-(id)_trustedLabel;
-(id)_subtitleLabel;
-(id)_titleLabel;
-(void)_layoutSubviewsWithActionButtonSize:(CGSize)actionButtonSize;
-(void)layoutSubviews;
-(void)setActionButtonTitle:(id)title destructive:(BOOL)destructive animated:(BOOL)animated;
// declared property getter: -(float)rowHeight;
-(void)setExpired:(BOOL)expired;
// declared property getter: -(id)trustSubtitle;
// declared property setter: -(void)setTrustSubtitle:(id)subtitle;
// declared property getter: -(id)trustTitle;
// declared property setter: -(void)setTrustTitle:(id)title;
// declared property getter: -(id)actionButton;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

