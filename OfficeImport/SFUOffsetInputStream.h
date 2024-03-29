/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SFUInputStream.h"


__attribute__((visibility("hidden")))
@interface SFUOffsetInputStream : XXUnknownSuperclass <SFUInputStream> {
@private
	id<SFUInputStream> mInputStream;
	long long mInitialOffset;
}
-(id)closeLocalStream;
-(void)close;
-(void)enableSystemCaching;
-(void)disableSystemCaching;
-(void)seekToOffset:(long long)offset;
-(BOOL)canSeek;
-(unsigned long)readToBuffer:(char*)buffer size:(unsigned long)size;
-(long long)offset;
-(void)dealloc;
-(id)initWithInputStream:(id)inputStream initialOffset:(long long)offset;
-(id)initWithInputStream:(id)inputStream;
@end

