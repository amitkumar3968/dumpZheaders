/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDWriter.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface OCBWriter : XXUnknownSuperclass <OCDWriter> {
@private
	OcBinaryWriter* mBinaryWriter;
	FILE* mFile;
	NSData* mData;
}
+(void)writeDocument:(id)document toData:(id)data cancel:(id)cancel;
+(void)writeDocument:(id)document toFileName:(id)fileName cancel:(id)cancel;
-(void)setData:(id)data;
-(void)setFile:(FILE*)file;
-(OcBinaryWriter*)binaryWriter;
-(bool)isBinaryWriter;
-(void)dealloc;
-(id)initWithBinaryWriter:(OcBinaryWriter*)binaryWriter;
@end
