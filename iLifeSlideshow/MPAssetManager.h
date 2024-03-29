/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MPAssetManager : XXUnknownSuperclass {
}
+(void)releaseSharedManager;
+(id)sharedManager;
+(char*)convertCGImageToBufferUsingDataProvider:(CGImageRef)bufferUsingDataProvider;
+(char*)convertCGImageToBufferUsingRGBDevice:(CGImageRef)bufferUsingRGBDevice;
+(char*)convertCGImageToBuffer:(CGImageRef)buffer;
+(FaceCoreAPI*)faceCoreAPI;
-(double)posterTimeForAssetAtPath:(id)path;
-(id)absolutePathFromPath:(id)path;
-(id)regionsOfInterestForAssetAtPath:(id)path;
-(id)regionsOfInterestForAsset:(CGImageRef)asset;
-(unsigned)mediaTypeForAssetAtPath:(id)path;
-(BOOL)isAssetAtPathASupportedAudio:(id)pathASupportedAudio;
-(BOOL)isAssetAtPathASupportedMovie:(id)pathASupportedMovie;
-(BOOL)isAssetAtPathASupportedImage:(id)pathASupportedImage;
-(id)locationHierarchyForAssetAtPath:(id)path;
-(id)altitudeForAssetAtPath:(id)path;
-(id)longitudeForAssetAtPath:(id)path;
-(id)latitudeForAssetAtPath:(id)path;
-(id)keywordsForAssetAtPath:(id)path;
-(id)creationDateForAssetAtPath:(id)path;
-(CGSize)resolutionForAssetAtPath:(id)path;
-(double)stopTimeForAssetAtPath:(id)path;
-(double)startTimeForAssetAtPath:(id)path;
-(double)durationForAssetAtPath:(id)path;
-(void)gatherMetadataForAssetAtPath:(id)path;
-(void)setSavesToDisk:(BOOL)disk;
-(void)dealloc;
-(id)init;
-(id)prepareInfoForAssetsAtPaths:(id)paths;
-(void)removeRegionOfInterestAtIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;
-(void)setForceOrderForRegionsOfInterest:(BOOL)interest forPath:(id)path saveToCache:(BOOL)cache;
-(void)moveRegionOfInterestWithPath:(id)path fromIndex:(int)index toIndex:(int)index3 saveToCache:(BOOL)cache;
-(void)updateRegionOfInterestAtIndex:(int)index atPath:(id)path to:(CGRect)to saveToCache:(BOOL)cache;
-(void)updateROIInfoAtIndex:(int)index atPath:(id)path to:(id)to saveToCache:(BOOL)cache;
-(void)setRegionOfInterest:(CGRect)interest atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;
-(void)setROIInfo:(id)info atIndex:(int)index forAssetAtPath:(id)path saveToCache:(BOOL)cache;
-(void)addRegionOfInterest:(CGRect)interest forAssetAtPath:(id)path saveToCache:(BOOL)cache;
-(void)addROIInfo:(id)info forAssetAtPath:(id)path saveToCache:(BOOL)cache;
-(CGRect)regionOfInterestAtIndex:(int)index forAssetAtPath:(id)path;
-(id)roiInfoAtIndex:(int)index forAssetAtPath:(id)path;
-(void)tryToSaveCache;
-(void)cacheAttributes:(id)attributes forPath:(id)path;
@end

