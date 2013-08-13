/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSNetServiceBrowser, NSThread;

@interface ATWakeupCall : XXUnknownSuperclass <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSMutableArray* _hostLibraryIdentifiers;
	NSMutableArray* _resolvingHosts;
	NSMutableArray* _resolvedLibraryIdentifiers;
	NSMutableArray* _resolvedLibraryServices;
	id _completion;
	NSNetServiceBrowser* _browser;
	NSThread* _wakeThread;
	BOOL _searching;
	int _resolving;
	int _hostsToResolve;
}
+(id)wakeableHostsWithCompletion:(id)completion;
+(void)sendWakeupCallToAllSyncHosts;
+(void)sendWakeupCall:(id)call;
-(void)dealloc;
-(void)wake;
-(void)stop;
-(void)netService:(id)service didNotResolve:(id)resolve;
-(void)netServiceDidResolveAddress:(id)netService;
-(void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;
-(void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;
-(void)netServiceBrowser:(id)browser didNotSearch:(id)search;
-(void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;
@end
