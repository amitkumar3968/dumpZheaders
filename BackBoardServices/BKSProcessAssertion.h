/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BKSSignal, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSProcessAssertion : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _queue;
	NSObject<OS_xpc_object>* _serverConnection;
	BOOL _valid;
	BKSSignal* _invalidationSignal;
	int _pid;
	NSString* _bundleIdentifier;
	NSString* _name;
	unsigned _flags;
	unsigned _reason;
	id _invalidationHandler;
	id _acquisitionHandler;
}
@property(copy, nonatomic) id acquisitionHandler;	// @dynamic
@property(copy, nonatomic) id invalidationHandler;	// @dynamic
@property(readonly, assign, nonatomic) unsigned reason;	// @dynamic
@property(assign, nonatomic) unsigned flags;	// @dynamic
@property(readonly, assign, nonatomic) BOOL valid;	// @dynamic
@property(copy, nonatomic) NSString* name;	// @dynamic
+(id)NameForReason:(unsigned)reason;
-(void)queue_notifyAssertionAcquired:(BOOL)acquired;
-(void)queue_updateAssertion;
-(void)queue_acquireAssertion;
-(void)queue_registerWithServer;
-(void)queue_invalidate:(BOOL)invalidate;
-(void)invalidate;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property setter: -(void)setFlags:(unsigned)flags;
// declared property getter: -(unsigned)flags;
// declared property setter: -(void)setInvalidationHandler:(id)handler;
// declared property getter: -(id)invalidationHandler;
// declared property setter: -(void)setAcquisitionHandler:(id)handler;
// declared property getter: -(id)acquisitionHandler;
-(void)setReason:(unsigned)reason;
// declared property getter: -(unsigned)reason;
-(void)setValid:(BOOL)valid;
// declared property getter: -(BOOL)valid;
-(id)initWithPID:(int)pid flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;
-(id)initWithBundleIdentifier:(id)bundleIdentifier flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;
-(void)dealloc;
-(id)init;
@end

