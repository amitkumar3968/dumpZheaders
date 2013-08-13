/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SUImageModifier : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) BOOL scalesImage;
// declared property getter: -(BOOL)scalesImage;
-(id)newImageForImage:(id)image;
-(CGRect)imageFrameForImage:(id)image currentFrame:(CGRect)frame finalSize:(CGSize)size;
-(CGSize)finalSizeForSize:(CGSize)size originalSize:(CGSize)size2;
-(void)drawBeforeImageForContext:(CGContextRef)context imageFrame:(CGRect)frame finalSize:(CGSize)size;
-(void)drawAfterImageForContext:(CGContextRef)context imageFrame:(CGRect)frame finalSize:(CGSize)size;
@end

