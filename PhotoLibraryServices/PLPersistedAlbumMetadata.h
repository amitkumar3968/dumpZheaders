/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableOrderedSet, NSURL, NSString, PLManagedAlbum, NSNumber;

@interface PLPersistedAlbumMetadata : XXUnknownSuperclass {
@private
	NSString* _title;
	NSString* _uuid;
	NSNumber* _kind;
	NSMutableOrderedSet* _assetUUIDs;
	BOOL _allowsOverwite;
	PLManagedAlbum* _managedAlbum;
	NSURL* _metadataURL;
}
@property(retain, nonatomic) NSURL* metadataURL;	// @synthesize=_metadataURL
@property(retain, nonatomic) PLManagedAlbum* managedAlbum;	// @synthesize=_managedAlbum
@property(assign, nonatomic) BOOL allowsOverwite;	// @synthesize=_allowsOverwite
@property(retain, nonatomic) NSMutableOrderedSet* assetUUIDs;	// @synthesize=_assetUUIDs
@property(retain, nonatomic) NSNumber* kind;	// @synthesize=_kind
@property(retain, nonatomic) NSString* uuid;	// @synthesize=_uuid
@property(retain, nonatomic) NSString* title;	// @synthesize=_title
+(BOOL)isValidPath:(id)path;
// declared property setter: -(void)setMetadataURL:(id)url;
// declared property getter: -(id)metadataURL;
// declared property setter: -(void)setManagedAlbum:(id)album;
// declared property getter: -(id)managedAlbum;
// declared property setter: -(void)setAllowsOverwite:(BOOL)overwite;
// declared property getter: -(BOOL)allowsOverwite;
// declared property setter: -(void)setAssetUUIDs:(id)uuids;
// declared property getter: -(id)assetUUIDs;
// declared property setter: -(void)setKind:(id)kind;
// declared property getter: -(id)kind;
// declared property setter: -(void)setUuid:(id)uuid;
// declared property getter: -(id)uuid;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)title;
-(void)_saveMetadata;
-(void)_readMetadata;
-(id)description;
-(BOOL)containsAsset:(id)asset;
-(id)albumFromDataInManagedObjectContext:(id)managedObjectContext;
-(void)removePersistedAlbumData;
-(void)persistAlbumData;
-(id)initWithTitle:(id)title uuid:(id)uuid kind:(id)kind assetUUIDs:(id)uuids;
-(id)initWithPersistedDataAtPath:(id)path;
-(id)initWithPLGenericAlbum:(id)plgenericAlbum;
-(void)dealloc;
-(id)init;
@end

