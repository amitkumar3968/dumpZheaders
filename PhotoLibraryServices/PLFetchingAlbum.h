/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLAssetContainerDisplayCount.h"
#import "_PLFetchingAlbum.h"

@class NSFetchRequest, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLAssetContainerDisplayCount> {
@private
	unsigned _countForDisplay;
	unsigned _photosCount;
	unsigned _videosCount;
	int _emptyState;
}
@property(readonly, assign, nonatomic) unsigned countForDisplay;
@property(retain, nonatomic) NSOrderedSet* fetchedAssets;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasAssetsCache;
@property(retain, nonatomic) NSFetchRequest* fetchRequest;
@property(retain) id keyAsset;	// converted property
@property(retain) id assets;	// converted property
+(BOOL)contextShouldIgnoreChangesForFetchRequest;
+(BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;
+(BOOL)contextShouldIgnoreChangesForFetchedAssets;
-(BOOL)mayHaveAssetsInCommon:(id)common;
-(id)fastPointerAccessSetForAssets:(id)assets;
// declared property getter: -(BOOL)hasAssetsCache;
-(void)updateSnapshotAndClearCaches:(id)caches;
// converted property setter: -(void)setKeyAsset:(id)asset;
// converted property getter: -(id)keyAsset;
-(void)batchFetchAssets:(id)assets;
-(BOOL)canPerformEditOperation:(int)operation;
-(unsigned)countForAssetsOfKind:(int)kind;
-(unsigned)_fetchedCountForAssetsOfKind:(int)kind;
-(BOOL)isEmpty;
// declared property getter: -(unsigned)countForDisplay;
-(unsigned)count;
-(id)mutableAssets;
// converted property setter: -(void)setAssets:(id)assets;
// converted property getter: -(id)assets;
-(id)primitiveAssets;
// declared property setter: -(void)setFetchRequest:(id)request;
// declared property getter: -(id)fetchRequest;
-(void)setupFetchRequest;
-(unsigned)batchSize;
-(void)didTurnIntoFault;
-(void)awakeFromInsert;
-(void)awakeFromFetch;
@end

