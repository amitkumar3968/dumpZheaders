/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "NSObject.h"


@protocol PLRootLibraryNavigationController <NSObject>
-(BOOL)commentIsAvailableForNavigation:(id)navigation inAsset:(id)asset;
-(BOOL)assetIsAvailableForNavigation:(id)navigation inAlbum:(NSObject*)album;
-(BOOL)albumIsAvailableForNavigation:(NSObject*)navigation;
-(BOOL)contentModeIsAvailableForNavigation:(int)navigation;
-(void)navigateToComment:(id)comment forAsset:(id)asset animated:(BOOL)animated;
-(void)navigateToRevealAsset:(id)revealAsset inAlbum:(NSObject*)album animated:(BOOL)animated;
-(void)navigateToAsset:(id)asset inAlbum:(NSObject*)album animated:(BOOL)animated;
-(void)navigateToRevealAlbum:(NSObject*)revealAlbum initiallyHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)navigateToAlbum:(NSObject*)album animated:(BOOL)animated completion:(id)completion;
-(void)navigateToContentMode:(int)contentMode animated:(BOOL)animated completion:(id)completion;
@end

