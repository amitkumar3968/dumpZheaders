/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDEncryptedReader.h"

@class OCPZipPackage;

__attribute__((visibility("hidden")))
@interface OCXReader : OCDEncryptedReader {
@private
	OCPZipPackage* mZipPackage;
}
@property(retain, nonatomic) OCPZipPackage* zipPackage;	// @synthesize=mZipPackage
// declared property setter: -(void)setZipPackage:(id)package;
-(id)read;
-(BOOL)start;
-(void)restartReaderToUseDecryptedDocument;
-(BOOL)retainDecryptorWithErrorCode:(int*)errorCode;
-(bool)isBinaryReader;
// declared property getter: -(id)zipPackage;
-(BOOL)verifyFileFormat;
-(void)dealloc;
@end

