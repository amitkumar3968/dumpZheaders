/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PCLoggingDelegate.h"
#import "PersistentConnection-Structs.h"

@class NSDate, NSString, NSTimer;

@interface PCPersistentTimer : XXUnknownSuperclass <PCLoggingDelegate> {
	double _fireTime;
	double _startTime;
	double _lastUpdateTime;
	double _minimumEarlyFireProportion;
	BOOL _triggerOnGMTChange;
	BOOL _disableSystemWaking;
	NSDate* _scheduledWakeDate;
	NSString* _serviceIdentifier;
	id _target;
	SEL _selector;
	id _userInfo;
	NSTimer* _preventSleepRunLoopTimer;
	NSTimer* _fireRunLoopTimer;
	unsigned _pmRootDomainConnect;
	unsigned _pmNotifier;
	IONotificationPortRef _pmNotificationPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	BOOL _sleepIsImminent;
	unsigned _powerAssertionID;
	id _timeChangeSource;
	BOOL _disallowInterfaceManagerUsage;
}
@property(readonly, assign, nonatomic) NSString* loggingIdentifier;	// @synthesize=_serviceIdentifier
@property(assign, nonatomic) BOOL disableSystemWaking;	// @synthesize=_disableSystemWaking
@property(assign, nonatomic) double minimumEarlyFireProportion;	// @synthesize=_minimumEarlyFireProportion
@property(readonly, retain) id userInfo;	// converted property
+(double)currentMachTimeInterval;
+(id)lastSystemWakeDate;
// declared property getter: -(id)loggingIdentifier;
// declared property getter: -(BOOL)disableSystemWaking;
// declared property getter: -(double)minimumEarlyFireProportion;
-(id)debugDescription;
-(double)_nextForcedAlignmentAbsoluteTime;
-(void)_setSignificantTimeChangeMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;
-(void)_significantTimeChange;
-(void)interfaceManagerInternetReachabilityChanged:(id)changed;
-(void)interfaceManagerWWANInterfaceChangedPowerState:(id)state;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;
-(void)_powerChangedMessageType:(unsigned)type notificationID:(void*)anId;
-(void)_setPowerMonitoringEnabledForRunLoop:(id)runLoop mode:(id)mode;
-(void)_fireTimerFired;
-(void)_preventSleepFired;
-(void)_updateTimers;
-(id)_earlyFireDate;
// converted property getter: -(id)userInfo;
-(BOOL)isValid;
-(void)invalidate;
-(void)scheduleInRunLoop:(id)runLoop inMode:(id)mode;
-(void)scheduleInRunLoop:(id)runLoop;
// declared property setter: -(void)setDisableSystemWaking:(BOOL)waking;
// declared property setter: -(void)setMinimumEarlyFireProportion:(double)proportion;
-(void)dealloc;
-(id)_initWithAbsoluteTime:(double)absoluteTime serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info triggerOnGMTChange:(BOOL)change;
-(id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info disallowInterfaceManagerUsage:(BOOL)usage;
-(id)initWithTimeInterval:(double)timeInterval serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;
-(id)initWithFireDate:(id)fireDate serviceIdentifier:(id)identifier target:(id)target selector:(SEL)selector userInfo:(id)info;
@end

