/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VGLFontGlyphCache : XXUnknownSuperclass {
@private
	unordered_map<<anonymous>::GlyphCacheKey, VGLFontGlyph_struct *, std::__1::hash<<anonymous>::GlyphCacheKey>, std::__1::equal_to<<anonymous>::GlyphCacheKey>, std::__1::allocator<std::__1::pair<const <anonymous>::GlyphCacheKey, VGLFontGlyph_struct *>> > _cache;
}
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)dealloc;
-(void)getGlyphs:(__wrap_iter<VGLFontGlyphQuad_struct *>)glyphs count:(int)count forCGGlyphs:(unsigned short*)cgglyphs inFont:(CGFontRef)font withSize:(float)size withHaloSize:(float)haloSize;
@end

