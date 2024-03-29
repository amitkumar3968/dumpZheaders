/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VectorKit-Structs.h"

@class NSString, VGLUncompressedTexture, NSData;

@interface VKImage : XXUnknownSuperclass {
@private
	VGLUncompressedTexture* _texture;
	CGImageRef _imageRef;
	NSData* _data;
	NSString* _name;
	CGSize _size;
	float _scale;
	BOOL _usedAsTextureAndImage;
}
@property(readonly, retain) VGLUncompressedTexture* texture;	// converted property
@property(readonly, assign) CGSize size;	// converted property
@property(readonly, assign) float scale;	// converted property
// converted property getter: -(float)scale;
// converted property getter: -(CGSize)size;
-(CGImageRef)image;
// converted property getter: -(id)texture;
-(void)dealloc;
-(id)initWithName:(id)name;
-(id)initWithData:(id)data;
-(id)initWithData:(id)data usedAsTextureAndImage:(BOOL)image;
-(id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale;
-(id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale usedAsTextureAndImage:(BOOL)image;
@end

