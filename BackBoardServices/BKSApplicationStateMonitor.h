/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BKSSignal, NSObject, NSArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSApplicationStateMonitor : XXUnknownSuperclass {
@private
	NSObject<OS_xpc_object>* _connection;
	BKSSignal* _invalidationSignal;
	id _handler;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_dispatch_queue>* _messageHandlingQueue;
}
@property(copy, nonatomic) NSArray* interestedBundleIDs;	// @dynamic
@property(assign, nonatomic) unsigned interestedStates;	// @dynamic
@property(copy, nonatomic) id handler;	// @dynamic
-(void)queue_connectionWasInvalidated;
-(void)queue_invalidate;
-(void)queue_reregister;
-(void)queue_handleMessage:(id)message;
-(void)queue_registerWithServer;
-(void)queue_updateInterestedStates:(BOOL)states;
-(void)queue_updateInterestedStates;
-(void)queue_setInterestedStates:(unsigned)states;
-(void)queue_setInterestedBundleIDs:(id)ids;
-(void)queue_setHandler:(id)handler;
-(void)invalidate;
-(id)bundleInfoValueForKey:(id)key PID:(int)pid;
-(BOOL)isNewsstandAppWakeQuotaReached:(id)reached;
-(unsigned)mostElevatedApplicationStateForPID:(int)pid;
-(unsigned)applicationStateForApplication:(id)application;
-(void)applicationInfoForPID:(int)pid completion:(id)completion;
-(void)applicationInfoForApplication:(id)application completion:(id)completion;
-(void)updateInterestedBundleIDs:(id)ids states:(unsigned)states;
-(void)updateInterestedStates:(unsigned)states;
-(void)updateInterestedBundleIDs:(id)ids;
// declared property getter: -(unsigned)interestedStates;
// declared property setter: -(void)setInterestedStates:(unsigned)states;
// declared property getter: -(id)interestedBundleIDs;
// declared property setter: -(void)setInterestedBundleIDs:(id)ids;
// declared property getter: -(id)handler;
// declared property setter: -(void)setHandler:(id)handler;
-(void)dealloc;
-(id)initWithBundleIDs:(id)bundleIDs states:(unsigned)states;
-(id)init;
@end

