/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Collection.h"


@interface ML3Composer : ML3Collection {
}
+(id)artworkCacheIDProperty;
+(id)trackForeignPersistentID;
+(id)propertiesForGroupingKey;
+(id)foreignPropertyForProperty:(id)property entityClass:(Class)aClass;
+(id)allProperties;
+(id)predisambiguatedProperties;
+(id)defaultOrderingProperties;
+(int)revisionTrackingCode;
+(id)databaseTable;
+(void)initialize;
-(void)updateRepresentativeItem:(id)item inLibrary:(id)library withArtworkCacheID:(id)artworkCacheID;
-(void)updateTrackValues:(id)values;
@end

