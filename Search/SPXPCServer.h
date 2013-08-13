/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

@interface SPXPCServer : XXUnknownSuperclass {
@private
	NSObject<OS_xpc_object>* _conn;
	NSMutableSet* _connections;
	NSMutableDictionary* _handlerMap;
	NSObject<OS_dispatch_queue>* _connectionsQueue;
	id _disconnectHandler;
	id _shutdownHandler;
	id _defaultMessageHandler;
	NSObject<OS_dispatch_queue>* _eventQueue;
	NSObject<OS_dispatch_queue>* _timerQueue;
	NSObject<OS_dispatch_source>* _idleTimerSource;
	BOOL _timerHasFiredSinceLastMessage;
	BOOL _timeoutPending;
}
@property(copy, nonatomic) id shutdownHandler;	// @synthesize=_shutdownHandler
@property(copy, nonatomic) id disconnectHandler;	// @synthesize=_disconnectHandler
@property(copy, nonatomic) id defaultMessageHandler;	// @synthesize=_defaultMessageHandler
// declared property setter: -(void)setShutdownHandler:(id)handler;
// declared property getter: -(id)shutdownHandler;
// declared property setter: -(void)setDisconnectHandler:(id)handler;
// declared property getter: -(id)disconnectHandler;
// declared property setter: -(void)setDefaultMessageHandler:(id)handler;
// declared property getter: -(id)defaultMessageHandler;
-(void)setIdleTimerInterval:(double)interval;
-(void)_rescheduleIdleTimerSourceWithInterval:(double)interval;
-(BOOL)_doingWork;
-(void)_resetMessageFlag;
-(BOOL)_runShutdownHandler;
-(void)setHandlerForMessageName:(id)messageName handler:(id)handler;
-(void)dealloc;
-(id)initListenerWithServiceName:(id)serviceName;
-(void)startListening;
-(id)initListenerWithServiceName:(id)serviceName onQueue:(id)queue;
-(void)_handleNewConnection:(id)connection;
-(id)_handlerForMessageName:(id)messageName;
-(id)_highAvailabilityQueue;
-(BOOL)connectionsAreActive;
@end
