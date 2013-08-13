/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface SUWebImagePool : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	CFDictionaryRef _images;
	int _poolIdentifier;
}
+(id)_poolImageForURL:(id)url;
+(id)_poolImageForPoolIdentifier:(int)poolIdentifier imageIdentifier:(int)identifier;
+(void)removeWebImagePool:(id)pool;
+(id)imageForURL:(id)url;
+(void)addWebImagePool:(id)pool;
-(id)_poolImageForImageIdentifier:(int)imageIdentifier;
-(int)_poolIdentifier;
-(void)removeImageForIdentifier:(int)identifier;
-(id)imageURLForImageIdentifier:(int)imageIdentifier;
-(id)imageForImageIdentifier:(int)imageIdentifier;
-(id)addImage:(id)image withMIMEType:(id)mimetype identifier:(int)identifier;
-(void)dealloc;
-(id)init;
@end

