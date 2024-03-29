/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface MFBitmap : XXUnknownSuperclass {
@private
	int m_width;
	int m_height;
	unsigned m_bitsPerPixel;
	int m_compression;
	BOOL m_isOS2;
	unsigned m_infoHeaderSize;
	unsigned m_paletteSize;
	NSMutableData* m_bmpData;
}
-(BOOL)isEmpty;
-(void)setMonoPalette:(id)palette;
-(void)dealloc;
-(id)initWithBitmap:(id)bitmap :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char*)arg6 :(unsigned)arg7;
-(id)initWithDIBitmap:(id)dibitmap :(const char*)arg2 :(unsigned)arg3 :(const char*)arg4 :(unsigned)arg5 :(int)arg6;
-(id)initWithDIBitmap:(id)dibitmap :(const char*)arg2 :(unsigned)arg3 :(int)arg4;
-(id)init;
-(BOOL)processDIBHeader:(id)header :(const char*)arg2 :(unsigned)arg3 :(int)arg4;
-(void)appendDIBPalette:(id)palette :(const char*)arg2 :(unsigned)arg3 :(int)arg4;
-(void)setNull;
-(void)writeInfoHeader;
-(void)writeFileHeader;
-(void)writePaletteEntry:(id)entry :(int)arg2;
-(BOOL)parseHeader:(const char*)header :(unsigned)arg2;
@end

