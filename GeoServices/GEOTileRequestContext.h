/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GEOTileKeyList, GEOTileRequester;

__attribute__((visibility("hidden")))
@interface GEOTileRequestContext : XXUnknownSuperclass {
@private
	GEOTileKeyList* _fullList;
	GEOTileKeyList* _networkList;
	GEOTileRequester* _tileRequester;
}
@property(retain, nonatomic) GEOTileRequester* tileRequester;	// @synthesize=_tileRequester
@property(retain, nonatomic) GEOTileKeyList* networkList;	// @synthesize=_networkList
@property(retain, nonatomic) GEOTileKeyList* fullList;	// @synthesize=_fullList
// declared property setter: -(void)setTileRequester:(id)requester;
// declared property getter: -(id)tileRequester;
// declared property setter: -(void)setNetworkList:(id)list;
// declared property getter: -(id)networkList;
// declared property setter: -(void)setFullList:(id)list;
// declared property getter: -(id)fullList;
-(void)dealloc;
@end

