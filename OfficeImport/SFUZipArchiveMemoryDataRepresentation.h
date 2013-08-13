/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"
#import "SFUZipArchiveDataRepresentation.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
@private
	NSData* mData;
}
-(id)bufferedInputStreamWithOffset:(long long)offset length:(long long)length;
-(id)inputStreamWithOffset:(long long)offset length:(long long)length;
-(BOOL)hasSameLocationAs:(id)as;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;
-(id)bufferedInputStream;
-(id)inputStream;
-(long long)dataLength;
-(BOOL)isReadable;
-(id)data;
-(void)dealloc;
-(id)initWithData:(id)data;
@end
