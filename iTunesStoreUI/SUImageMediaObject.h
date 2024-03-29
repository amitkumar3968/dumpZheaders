/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUMediaObject.h"

@class UIImage;

@interface SUImageMediaObject : SUMediaObject {
}
@property(readonly, assign, nonatomic) UIImage* pickedImage;
-(id)_thumbnailImageForImageData:(id)imageData size:(float)size orientation:(int)orientation;
-(void)saveToLibraryWithCompletionBlock:(id)completionBlock;
-(id)newThumbnailImageWithMaximumSize:(float)maximumSize;
-(id)newInputSource;
// declared property getter: -(id)pickedImage;
-(id)inputSourceMIMEType;
-(id)_fullSizeImage;
@end

