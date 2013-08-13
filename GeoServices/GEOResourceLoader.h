/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray, NSMutableArray;
@protocol GEOResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceLoader : XXUnknownSuperclass {
@private
	unsigned _tileGroupIdentifier;
	NSString* _uniqueTileGroupIdentifier;
	NSString* _directory;
	NSMutableArray* _resourcesToLoad;
	id _completionHandler;
	id _progressHandler;
	int _numberOfDownloadsInProgress;
	NSMutableArray* _loadedResources;
	BOOL _canceled;
	NSString* _baseURLString;
	unsigned _maxConcurrentLoads;
	id<GEOResourceLoaderDelegate> _delegate;
}
@property(readonly, assign, nonatomic) NSArray* loadedResources;	// @synthesize=_loadedResources
@property(readonly, assign, nonatomic) NSString* uniqueTileGroupIdentifier;	// @synthesize=_uniqueTileGroupIdentifier
@property(readonly, assign, nonatomic) unsigned tileGroupIdentifier;	// @synthesize=_tileGroupIdentifier
@property(assign, nonatomic) id<GEOResourceLoaderDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(id)loadedResources;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(id)uniqueTileGroupIdentifier;
// declared property getter: -(unsigned)tileGroupIdentifier;
-(void)cancel;
-(BOOL)_writeResourceToDisk:(id)disk;
-(void)_loadNextResource;
-(void)startWithProgressHandler:(id)progressHandler completionHandler:(id)handler;
-(void)_addNecessaryResourcesForType:(int)type;
-(void)_cleanup;
-(void)dealloc;
-(id)initWithTileGroupIdentifier:(unsigned)tileGroupIdentifier uniqueIdentifier:(id)identifier targetDirectory:(id)directory baseURLString:(id)string isFirstLoad:(BOOL)load;
@end
