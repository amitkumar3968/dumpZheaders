/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NSString;

@interface TPButton : XXUnknownSuperclass {
	UIImageView* _plusSeparator;
	int _color;
	NSString* _plusSeparatedTitle;
	BOOL _forceReLayout;
	BOOL _currentlyLayingOut;
	BOOL _useStandardSizing;
}
@property(assign) BOOL useStandardSizing;	// @synthesize=_useStandardSizing
@property(assign) int buttonColor;	// converted property
+(id)acceptVideoButtonImage;
+(id)declineVideoButtonImage;
+(id)declineButtonImage;
+(id)answerButtonImage;
+(float)defaultHeightForColor:(int)color;
+(float)defaultHeight;
// declared property setter: -(void)setUseStandardSizing:(BOOL)sizing;
// declared property getter: -(BOOL)useStandardSizing;
-(void)layoutSubviews;
-(void)setMinimumTitleFontSize:(float)size maximumTitleFontSize:(float)size2;
-(void)setMinimumTitleFontSize:(float)size;
-(void)setIconVerticalOffset:(float)offset;
-(void)setTitleVerticalOffset:(float)offset;
-(void)setPlusSeparatedTitle:(id)title;
-(void)dealloc;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)setTitleImagePadding:(float)padding;
// converted property getter: -(int)buttonColor;
-(void)setDisabledButtonColor:(int)color;
// converted property setter: -(void)setButtonColor:(int)color;
-(void)setEnabled:(BOOL)enabled;
-(void)setHighlighted:(BOOL)highlighted;
-(void)_adjustIconColor;
-(id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;
-(void)_setDisabledButtonColor:(int)color;
-(void)_setButtonColor:(int)color;
@end
