/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer;

@interface YTNetworkController : XXUnknownSuperclass {
	BOOL _registered;
	BOOL _isCellular;
	BOOL _isReachable;
	NSTimer* _notificationTimer;
	int _networkType;
}
@property(readonly, assign) int networkType;	// converted property
+(id)sharedNetworkController;
-(void)_checkForNetworkWithDataStatus:(id)dataStatus;
-(void)_carrierBundleChangeNotification:(id)notification;
-(BOOL)allowsHighQuality3GPlayback;
-(void)recheckNetwork;
-(BOOL)serviceIsReachable;
// converted property getter: -(int)networkType;
-(void)start;
-(void)_reachabilityChanged:(id)changed;
@end

