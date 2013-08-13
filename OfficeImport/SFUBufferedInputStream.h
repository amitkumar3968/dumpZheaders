/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SFUInputStream.h"
#import "SFUBufferedInputStream.h"


@protocol SFUBufferedInputStream <SFUInputStream>
-(BOOL)seekWithinBufferToOffset:(long long)offset;
-(unsigned long)readToOwnBuffer:(const char**)ownBuffer size:(unsigned long)size;
@end

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : XXUnknownSuperclass <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long mBufferSize;
	unsigned long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;
}
-(id)closeLocalStream;
-(void)close;
-(void)enableSystemCaching;
-(void)disableSystemCaching;
-(void)seekToOffset:(long long)offset;
-(BOOL)canSeek;
-(BOOL)seekWithinBufferToOffset:(long long)offset;
-(unsigned long)readToOwnBuffer:(const char**)ownBuffer size:(unsigned long)size;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(long long)offset;
-(void)dealloc;
-(id)initWithStream:(id)stream dataLength:(long long)length;
-(id)initWithStream:(id)stream bufferSize:(unsigned long)size;
-(id)initWithStream:(id)stream;
@end

