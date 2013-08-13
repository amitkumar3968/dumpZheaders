/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SFUZipDeflateOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	id<SFUOutputStream> mOutputStream;
	z_stream_s mDeflateStream;
	char* mOutBuffer;
}
-(id)inputStream;
-(BOOL)canCreateInputStream;
-(long long)offset;
-(void)seekToOffset:(long long)offset whence:(int)whence;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)buffer size:(unsigned long)size;
-(void)close;
-(id)closeLocalStream;
-(void)dealloc;
-(id)initWithOutputStream:(id)outputStream;
@end
