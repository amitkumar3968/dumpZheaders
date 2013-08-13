/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLLoadRequestKey, NSObject;
@protocol OS_dispatch_queue;

@interface PLImageCacheList : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _isolation;
	unsigned _length;
	unsigned _lastFailLocation;
	id* _keys;
	unsigned* _keyHashes;
	id* _images;
	PLLoadRequestKey* _dummy[1];
}
+(id)newImageCacheList;
-(void)removeImageForKey:(id)key;
-(id)imageForKey:(id)key;
-(void)setImage:(id)image forKey:(id)key;
-(void)dealloc;
-(id)_init;
-(id)init;
@end
