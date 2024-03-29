/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSTextTableBlock;

__attribute__((visibility("hidden")))
@interface NSTextBlockLayoutHelper : XXUnknownSuperclass {
@private
	NSTextTableBlock* _block;
	NSRange _charRange;
	NSRange _glyphRange;
	CGRect _layoutRect;
	CGRect _boundsRect;
	float _lMargin;
	float _lBorder;
	float _lPadding;
	float _tMargin;
	float _tBorder;
	float _tPadding;
	float _width;
	float _height;
	float _rPadding;
	float _rBorder;
	float _rMargin;
	float _bPadding;
	float _bBorder;
	float _bMargin;
}
-(void)dealloc;
-(id)description;
-(id)initWithTextTable:(id)textTable charIndex:(unsigned)index text:(id)text layoutManager:(id)manager containerWidth:(float)width collapseBorders:(BOOL)borders;
-(id)initWithTextBlock:(id)textBlock charIndex:(unsigned)index text:(id)text layoutManager:(id)manager containerWidth:(float)width collapseBorders:(BOOL)borders;
-(id)initWithTextBlock:(id)textBlock charRange:(NSRange)range text:(id)text layoutManager:(id)manager containerWidth:(float)width collapseBorders:(BOOL)borders;
-(id)initWithTextBlock:(id)textBlock charRange:(NSRange)range glyphRange:(NSRange)range3 layoutRect:(CGRect)rect boundsRect:(CGRect)rect5 containerWidth:(float)width allowMargins:(BOOL)margins collapseBorders:(BOOL)borders allowPadding:(BOOL)padding;
@end

