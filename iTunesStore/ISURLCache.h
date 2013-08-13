/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ISURLCacheConfiguration, NSURLCache;

@interface ISURLCache : XXUnknownSuperclass {
@private
	NSURLCache* _cache;
	ISURLCacheConfiguration* _configuration;
}
@property(readonly, assign, nonatomic) unsigned memoryCapacity;
@property(readonly, assign, nonatomic) unsigned diskCapacity;
@property(readonly, assign, nonatomic) unsigned currentMemoryUsage;
@property(readonly, assign, nonatomic) unsigned currentDiskUsage;
@property(readonly, assign) NSString* persistentIdentifier;
+(id)cacheDirectoryPath;
-(void)storeCachedResponse:(id)response forRequest:(id)request;
-(void)saveMemoryCacheToDisk;
-(void)removeCachedResponseForRequest:(id)request;
-(void)removeAllCachedResponses;
-(void)purgeMemoryCache;
// declared property getter: -(unsigned)memoryCapacity;
// declared property getter: -(unsigned)diskCapacity;
// declared property getter: -(unsigned)currentMemoryUsage;
// declared property getter: -(unsigned)currentDiskUsage;
-(id)cachedResponseForRequest:(id)request;
-(void)reloadWithCacheConfiguration:(id)cacheConfiguration;
// declared property getter: -(id)persistentIdentifier;
-(void)dealloc;
-(id)initWithCacheConfiguration:(id)cacheConfiguration;
-(id)init;
@end

