/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMConnectionMonitorDelegate.h"
#import "IMFoundation-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "IMSystemMonitorListener.h"

@class NSString, IMConnectionMonitor, NSArray;

@interface NetworkChangeNotifier : XXUnknownSuperclass <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
	SCDynamicStoreRef _store;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _myIP;
	NSArray* _myIPs;
	IMConnectionMonitor* _connectionMonitor;
	BOOL _lastPostedNetworkUp;
}
@property(retain, nonatomic) NSArray* myIPs;	// @synthesize=_myIPs
@property(retain, nonatomic) NSString* myIP;	// @synthesize=_myIP
@property(retain, nonatomic) IMConnectionMonitor* connectionMonitor;	// @synthesize=_connectionMonitor
@property(assign, nonatomic) BOOL lastPostedNetworkUp;	// @synthesize=_lastPostedNetworkUp
@property(assign, nonatomic) CFRunLoopSourceRef runLoopSource;	// @synthesize=_runLoopSource
@property(assign, nonatomic) SCDynamicStoreRef store;	// @synthesize=_store
@property(readonly, assign, nonatomic) SCDynamicStoreRef getDynamicStore;
@property(readonly, assign, nonatomic) NSArray* myIPAddresses;
@property(readonly, assign, nonatomic) NSString* myIPAddress;
@property(readonly, assign, nonatomic) NSString* myGatewayAddress;
@property(readonly, assign, nonatomic) BOOL isNetworkUp;
+(void)disableNotifications;
+(BOOL)enableNotifications;
+(id)sharedInstance;
// declared property setter: -(void)setLastPostedNetworkUp:(BOOL)up;
// declared property getter: -(BOOL)lastPostedNetworkUp;
// declared property setter: -(void)setConnectionMonitor:(id)monitor;
// declared property getter: -(id)connectionMonitor;
// declared property setter: -(void)setMyIPs:(id)ips;
// declared property getter: -(id)myIPs;
// declared property setter: -(void)setMyIP:(id)ip;
// declared property getter: -(id)myIP;
// declared property setter: -(void)setRunLoopSource:(CFRunLoopSourceRef)source;
// declared property getter: -(CFRunLoopSourceRef)runLoopSource;
// declared property setter: -(void)setStore:(SCDynamicStoreRef)store;
// declared property getter: -(SCDynamicStoreRef)store;
// declared property getter: -(BOOL)isNetworkUp;
-(void)connectionMonitorDidUpdate:(id)connectionMonitor;
-(unsigned)linkQualityForInterfaceType:(unsigned)interfaceType;
-(int)linkQualityValueForInterface:(id)interface;
-(int)linkQualityValueForInterfaceType:(unsigned)interfaceType;
// declared property getter: -(SCDynamicStoreRef)getDynamicStore;
-(void)_clearSharedDNSService;
// declared property getter: -(id)myIPAddress;
// declared property getter: -(id)myGatewayAddress;
// declared property getter: -(id)myIPAddresses;
-(void)dealloc;
-(id)init;
-(BOOL)_listenForChanges;
-(void)systemDidWake;
-(void)systemWillSleep;
-(void)_clearIPCache;
@end

