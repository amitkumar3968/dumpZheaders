/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

#import "SoftwareUpdateServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSHashTable;

@interface SUNetworkMonitor : XXUnknownSuperclass {
@private
	SCNetworkReachabilityRef _reachability;
	NSHashTable* _observers;
	int _currentNetworkType;
	BOOL _roaming;
}
@property(assign, getter=isCellularRoaming) BOOL cellularRoaming;	// converted property
@property(assign) int currentNetworkType;	// converted property
+(void)setHoldsWiFiAssertion:(BOOL)assertion;
+(BOOL)holdsWiFiAssertion;
+(id)sharedInstance;
-(void)_operatorBundleChanged;
-(void)_carrierBundleChanged;
-(BOOL)_isCurrentlyRoaming;
-(BOOL)isCellularDataRoamingEnabled;
// converted property setter: -(void)setCellularRoaming:(BOOL)roaming;
-(int)_networkTypeFromCurrentCellularData;
-(int)_networkTypeFromFlags:(unsigned)flags;
-(void)_initNetworkObservation;
// converted property setter: -(void)setCurrentNetworkType:(int)type;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
// converted property getter: -(BOOL)isCellularRoaming;
-(BOOL)isNetworkTypeCellular:(int)cellular;
// converted property getter: -(int)currentNetworkType;
-(void)dealloc;
-(id)init;
@end

