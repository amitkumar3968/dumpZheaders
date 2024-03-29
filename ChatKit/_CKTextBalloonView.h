/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import "CKColoredBalloonView.h"

@class UIView, NSAttributedString;
@protocol CKTextBalloonContentView;

@interface _CKTextBalloonView : CKColoredBalloonView {
@private
	NSAttributedString* _attributedText;
	UIView<CKTextBalloonContentView>* _textView;
}
@property(retain, nonatomic) UIView<CKTextBalloonContentView>* textView;	// @synthesize=_textView
@property(copy, nonatomic) NSAttributedString* attributedText;	// @synthesize=_attributedText
+(BOOL)needsSingleTapGestureRecognizer;
// declared property setter: -(void)setTextView:(id)view;
// declared property getter: -(id)textView;
// declared property getter: -(id)attributedText;
-(void)updateTextColor;
-(id)textColor;
-(void)updateTextShadow;
-(id)textShadowColor;
-(void)updateFontSize;
// declared property setter: -(void)setAttributedText:(id)text;
-(void)copyToPasteboard;
-(void)setOrientation:(int)orientation;
-(void)setOutgoingColor:(int)color;
-(void)setHighlighted:(BOOL)highlighted;
-(void)setFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(id)description;
-(void)dealloc;
@end

