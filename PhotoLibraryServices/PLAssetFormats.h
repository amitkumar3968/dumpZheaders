/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface PLAssetFormats : XXUnknownSuperclass {
}
+(BOOL)isAlbumVideoPath:(id)path;
+(BOOL)transformForImage:(CGImageRef)image captureOrientation:(int)orientation format:(int)format sizeInOut:(CGSize*)anOut contextSizeOut:(CGSize*)anOut5 transformOut:(CGAffineTransform*)anOut6;
+(BOOL)formatWasSynced:(int)synced;
+(BOOL)formatHasJPEGFile:(int)file;
+(BOOL)formatIsCropped:(int)cropped;
+(unsigned)maxLongSideForFullSizeFormat:(int)fullSizeFormat;
+(unsigned)minShortSideForFullSizeFormat:(int)fullSizeFormat;
+(unsigned)desiredLongSideForFullSizeFormat:(int)fullSizeFormat;
+(CGSize)sizeForFormat:(int)format;
@end
