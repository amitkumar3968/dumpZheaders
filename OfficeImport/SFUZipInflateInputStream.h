/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUInputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface SFUZipInflateInputStream : XXUnknownSuperclass <SFUInputStream> {
@private
	z_stream_s mStream;
	long long mOffset;
	id<SFUBufferedInputStream> mInput;
	char* mOutBuffer;
	unsigned long mOutBufferSize;
	BOOL mReachedEnd;
	BOOL mIsFromZip;
	unsigned long mCalculatedCrc;
	unsigned long mCheckCrc;
}
-(long long)totalCompressedBytesConsumed;
-(id)closeLocalStream;
-(void)close;
-(void)enableSystemCaching;
-(void)disableSystemCaching;
-(long long)offset;
-(BOOL)canSeek;
-(void)seekToOffset:(long long)offset;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(unsigned long)readToOwnBuffer:(const char**)ownBuffer size:(unsigned long)size;
-(void)dealloc;
-(id)initWithInput:(id)input;
-(id)initWithOffset:(long long)offset end:(long long)end uncompressedSize:(unsigned long long)size crc:(unsigned long)crc dataRepresentation:(id)representation;
-(void)setupInflateStream;
@end

