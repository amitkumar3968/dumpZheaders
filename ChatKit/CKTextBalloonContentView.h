/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "NSObject.h"
#import "ChatKit-Structs.h"

@class UIFont, UIColor, NSAttributedString;
@protocol CKTextInteractionDelegate;

@protocol CKTextBalloonContentView <NSObject>
@optional
@property(assign, nonatomic) id<CKTextInteractionDelegate> interactionDelegate;
@required
@property(assign, nonatomic) int textAlignment;
@property(assign, nonatomic) CGSize shadowOffset;
@property(retain, nonatomic) UIColor* shadowColor;
@property(retain, nonatomic) UIColor* textColor;
@property(retain, nonatomic) UIFont* font;
@property(copy, nonatomic) NSAttributedString* attributedText;
// declared property setter: -(void)setTextAlignment:(int)alignment;
// declared property getter: -(int)textAlignment;
// declared property setter: -(void)setShadowOffset:(CGSize)offset;
// declared property getter: -(CGSize)shadowOffset;
// declared property setter: -(void)setShadowColor:(id)color;
// declared property getter: -(id)shadowColor;
// declared property setter: -(void)setTextColor:(id)color;
// declared property getter: -(id)textColor;
// declared property setter: -(void)setFont:(id)font;
// declared property getter: -(id)font;
// declared property setter: -(void)setAttributedText:(id)text;
// declared property getter: -(id)attributedText;
@optional
// declared property setter: -(void)setInteractionDelegate:(id)delegate;
// declared property getter: -(id)interactionDelegate;
-(void)prepareForReuse;
@end

