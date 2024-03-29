/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VGLUncompressedTexture, VKImage;

__attribute__((visibility("hidden")))
@interface VGLIcon : XXUnknownSuperclass {
@private
	VKImage* _image;
	CGRect _textureRect;
	int _iconTag;
}
@property(readonly, assign, nonatomic) CGRect textureRect;
@property(readonly, assign, nonatomic) VGLUncompressedTexture* texture;
@property(readonly, assign, nonatomic) float verticalPadding;
@property(readonly, assign, nonatomic) int iconTag;	// @synthesize=_iconTag
// declared property getter: -(int)iconTag;
-(BOOL)isCityDot;
-(void)setIconTagFromName:(id)name;
// declared property getter: -(CGRect)textureRect;
// declared property getter: -(id)texture;
-(UIEdgeInsets)textureCoordinateRect;
-(UIEdgeInsets)quadAtPixel:(CGSize)pixel;
-(UIEdgeInsets)rectAtPixel:(CGSize)pixel;
-(void)dealloc;
-(id)initWithPackedIcon:(id)packedIcon imageAtlas:(id)atlas quadSize:(CGSize)size;
-(id)initWithImage:(id)image;
// declared property getter: -(float)verticalPadding;
@end

