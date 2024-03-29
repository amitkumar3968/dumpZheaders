/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol GQZArchiveInputStream;

__attribute__((visibility("hidden")))
@interface GQZEntry : XXUnknownSuperclass {
@private
	id<GQZArchiveInputStream> mInput;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
}
-(void)readZip64ExtraField:(const char*)field size:(unsigned long)size;
-(xmlTextReader*)xmlReader:(BOOL)reader;
-(xmlDoc*)recoverXmlDocument;
-(xmlDoc*)xmlDocument;
-(id)data;
-(id)inputStream;
-(void)dealloc;
-(id)initFromCentralFileHeader:(const char*)centralFileHeader inputStream:(id)stream;
@end

