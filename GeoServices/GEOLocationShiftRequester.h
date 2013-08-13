/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable, NSLock;

@interface GEOLocationShiftRequester : XXUnknownSuperclass {
@private
	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	NSMapTable* _providers;
}
+(id)sharedRequester;
-(Class)classForProviderID:(short)providerID;
-(void)registerProvider:(Class)provider;
-(void)cancelRequest:(id)request;
-(void)startRequest:(id)request finished:(id)finished networkActivity:(id)activity error:(id)error;
-(void)dealloc;
-(id)init;
@end
