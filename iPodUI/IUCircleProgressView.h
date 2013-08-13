/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

@interface IUCircleProgressView : XXUnknownSuperclass {
@private
	UIColor* _color;
	UIColor* _etchColor;
	BOOL _highlighted;
	UIColor* _highlightedColor;
	UIColor* _highlightedEtchColor;
	float _progress;
}
@property(assign, nonatomic) float progress;	// @synthesize=_progress
@property(retain, nonatomic) UIColor* highlightedEtchColor;	// @synthesize=_highlightedEtchColor
@property(retain, nonatomic) UIColor* highlightedColor;	// @synthesize=_highlightedColor
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// @synthesize=_highlighted
@property(retain, nonatomic) UIColor* etchColor;	// @synthesize=_etchColor
@property(retain, nonatomic) UIColor* color;	// @synthesize=_color
// declared property getter: -(float)progress;
// declared property getter: -(id)highlightedEtchColor;
// declared property getter: -(id)highlightedColor;
// declared property setter: -(void)setHighlighted:(BOOL)highlighted;
// declared property getter: -(BOOL)isHighlighted;
// declared property getter: -(id)etchColor;
// declared property getter: -(id)color;
-(void)_drawOutline:(CGRect)outline;
-(void)_drawInterior:(CGRect)interior;
// declared property setter: -(void)setProgress:(float)progress;
// declared property setter: -(void)setHighlightedEtchColor:(id)color;
// declared property setter: -(void)setHighlightedColor:(id)color;
// declared property setter: -(void)setEtchColor:(id)color;
// declared property setter: -(void)setColor:(id)color;
-(void)drawRect:(CGRect)rect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

