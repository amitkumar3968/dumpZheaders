/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import "SoftwareUpdateServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SUAssetSupport : XXUnknownSuperclass {
}
+(id)assetDownloadOptionsFromMetadata:(id)metadata priority:(int)priority;
+(id)assetDownloadOptionsForDocumentation;
+(id)defaultAssetDownloadOptionsWithPriority:(int)priority;
+(id)localURLForAsset:(MobileAsset*)asset;
+(id)_createPossibleDocumentationAssetsFromSUAssetState:(id)suassetState;
+(MobileAsset*)createUpdateAssetUsingProductType:(id)type productBuild:(id)build productVersion:(id)version releaseType:(id)type4;
+(MobileAsset*)createDefaultUpdateAsset;
+(void)purgeSoftwareUpdateAsset:(MobileAsset*)asset includingDocumentation:(BOOL)documentation;
+(void)cleanupAsset:(MobileAsset*)asset withCompletion:(id)completion;
+(void)cleanupAsset:(MobileAsset*)asset;
+(void)cancelDownloadIfNecessary:(MobileAsset*)necessary;
+(id)tryCreateDocumentationFromAsset:(MobileAsset*)asset;
+(id)createDescriptorFromAsset:(MobileAsset*)asset state:(id)state documentationAssetCandidates:(id*)candidates;
+(id)tryCreateDescriptorFromAsset:(MobileAsset*)asset documentationAssetCandidates:(id*)candidates;
+(id)tryCreateDescriptorFromAsset:(MobileAsset*)asset;
+(id)tryCreateDescriptorFromCachedAsset;
@end

