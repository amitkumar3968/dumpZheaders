/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VGLTexture.h"

@class NSMutableArray, NSData;

__attribute__((visibility("hidden")))
@interface VGLCompressedTexture : VGLTexture {
@private
	NSData* _data;
	NSMutableArray* _imageData;
	unsigned _surfaces;
	unsigned _mipmapLevels;
	struct {
		unsigned hasAlpha : 1;
		unsigned isCubeMap : 1;
		unsigned isMipmapped : 1;
		unsigned isVerticalFlipped : 1;
	} _flags;
	unsigned _internalFormat;
}
-(BOOL)loadTexture;
-(BOOL)decodeTexture;
-(void)dealloc;
-(id)initWithData:(id)data;
@end
