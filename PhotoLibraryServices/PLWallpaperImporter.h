/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSData, PLManagedObjectContext, PLPhotoLibrary;

@interface PLWallpaperImporter : XXUnknownSuperclass {
@private
	NSData* _wallpaperFileHash;
	NSArray* _allWallpaperURLs;
	PLPhotoLibrary* photoLibrary;
}
@property(readonly, assign, nonatomic) PLManagedObjectContext* managedObjectContext;
@property(retain, nonatomic) PLPhotoLibrary* photoLibrary;	// @synthesize
@property(readonly, assign, nonatomic) NSArray* allWallpaperURLs;
@property(readonly, retain) NSData* wallpaperFileHash;	// converted property
+(id)posterImageURL;
+(void)importWallpaperAssetsIntoPhotoLibrary:(id)library;
// declared property setter: -(void)setPhotoLibrary:(id)library;
// declared property getter: -(id)photoLibrary;
// declared property getter: -(id)managedObjectContext;
-(void)dealloc;
-(id)init;
-(void)addWallpaperURLsForModel:(id)model toURLs:(id)urls;
// declared property getter: -(id)allWallpaperURLs;
-(id)allExistingWallpaperAssets;
-(void)importAll;
-(void)deleteAll;
-(void)updateAsNeeded;
// converted property getter: -(id)wallpaperFileHash;
-(id)initWithPhotoLibrary:(id)photoLibrary;
@end

