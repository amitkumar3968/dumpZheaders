/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView;

@interface SUNavigationButton : XXUnknownSuperclass {
@private
	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
}
@property(assign, nonatomic) UIEdgeInsets accessoryViewInsets;	// @synthesize=_accessoryViewInsets
@property(retain, nonatomic) UIView* accessoryView;	// @synthesize=_accessoryView
// declared property getter: -(UIEdgeInsets)accessoryViewInsets;
// declared property getter: -(id)accessoryView;
-(CGRect)_accessoryViewRectForContentRect:(CGRect)contentRect;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
// declared property setter: -(void)setAccessoryViewInsets:(UIEdgeInsets)insets;
// declared property setter: -(void)setAccessoryView:(id)view;
-(void)dealloc;
@end

