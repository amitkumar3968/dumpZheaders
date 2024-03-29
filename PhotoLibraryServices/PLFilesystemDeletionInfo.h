/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSURL, NSString;

@interface PLFilesystemDeletionInfo : XXUnknownSuperclass {
@private
	NSURL* _objectIDURI;
	NSArray* _fileURLs;
	unsigned _thumbnailIndex;
	NSString* _uuid;
}
@property(readonly, assign) NSString* uuid;	// @synthesize=_uuid
@property(readonly, assign) unsigned thumbnailIndex;	// @synthesize=_thumbnailIndex
@property(readonly, assign) NSArray* fileURLs;	// @synthesize=_fileURLs
@property(readonly, assign) NSURL* objectIDURI;	// @synthesize=_objectIDURI
+(id)deletionInfoWithAsset:(id)asset;
// declared property getter: -(id)uuid;
// declared property getter: -(unsigned)thumbnailIndex;
// declared property getter: -(id)fileURLs;
// declared property getter: -(id)objectIDURI;
-(id)description;
-(void)dealloc;
-(id)initWithObjectIDURI:(id)objectIDURI fileURLs:(id)urls thumbnailIndex:(unsigned)index uuid:(id)uuid;
@end

