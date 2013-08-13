/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "_GEORegionalResourcesRequestDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSSet, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEORegionalResourcesLoader : XXUnknownSuperclass <_GEORegionalResourcesRequestDelegate> {
@private
	NSString* _targetDirectory;
	NSMutableSet* _resourceIdentifiersToLoad;
	NSMutableArray* _requests;
	BOOL _started;
	BOOL _allowsNetwork;
	NSString* _baseURLString;
	id _keyProgressHandler;
	id _listProgressHandler;
	id _completionHandler;
	id _errorHandler;
}
@property(assign, nonatomic) BOOL allowsNetwork;	// @synthesize=_allowsNetwork
@property(readonly, assign, nonatomic) NSSet* tileKeyLists;
// declared property setter: -(void)setAllowsNetwork:(BOOL)network;
// declared property getter: -(BOOL)allowsNetwork;
-(void)requestDidFinish:(id)request;
-(void)request:(id)request didFinishLoadForTileKey:(GEOTileKey)tileKey resourceIdentifiers:(id)identifiers;
-(void)cancelForTileKeys:(id)tileKeys;
-(void)startWithKeyProgressHandler:(id)keyProgressHandler listProgressHandler:(id)handler completionHandler:(id)handler3 errorHandler:(id)handler4;
-(void)_loadNextResource;
-(void)_handleCompletedResource:(id)resource;
-(id)_pathForResourceIdentifier:(id)resourceIdentifier;
-(void)addResourceIdentifiers:(id)identifiers forTileKeys:(id)tileKeys fromList:(id)list;
// declared property getter: -(id)tileKeyLists;
-(void)dealloc;
-(id)initWithTargetDirectory:(id)targetDirectory baseURLString:(id)string;
@end
