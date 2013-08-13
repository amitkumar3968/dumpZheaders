/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPLRUDictionary;

@interface SUImageCache : XXUnknownSuperclass {
	CPLRUDictionary* _dictionary;
}
-(void)removeAllCachedImages;
-(id)imageForURL:(id)url dataProvider:(id)provider;
-(void)addImage:(id)image forURL:(id)url dataProvider:(id)provider;
-(void)dealloc;
-(id)initWithMaximumCapacity:(int)maximumCapacity;
-(id)init;
@end

