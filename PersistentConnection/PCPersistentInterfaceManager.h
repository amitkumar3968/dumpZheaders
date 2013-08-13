/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PersistentConnection-Structs.h"
#import "PCInterfaceUsabilityMonitorDelegate.h"

@class NSString, NSRecursiveLock, PCPersistentTimer, NSTimer, PCNonCellularUsabilityMonitor, PCWWANUsabilityMonitor;

@interface PCPersistentInterfaceManager : XXUnknownSuperclass <PCInterfaceUsabilityMonitorDelegate> {
	NSRecursiveLock* _lock;
	CFDictionaryRef _delegatesAndRunLoops;
	CFSetRef _WWANInterfaceAssertionDelegates;
	NSTimer* _WWANInterfaceAssertionDisableTimer;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCPersistentTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCPersistentTimer* _wakeOnWiFiDisableTimer;
	PCWWANUsabilityMonitor* _wwanMonitor;
	PCNonCellularUsabilityMonitor* _wifiMonitor;
	void* _ctServerConnection;
	void* _interfaceAssertion;
	void* _wifiManager;
	long _WWANContextIdentifier;
	NSString* _WWANInterfaceName;
	BOOL _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	BOOL _isWWANInterfaceDataActive;
	BOOL _isWWANInHomeCountry;
	BOOL _hasWWANStatusIndicator;
	BOOL _isPowerStateDetectionSupported;
	BOOL _isWWANInterfaceInProlongedHighPowerState;
	BOOL _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	int _wwanRSSI;
	BOOL _isInCall;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isWakeOnWiFiEnabled;
	BOOL _shouldOverrideOnCallBehavior;
}
@property(readonly, assign) BOOL areAllNetworkInterfacesDisabled;
@property(readonly, assign) BOOL isWWANInterfaceActivationPermitted;
@property(readonly, assign) BOOL isInCall;
@property(readonly, assign) BOOL isWWANInterfaceInProlongedHighPowerState;
@property(readonly, assign) BOOL isPowerStateDetectionSupported;
@property(readonly, assign, nonatomic) NSString* currentLinkQualityString;
@property(readonly, assign) BOOL isInternetReachable;
@property(readonly, assign) BOOL isWakeOnWiFiSupported;
@property(readonly, assign) BOOL isInternetReachableViaWiFi;
@property(readonly, assign) NSString* WWANInterfaceName;
@property(readonly, assign) BOOL doesWWANInterfaceExist;
@property(readonly, assign) BOOL isWWANBetterThanWiFi;
@property(readonly, assign) BOOL isWWANInHomeCountry;
@property(readonly, assign) BOOL isWWANInterfaceUp;
+(id)sharedInstance;
-(id)urlConnectionBoundToWWANInterfaceWithRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;
-(id)urlConnectionBoundToWWANInterface:(BOOL)wwaninterface withRequest:(id)request delegate:(id)delegate usesCache:(BOOL)cache maxContentLength:(long long)length startImmediately:(BOOL)immediately connectionProperties:(id)properties;
-(void)bindCFStreamToWWANInterface:(CFReadStreamRef)wwaninterface;
-(void)bindCFStream:(CFReadStreamRef)stream toWWANInterface:(BOOL)wwaninterface;
-(BOOL)_allowBindingToWWAN;
-(id)dhcpHalfLeaseExpirationDate;
-(id)dhcpT1RenewalDate;
-(void)_adjustWakeOnWiFiLocked;
-(void)_adjustWakeOnWiFi;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(void)enableWakeOnWiFi:(BOOL)fi forDelegate:(id)delegate;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(void)enableWiFiAutoAssociation:(BOOL)association forDelegate:(id)delegate;
-(void)_populateWakeOnWiFiCapabilityLocked;
-(void)_populateWakeOnWiFiCapability;
-(void)_createWiFiManager;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceAssertions;
-(BOOL)_wantsWWANInterfaceAssertion;
-(void)keepWWANInterfaceUp:(BOOL)up forDelegate:(id)delegate;
// declared property getter: -(BOOL)areAllNetworkInterfacesDisabled;
// declared property getter: -(BOOL)isWakeOnWiFiSupported;
-(BOOL)_isWiFiUsable;
// declared property getter: -(BOOL)isInternetReachableViaWiFi;
// declared property getter: -(BOOL)isInternetReachable;
-(BOOL)_isInternetReachableLocked;
// declared property getter: -(BOOL)isInCall;
// declared property getter: -(BOOL)isWWANInHomeCountry;
// declared property getter: -(BOOL)isWWANInterfaceActivationPermitted;
// declared property getter: -(BOOL)isWWANInterfaceInProlongedHighPowerState;
// declared property getter: -(BOOL)isPowerStateDetectionSupported;
// declared property getter: -(BOOL)doesWWANInterfaceExist;
// declared property getter: -(id)WWANInterfaceName;
// declared property getter: -(BOOL)isWWANInterfaceUp;
// declared property getter: -(BOOL)isWWANBetterThanWiFi;
-(void)_performCalloutsForSelectorValue:(id)selectorValue;
-(void)_scheduleCalloutsForSelector:(SEL)selector;
-(BOOL)_wifiIsPoorLinkQuality;
-(BOOL)_wwanIsPoorLinkQuality;
// declared property getter: -(id)currentLinkQualityString;
-(void)_updateWWANInterfaceUpState;
-(void)_updateWWANInterfaceUpStateLocked;
-(BOOL)_wwanLinkQualityBelowThresholdAndWoWAvailableLocked;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(void)_serverCallbackLocked:(id)locked info:(id)info;
-(void)_serverCallback:(id)callback info:(id)info;
-(void)handleMachMessage:(void*)message;
-(void)interfaceReachabilityChanged:(id)changed;
-(void)interfaceLinkQualityChanged:(id)changed previousLinkQuality:(int)quality;
-(void)_ctConnectionWasInvalidated;
-(void)_mainThreadDelayedInvalidation;
-(void)_createCTConnection;
-(void)removeDelegate:(id)delegate;
-(void)addDelegate:(id)delegate callbackRunLoop:(id)loop;
-(void)dealloc;
-(id)init;
@end
