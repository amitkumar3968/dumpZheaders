/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PLAlbumChangeNotification.h"

@class NSMutableSet, PLInFlightAssetsAlbum, NSOrderedSet;

@interface PLInFlightAssetsAlbumChangeNotification : PLAlbumChangeNotification {
@private
	PLInFlightAssetsAlbum* _album;
	PLAlbumChangeNotification* _backingNotification;
	NSOrderedSet* _oldOIDs;
	NSMutableSet* _uniquedOIDs;
	BOOL _keyAssetDidChange;
}
@property(readonly, assign, nonatomic) NSOrderedSet* oldOIDs;	// @synthesize=_oldOIDs
@property(readonly, assign, nonatomic) PLAlbumChangeNotification* backingNotification;	// @synthesize=_backingNotification
@property(readonly, assign, nonatomic) PLInFlightAssetsAlbum* album;	// @synthesize=_album
@property(readonly, assign) BOOL keyAssetDidChange;	// converted property
+(id)notificationForDerivedObject:(id)derivedObject priorChangeState:(id)state forBackingObjectNotification:(id)backingObjectNotification;
// declared property getter: -(id)oldOIDs;
// declared property getter: -(id)backingNotification;
// declared property getter: -(id)album;
-(id)_changedObjects;
-(BOOL)_getOldSet:(id*)set newSet:(id*)set2;
-(id)_diffDescription;
-(id)description;
// converted property getter: -(BOOL)keyAssetDidChange;
-(BOOL)titleDidChange;
-(id)object;
-(void)dealloc;
-(id)initWithInFlightAssetsAlbum:(id)flightAssetsAlbum priorChangeState:(id)state albumChangeNotification:(id)notification;
@end
