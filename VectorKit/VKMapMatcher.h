/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "GEOTileSourceClient.h"

@class NSMutableArray, VKTileSource;
@protocol VKMapMatcherDelegate;

__attribute__((visibility("hidden")))
@interface VKMapMatcher : XXUnknownSuperclass <GEOTileSourceClient> {
@private
	VKTileSource* _tileSource;
	NSMutableArray* _currentTiles;
	id<VKMapMatcherDelegate> _delegate;
}
@property(assign, nonatomic) id<VKMapMatcherDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(id)matchLocation:(id)location;
-(void)tileSource:(id)source didFailToLoadTileKey:(const GEOTileKey*)loadTileKey error:(id)error;
-(void)tileSource:(id)source declinedToLoadTileKey:(const GEOTileKey*)loadTileKey;
-(void)tileSourceDidFinishWithNetwork:(id)tileSource;
-(void)tileSourceWillGoToNetwork:(id)tileSource;
-(void)tileSource:(id)source didFetchData:(id)data forKey:(const GEOTileKey*)key;
-(id)tilesAround:(XXStruct_zYrK5D)around radius:(double)radius;
-(void)dealloc;
-(id)initWithTileSource:(id)tileSource;
@end
