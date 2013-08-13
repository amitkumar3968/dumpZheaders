/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLPhotoBakedThumbnailsDelegate.h"
#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary, PLPhotoLibrary;

@interface PLBakedVideoFilesCacheCreator : XXUnknownSuperclass <PLPhotoBakedThumbnailsDelegate> {
	BOOL _cancelPostProcessing;
	NSLock* _cancellationLock;
	NSMutableDictionary* _optionsDictionary;
@private
	PLPhotoLibrary* photoLibrary;
}
@property(retain, nonatomic) PLPhotoLibrary* photoLibrary;	// @synthesize
// declared property setter: -(void)setPhotoLibrary:(id)library;
// declared property getter: -(id)photoLibrary;
-(void)_removeOldAlbumVideosBakedThumbnails;
-(id)_pathToVideosMetadataFile;
-(void)_createNewVideoCachedFiles;
-(void)_garbageCollectCachedFiles;
-(void)decorateThumbnail:(id)thumbnail inContext:(CGContextRef)context;
-(void)createBakedThumbnailsForVideo:(id)video;
-(void)_addBakedThumbnailsForVideo:(id)video toCollection:(id)collection sourceFormat:(int)format bakedFormats:(id)formats;
-(void)cancel;
-(BOOL)recreateCachedFilesIfNecessary;
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)photoLibrary;
@end

