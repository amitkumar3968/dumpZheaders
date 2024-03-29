/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSThread, GEOTileKeyList;
@protocol GEOTileRequesterDelegate;

@interface GEOTileRequester : XXUnknownSuperclass {
	GEOTileKeyList* _keyList;
	id<GEOTileRequesterDelegate> _delegate;
	id _context;
	NSThread* _thread;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	BOOL _requireWiFi;
}
@property(assign, nonatomic) BOOL requireWiFi;	// @synthesize=_requireWiFi
@property(retain, nonatomic) NSString* bundleVersion;	// @synthesize=_bundleVersion
@property(retain, nonatomic) NSString* bundleIdentifier;	// @synthesize=_bundleIdentifier
@property(retain, nonatomic) NSThread* thread;	// @synthesize=_thread
@property(retain, nonatomic) id context;	// @synthesize=_context
@property(retain, nonatomic) id<GEOTileRequesterDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) GEOTileKeyList* keyList;	// @synthesize=_keyList
+(BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;
+(XXStruct_nbUehC*)newExpiringTilesets;
+(unsigned)expiringTilesetsCount;
+(unsigned char)tileProviderIdentifier;
// declared property setter: -(void)setRequireWiFi:(BOOL)fi;
// declared property getter: -(BOOL)requireWiFi;
// declared property setter: -(void)setBundleVersion:(id)version;
// declared property getter: -(id)bundleVersion;
// declared property setter: -(void)setBundleIdentifier:(id)identifier;
// declared property getter: -(id)bundleIdentifier;
// declared property setter: -(void)setContext:(id)context;
// declared property getter: -(id)context;
// declared property setter: -(void)setThread:(id)thread;
// declared property getter: -(id)thread;
// declared property getter: -(id)keyList;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)dealloc;
-(unsigned)tileSetForKey:(const GEOTileKey*)key;
-(void)cancel;
-(void)start;
-(id)initWithKeyList:(id)keyList;
@end

