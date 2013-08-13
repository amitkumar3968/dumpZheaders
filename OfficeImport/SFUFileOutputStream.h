/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "SFUOutputStream.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SFUFileOutputStream : XXUnknownSuperclass <SFUOutputStream> {
@private
	FILE* mFile;
	NSString* mPath;
}
-(id)closeLocalStream;
-(void)close;
-(id)inputStream;
-(BOOL)canCreateInputStream;
-(void)seekToOffset:(long long)offset whence:(int)whence;
-(BOOL)canSeek;
-(long long)offset;
-(void)writeBuffer:(const char*)buffer size:(unsigned long)size;
-(id)path;
-(void)dealloc;
-(id)initWithPath:(id)path;
@end

