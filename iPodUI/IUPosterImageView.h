/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CALayer, UIImage;

@interface IUPosterImageView : XXUnknownSuperclass {
	UIImage* _image;
	CGRect _imageSubRect;
	CALayer* _shinyLayer;
}
@property(readonly, assign, nonatomic) CGRect imageSubRect;	// @synthesize=_imageSubRect
@property(readonly, assign, nonatomic) UIImage* image;	// @synthesize=_image
@property(assign, nonatomic) BOOL shiny;
@property(assign, nonatomic) BOOL bordered;
// declared property getter: -(CGRect)imageSubRect;
// declared property getter: -(id)image;
-(void)layoutSubviews;
-(void)setImage:(id)image imageSubRect:(CGRect)rect;
// declared property getter: -(BOOL)shiny;
// declared property setter: -(void)setShiny:(BOOL)shiny;
// declared property getter: -(BOOL)bordered;
// declared property setter: -(void)setBordered:(BOOL)bordered;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

