/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPDisposable.h"
#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CPFontKerning : XXUnknownSuperclass <CPDisposable> {
	CFDataRef kernTable;
	const char* dataPtr;
	unsigned offset;
	unsigned kernTableLength;
	CFDictionaryRef kernDictionary;
	BOOL override;
	BOOL valid;
}
-(CFDictionaryRef)createKernTable;
-(void)doTable;
-(void)doOTSubtable;
-(void)doTTSubtable;
-(void)doSubtableFormat3;
-(void)doSubtableFormat2;
-(void)doSubtableFormat1;
-(void)doSubtableFormat0;
-(void)doKerningPair;
-(unsigned)readUnsignedLong;
-(short)readShort;
-(unsigned short)readUnsignedShort;
-(unsigned char)readByte;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithCGFont:(CGFontRef)cgfont;
-(id)initWithKernData:(CFDataRef)kernData;
@end

