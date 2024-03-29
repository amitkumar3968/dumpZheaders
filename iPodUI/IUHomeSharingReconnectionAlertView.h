/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILabel, UIActivityIndicatorView;

@interface IUHomeSharingReconnectionAlertView : XXUnknownSuperclass {
@private
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _titleLabel;
}
@property(copy, nonatomic) NSString* title;
// declared property getter: -(id)title;
-(void)showInView:(id)view animated:(BOOL)animated;
// declared property setter: -(void)setTitle:(id)title;
-(void)hideAnimated:(BOOL)animated;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

