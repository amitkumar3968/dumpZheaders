/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISSingleton.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ISDevice : XXUnknownSuperclass <ISSingleton> {
@private
	unsigned _daemonLaunchCount;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSString* _guid;
	double _lastFreeSpaceRequest;
}
@property(readonly, assign) NSString* systemName;
@property(readonly, assign) NSString* serialNumber;
@property(readonly, assign) NSString* hardwareName;
@property(readonly, assign) NSString* guid;
@property(readonly, assign) NSString* deviceName;
+(id)sharedInstance;
+(void)setSharedInstance:(id)instance;
-(int)_deviceClass;
-(id)supportedOfferDeviceForDevices:(id)devices;
-(void)requestFreeSpace:(unsigned long long)space atPath:(id)path withOptions:(id)options completionBlock:(id)block;
// declared property getter: -(id)systemName;
// declared property getter: -(id)serialNumber;
// declared property getter: -(id)hardwareName;
// declared property getter: -(id)guid;
// declared property getter: -(id)deviceName;
-(id)copyPurchaseValidationContext;
-(id)copyProtocolConditionalContext;
-(BOOL)checkCapabilities:(id)capabilities withMismatches:(id*)mismatches;
-(BOOL)takePowerAssertion:(id)assertion;
-(BOOL)releasePowerAssertion:(id)assertion;
-(void)dealloc;
-(id)init;
@end

