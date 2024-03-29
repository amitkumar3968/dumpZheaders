/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSHeaderFooterView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton;

@interface PSDeleteButton : XXUnknownSuperclass <PSHeaderFooterView> {
@private
	UIButton* _deleteButton;
}
+(float)deleteButtonHeight;
-(float)preferredHeightForWidth:(float)width;
-(void)setButtonTitle:(id)title;
-(void)addButtonTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithSpecifier:(id)specifier;
@end

