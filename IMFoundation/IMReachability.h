/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSString;
@protocol IMReachabilityDelegate;

@interface IMReachability : XXUnknownSuperclass {
	id<IMReachabilityDelegate> _delegate;
	BOOL _gettingFlags;
	unsigned _flags;
	NSString* _description;
	void* _reachabilityRef;
}
@property(assign, nonatomic) BOOL gettingFlags;	// @synthesize=_gettingFlags
@property(retain, nonatomic) NSString* reachabilityDescription;	// @synthesize=_description
@property(assign, nonatomic) void* reachabilityRef;	// @synthesize=_reachabilityRef
@property(readonly, assign, nonatomic) BOOL connectionRequired;
@property(assign, nonatomic) id<IMReachabilityDelegate> delegate;	// @synthesize=_delegate
@property(assign, nonatomic) unsigned flags;	// @synthesize=_flags
@property(readonly, retain) NSString* description;	// converted property
+(id)reachabilityWithLocalAddress:(id)localAddress remoteAddress:(id)address;
+(id)reachabilityWithRemoteAddress:(id)remoteAddress;
+(id)reachabilityWithHostName:(id)hostName;
// declared property setter: -(void)setReachabilityRef:(void*)ref;
// declared property getter: -(void*)reachabilityRef;
// declared property setter: -(void)setReachabilityDescription:(id)description;
// declared property getter: -(id)reachabilityDescription;
// declared property setter: -(void)setFlags:(unsigned)flags;
// declared property setter: -(void)setGettingFlags:(BOOL)flags;
// declared property getter: -(BOOL)gettingFlags;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(BOOL)connectionRequired;
// declared property getter: -(unsigned)flags;
-(void)_forceGetFlagsIfNecessary;
-(void)_handleCallbackForSCNetworkReachability:(SCNetworkReachabilityRef)scnetworkReachability;
// converted property getter: -(id)description;
-(void)dealloc;
-(id)initWithLocalSocketAddress:(id)localSocketAddress remoteSocketAddress:(id)address delegate:(id)delegate;
-(id)initWithRemoteHost:(id)remoteHost delegate:(id)delegate;
-(id)_initWithReachabilityRef:(SCNetworkReachabilityRef)reachabilityRef description:(id)description delegate:(id)delegate;
@end

