/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILabel;

@interface IUWildcatTableHeaderView : XXUnknownSuperclass {
	UILabel* _label;
	float _leftPadding;
}
@property(assign, nonatomic) float titleLeftPadding;	// @synthesize=_leftPadding
@property(retain, nonatomic) NSString* title;
// declared property getter: -(float)titleLeftPadding;
-(id)_label;
// declared property setter: -(void)setTitleLeftPadding:(float)padding;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
-(void)layoutSubviews;
-(void)dealloc;
-(id)init;
@end

