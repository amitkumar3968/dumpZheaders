/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

@interface SULinkControl : XXUnknownSuperclass {
	UILabel* _label;
	BOOL _shouldDrawUnderline;
	unsigned _sizeIsDirty : 1;
	int _style;
}
@property(assign, nonatomic) BOOL shouldDrawUnderline;	// @synthesize=_shouldDrawUnderline
// declared property getter: -(BOOL)shouldDrawUnderline;
-(void)_updateLabel;
-(id)_label;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)highlighted;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)rect;
-(void)setText:(id)text;
-(void)setStyle:(int)style;
// declared property setter: -(void)setShouldDrawUnderline:(BOOL)drawUnderline;
-(void)dealloc;
@end
