/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSString;

@interface PLCameraOverlayTextLabelView : XXUnknownSuperclass {
	NSString* _text;
	float _textSize;
	float _textStrokeWidth;
	UIColor* _textColor;
}
@property(retain, nonatomic) UIColor* textColor;	// @synthesize=_textColor
@property(assign, nonatomic) float textStrokeWidth;	// @synthesize=_textStrokeWidth
@property(retain, nonatomic) NSString* text;	// @synthesize=_text
// declared property setter: -(void)setTextColor:(id)color;
// declared property getter: -(id)textColor;
// declared property setter: -(void)setTextStrokeWidth:(float)width;
// declared property getter: -(float)textStrokeWidth;
// declared property getter: -(id)text;
-(void)drawRect:(CGRect)rect;
// declared property setter: -(void)setText:(id)text;
-(void)dealloc;
-(id)initWithText:(id)text;
-(id)initWithText:(id)text textSize:(float)size;
-(id)initWithFrame:(CGRect)frame text:(id)text textSize:(float)size;
@end

