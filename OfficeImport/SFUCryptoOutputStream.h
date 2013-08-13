/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUOutputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SFUCryptor;

__attribute__((visibility("hidden")))
@interface SFUCryptoOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	id<SFUOutputStream> mBaseStream;
	SFUCryptor* mCryptor;
	BOOL mIsClosed;
	BOOL mComputeCrc32;
	unsigned mCrc32;
}
+(unsigned long long)encodedLengthForDataLength:(unsigned long long)dataLength key:(id)key;
-(id)closeLocalStream;
-(void)close;
-(unsigned)crc32;
-(id)inputStream;
-(BOOL)canCreateInputStream;
-(long long)offset;
-(void)seekToOffset:(long long)offset whence:(int)whence;
-(BOOL)canSeek;
-(void)writeBuffer:(const char*)buffer size:(unsigned long)size;
-(void)dealloc;
-(id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key computeCrc32:(BOOL)a32;
-(id)initForEncryptionWithOutputStream:(id)outputStream key:(id)key;
@end
