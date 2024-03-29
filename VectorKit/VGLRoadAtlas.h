/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VGLTexture;

__attribute__((visibility("hidden")))
@interface VGLRoadAtlas : XXUnknownSuperclass {
@private
	unsigned _textureSize;
	unsigned _numberOfRows;
	unsigned _numberOfColumns;
	BOOL _quarterQuad;
	VGLTexture* _texture;
	unsigned _atlasLevels;
	unsigned _atlasWidth;
	unsigned _atlasHeight;
	unsigned _textureLevels;
	unsigned _textureWidth;
	unsigned _textureHeight;
	unsigned _textureFormat;
}
@property(readonly, assign, nonatomic) VGLTexture* texture;	// @synthesize=_texture
@property(readonly, assign, nonatomic) unsigned numberOfColumns;	// @synthesize=_numberOfColumns
@property(readonly, assign, nonatomic) unsigned numberOfRows;	// @synthesize=_numberOfRows
@property(readonly, assign, nonatomic) unsigned textureSize;	// @synthesize=_textureSize
+(float)defaultRadius;
+(float)defaultFade;
+(float)defaultInflation;
+(unsigned)defaultTextureSize;
// declared property getter: -(id)texture;
// declared property getter: -(unsigned)numberOfColumns;
// declared property getter: -(unsigned)numberOfRows;
// declared property getter: -(unsigned)textureSize;
-(void)textureMatrix3AtRow:(unsigned)row column:(unsigned)column output:(float*)output;
-(float)inflateHalfWidth:(float)width inflation:(float)inflation;
-(void)generateTextureAtRow:(unsigned)row column:(unsigned)column inflation:(float)inflation fade:(float)fade radius:(float)radius context:(id)context;
-(void)generateTextureAtRow:(unsigned)row column:(unsigned)column withTextureData:(char*)textureData context:(id)context;
-(char*)generateTextureWithInflation:(float)inflation fade:(float)fade radius:(float)radius;
-(void)dealloc;
-(id)initWithSize:(unsigned)size numberOfRows:(unsigned)rows numberOfColumns:(unsigned)columns quarterQuad:(BOOL)quad context:(id)context;
@end

