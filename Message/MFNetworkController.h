/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSThread, NSLock, NSMutableArray, NSMutableSet;

@interface MFNetworkController : XXUnknownSuperclass {
	NSLock* _lock;
	CFRunLoopRef _rl;
	NSThread* _thread;
	NSMutableArray* _observers;
	SCNetworkReachabilityRef _reachability;
	unsigned _flags;
	SCDynamicStoreRef _store;
	CFRunLoopSourceRef _store_source;
	BOOL _dns;
	CTServerConnectionRef _telephony;
	NSMutableSet* _calls;
	long _interface;
	SCPreferencesRef _wiFiPreferences;
	BOOL _hasCellDataCapability;
	BOOL _hasWiFiCapability;
	BOOL _isWiFiEnabled;
	BOOL _isRoamingAllowed;
	BOOL _data;
}
+(id)networkAssertionWithIdentifier:(id)identifier;
+(id)sharedInstance;
-(void)removeNetworkObserver:(id)observer;
-(id)addNetworkObserverBlock:(id)block queue:(id)queue;
-(id)_networkAssertionWithIdentifier:(id)identifier;
-(void)_handleWiFiNotification:(unsigned)notification;
-(void)_handleNotification:(id)notification info:(id)info forConnection:(CTServerConnectionRef)connection;
-(void)_setDataStatus_nts:(id)nts;
-(void)_checkKeys:(id)keys forStore:(SCDynamicStoreRef)store;
-(void)_setFlags:(unsigned)flags forReachability:(SCNetworkReachabilityRef)reachability;
-(BOOL)inAirplaneMode;
-(BOOL)isOnWWAN;
-(BOOL)isFatPipe;
-(BOOL)isNetworkUp;
-(BOOL)_isNetworkUp_nts;
-(BOOL)isDataAvailable;
-(int)dataStatus;
-(void)invalidate;
-(void)dealloc;
-(void)_tearDownTelephony_nts;
-(void)_setUpTelephony_nts;
-(XXStruct_ny2fMB)_pollDataAndCallStatus_nts;
-(id)init;
@end
