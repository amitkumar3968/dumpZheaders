/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (PLPhotoLibraryAdditions)
-(void*)PL_imageContents;
-(id)newImageRotatedByDegrees:(float)degrees;
-(id)newImageWithOrientation:(int)orientation;
@end

@interface XXUnknownSuperclass (PhotoLibraryAdditions)
-(BOOL)removeDirectoryAtPathIfEmpty:(id)pathIfEmpty ancestors:(int)ancestors;
-(BOOL)removeItemsAtPaths:(id)paths;
-(id)pathsAtDirectory:(id)directory withNameFamily:(id)nameFamily;
-(BOOL)directoryExistsAtPath:(id)path;
-(id)tmpFileForVideoTranscode;
-(id)makeUniqueDirectoryWithPath:(id)path;
@end

@interface XXUnknownSuperclass (PLManagedObjectContext)
-(void)pl_refresh;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(id)pl_indexSetByExtractingIndexes:(id)indexes;
-(id)pl_shortDescription;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(void)pl_extractIndexes:(id)indexes;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(void)pl_addObjectIfNotNil:(id)aNil;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(unsigned)pl_countOfObjectsPassingTest:(id)objectsPassingTest;
@end

@interface XXUnknownSuperclass (Additions)
-(id)pl_arrayOfUniqueObjectsNotInOrderedSet:(id)orderedSet;
-(unsigned)pl_countOfObjectsPassingTest:(id)objectsPassingTest;
-(id)pl_shortDescription;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(BOOL)pl_isSortedUsingComparator:(id)comparator;
-(unsigned)pl_indexOfObjectIdenticalTo:(id)to;
-(id)pl_shortDescription;
@end

@interface XXUnknownSuperclass (PLAdditions)
-(void)pl_removeObjectsInArray:(id)array;
-(void)pl_addObjectsFromArray:(id)array;
-(BOOL)pl_replaceObjectsAtIndexes:(id)indexes wihtObjectsIfDifferent:(id)different;
@end

@interface XXUnknownSuperclass (PLPasteboardAdditions)
-(BOOL)pl_containsAssets;
-(id)pl_assetsInPhotoLibrary:(id)photoLibrary;
-(void)pl_setAssets:(id)assets;
-(void)pl_setAsset:(id)asset;
@end

@interface XXUnknownSuperclass (PhotoLibraryAdditions)
-(void)pl_adviceDoNotNeed;
-(void)pl_adviceWillNeed;
-(unsigned)pl_advisoryLength;
@end
