/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLTexture.h"


__attribute__((visibility("hidden")))
@interface VGLUncompressedTexture : VGLTexture {
@private
	CGImageRef _image;
	char* _imageData;
	unsigned _pixelFormat;
	unsigned _colorFormat;
	CGImageBlockSetRef _blockSetRef;
	BOOL _fastPath;
}
-(UIEdgeInsets)textureCoordinateRect;
-(BOOL)loadTexture;
-(BOOL)decodeTexture;
-(void)dealloc;
-(id)initWithData:(id)data;
-(id)initWithCGImage:(CGImageRef)cgimage;
@end
