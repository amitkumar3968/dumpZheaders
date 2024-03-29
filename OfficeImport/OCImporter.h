/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCMapper.h"

@class OCDReader, CPImportTracing, NSData, NSURL;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper {
@private
	NSURL* mURL;
	NSData* mData;
	OCDReader* mReader;
	CPImportTracing* mTracing;
	BOOL mTryAlternateReader;
}
@property(readonly, assign, nonatomic) CPImportTracing* tracing;	// @synthesize=mTracing
+(void)initialize;
// declared property getter: -(id)tracing;
-(id)filename;
-(BOOL)setPassphrase:(id)passphrase;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)version errorMessage:(id*)message;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)helper errorMessage:(id*)message readError:(BOOL*)error;
-(BOOL)tryAlternateReader;
-(void)setURL:(id)url;
-(void)dealloc;
-(id)initWithData:(id)data;
-(id)initWithURL:(id)url;
-(BOOL)start;
-(BOOL)isXML;
@end

