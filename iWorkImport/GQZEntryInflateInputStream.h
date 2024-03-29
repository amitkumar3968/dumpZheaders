/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQZEntryInputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntryInflateInputStream : XXUnknownSuperclass <GQZEntryInputStream> {
@private
	z_stream_s mStream;
	long long mOffset;
	long long mEnd;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;
	id<GQZArchiveInputStream> mInput;
	char* mOutBuffer;
	unsigned long mOutBufferSize;
}
-(id).cxx_construct;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(void)readToOwnBuffer:(const char**)ownBuffer size:(unsigned*)size;
-(void)dealloc;
-(id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc input:(id)input;
@end

