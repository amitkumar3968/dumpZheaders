/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIFont, UIColor;

@interface SUTableTextFooterView : XXUnknownSuperclass {
	UIFont* _font;
	UIColor* _shadowColor;
	int _textAlignment;
	UIColor* _textColor;
	NSArray* _textLines;
}
@property(retain, nonatomic) NSArray* textLines;	// @synthesize=_textLines
@property(retain, nonatomic) UIColor* textColor;	// @synthesize=_textColor
@property(assign, nonatomic) int textAlignment;	// @synthesize=_textAlignment
@property(retain, nonatomic) UIColor* shadowColor;	// @synthesize=_shadowColor
@property(retain, nonatomic) UIFont* font;	// @synthesize=_font
// declared property getter: -(id)textLines;
// declared property getter: -(id)textColor;
// declared property getter: -(int)textAlignment;
// declared property getter: -(id)shadowColor;
// declared property getter: -(id)font;
// declared property setter: -(void)setTextLines:(id)lines;
// declared property setter: -(void)setTextColor:(id)color;
// declared property setter: -(void)setTextAlignment:(int)alignment;
// declared property setter: -(void)setShadowColor:(id)color;
// declared property setter: -(void)setFont:(id)font;
-(void)sizeToFit;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
@end

