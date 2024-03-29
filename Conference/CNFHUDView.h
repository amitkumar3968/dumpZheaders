/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Conference-Structs.h"

@class NSArray;

@interface CNFHUDView : XXUnknownSuperclass {
@private
	NSArray* _buttons;
	int _style;
	id _delegate;
}
@property(assign, nonatomic) id delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) int style;	// @synthesize=_style
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(int)style;
-(void)undim;
-(void)dim;
-(void)setIconOrientation:(int)orientation;
-(void)setButton:(int)button isSelected:(BOOL)selected;
-(void)_buttonPressed:(id)pressed;
-(void)setTitleInset:(float)inset forButtonTag:(int)buttonTag;
-(void)setTitle:(id)title image:(id)image forButtonTag:(int)buttonTag;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithStyle:(int)style buttons:(id)buttons;
-(CGSize)_defaultButtonSizeForButton:(id)button;
-(CGRect)_frameForStyle:(int)style;
-(int)_buttonPositionForButton:(id)button;
-(id)_buttonForButtonTag:(int)buttonTag;
@end

