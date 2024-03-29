/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AXNotificationHandler : XXUnknownSuperclass {
	NSString* _notificationName;
	id _target;
	id _dispatcher;
	unsigned _observerIdentifier;
	BOOL _valid;
}
@property(copy, nonatomic, setter=_setDispatcher:) id _dispatcher;
@property(retain, nonatomic, setter=_setTarget:) id _target;	// @synthesize
@property(retain, nonatomic, setter=_setNotificationName:) NSString* _notificationName;	// @synthesize
@property(readonly, assign, nonatomic, getter=isValid) BOOL valid;	// @synthesize=_valid
+(id)_safelyGetObserverForIdentifier:(unsigned)identifier;
+(void)_safelyRemoveObserverForIdentifier:(unsigned)identifier;
+(unsigned)_safelyRegisterObserver:(id)observer;
// declared property setter: -(void)_setTarget:(id)target;
// declared property getter: -(id)_target;
// declared property setter: -(void)_setNotificationName:(id)name;
// declared property getter: -(id)_notificationName;
// declared property getter: -(BOOL)isValid;
-(void)_handleNotificationWithName:(id)name object:(const void*)object userInfo:(id)info;
-(void)processHandler:(SEL)handler;
-(void)_stopObserving;
-(void)_startObserving;
-(void)invalidate;
-(id)_notificationTypeDescription;
-(id)description;
// declared property setter: -(void)_setDispatcher:(id)dispatcher;
// declared property getter: -(id)_dispatcher;
-(void)dealloc;
-(id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher startObserving:(BOOL)observing;
-(id)initWithNotificationName:(id)notificationName target:(id)target dispatcher:(id)dispatcher;
-(id)initWithNotificationName:(id)notificationName target:(id)target handler:(SEL)handler;
@end

