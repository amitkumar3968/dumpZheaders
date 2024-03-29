/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIImageView, CAGradientLayer;

@interface PLSheetCardView : XXUnknownSuperclass {
	UIView* _contentView;
	UIView* _paperBG;
	UIView* _paperTexture;
	CAGradientLayer* _gradientLayer;
	UIImageView* _bevel;
	UIView* _headerView;
}
@property(readonly, assign, nonatomic) UIView* contentView;
-(CGRect)_bevelRect;
-(CGRect)_headerRect;
-(void)layoutSubviews;
-(void)_updateHeader;
-(void)_setupSubviews;
-(CGRect)_paperBounds;
// declared property getter: -(id)contentView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

