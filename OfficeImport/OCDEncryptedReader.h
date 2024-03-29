/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDReader.h"

@class OCCDecryptor;

__attribute__((visibility("hidden")))
@interface OCDEncryptedReader : OCDReader {
@private
	OCCDecryptor* mDecryptor;
}
@property(readonly, assign, nonatomic) OCCDecryptor* decryptor;	// @synthesize=mDecryptor
// declared property getter: -(id)decryptor;
-(BOOL)retainDecryptorWithErrorCode:(int*)errorCode;
-(void)useUnencryptedDocument;
-(void)dealloc;
-(void)restartReaderToUseDecryptedDocument;
@end

