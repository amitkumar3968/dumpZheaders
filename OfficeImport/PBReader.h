/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


__attribute__((visibility("hidden")))
@interface PBReader : OCBReader {
@private
	PptObjectFactory* mPptObjectFactory;
	const void* mBuffer;
}
@property(readonly, assign, nonatomic) PptBinaryReader* pptReader;
-(OCCBinaryStreamer*)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey*)cryptoKey baseOutputFilenameInUTF8:(const char*)utf8;
-(OCCEncryptionInfoReader*)encryptionInfoReader;
// declared property getter: -(PptBinaryReader*)pptReader;
-(id)read;
-(BOOL)start;
-(void)dealloc;
-(id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;
@end
