/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface OCCDecryptor : XXUnknownSuperclass {
@private
	NSString* mOutputFilename;
	NSString* mBaseStringForOutputFilename;
	OCCStreamer* mStreamer;
}
@property(readonly, assign, nonatomic) NSString* outputFilename;	// @synthesize=mOutputFilename
+(id)allocTempFileWithBase:(id)base outFilename:(id*)filename;
+(id)agilePasswordKeyEncryptorNamespace;
+(id)agileDescriptorNamespace;
// declared property getter: -(id)outputFilename;
-(BOOL)decryptIntoOutputFile;
-(BOOL)verifyPassphrase:(id)passphrase;
-(BOOL)decrypt;
-(void)deleteOutputFile;
-(BOOL)isReadProtectedUsingDefaultPassphrase;
-(id)initWithStreamer:(OCCStreamer*)streamer;
-(void)dealloc;
@end

