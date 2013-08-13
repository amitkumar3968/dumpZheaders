/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSArray;

@interface SSItemImageCollection : XXUnknownSuperclass <NSCopying> {
@private
	NSArray* _itemImages;
}
@property(readonly, assign, nonatomic) NSArray* itemImages;	// @synthesize=_itemImages
// declared property getter: -(id)itemImages;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)_newImagesForDictionary:(id)dictionary;
-(id)_imagesForSize:(CGSize)size scale:(float)scale;
-(id)imagesForKind:(id)kind;
-(id)imagesForSize:(CGSize)size;
-(id)bestImageForSize:(CGSize)size;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithItemImages:(id)itemImages;
-(id)initWithImageCollection:(id)imageCollection;
@end

