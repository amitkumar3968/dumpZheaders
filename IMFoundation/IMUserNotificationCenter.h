/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMFoundation-Structs.h"

@class NSMutableDictionary;

@interface IMUserNotificationCenter : XXUnknownSuperclass {
	NSMutableDictionary* _identifierToIMUserNotificationQueueMap;
	NSMutableDictionary* _identifierToListenerQueueMap;
	NSMutableDictionary* _identifierToBlockQueueMap;
	NSMutableDictionary* _identifierToRunLoopSourcesMap;
	NSMutableDictionary* _identifierToCFUserNotificationMap;
}
@property(retain, nonatomic) NSMutableDictionary* identifierToCFUserNotificationMap;	// @synthesize=_identifierToCFUserNotificationMap
@property(retain, nonatomic) NSMutableDictionary* identifierToRunLoopSourcesMap;	// @synthesize=_identifierToRunLoopSourcesMap
@property(retain, nonatomic) NSMutableDictionary* identifierToBlockQueueMap;	// @synthesize=_identifierToBlockQueueMap
@property(retain, nonatomic) NSMutableDictionary* identifierToListenerQueueMap;	// @synthesize=_identifierToListenerQueueMap
@property(retain, nonatomic) NSMutableDictionary* identifierToIMUserNotificationQueueMap;	// @synthesize=_identifierToIMUserNotificationQueueMap
+(id)sharedInstance;
// declared property setter: -(void)setIdentifierToCFUserNotificationMap:(id)cfuserNotificationMap;
// declared property getter: -(id)identifierToCFUserNotificationMap;
// declared property setter: -(void)setIdentifierToRunLoopSourcesMap:(id)runLoopSourcesMap;
// declared property getter: -(id)identifierToRunLoopSourcesMap;
// declared property setter: -(void)setIdentifierToBlockQueueMap:(id)blockQueueMap;
// declared property getter: -(id)identifierToBlockQueueMap;
// declared property setter: -(void)setIdentifierToListenerQueueMap:(id)listenerQueueMap;
// declared property getter: -(id)identifierToListenerQueueMap;
// declared property setter: -(void)setIdentifierToIMUserNotificationQueueMap:(id)imuserNotificationQueueMap;
// declared property getter: -(id)identifierToIMUserNotificationQueueMap;
-(void)removeAllListeners;
-(void)removeListener:(id)listener;
-(unsigned)countForIdentifier:(id)identifier;
-(void)addUserNotification:(id)notification listener:(id)listener completionHandler:(id)handler;
-(void)addUserNotification:(id)notification listener:(id)listener;
-(void)_handleUserNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;
-(void)_displayNextUserNotificationForIdentifier:(id)identifier;
-(void)_cancelActiveUserNotificationForIdentifier:(id)identifier;
-(void)_enqueueBlock:(id)block forIdentifier:(id)identifier;
-(void)_enqueueListener:(id)listener forIdentifier:(id)identifier;
-(void)_enqueueUserNotification:(id)notification forIdentifier:(id)identifier;
-(id)_dequeueBlockForIdentifier:(id)identifier;
-(id)_dequeueListenerForIdentifier:(id)identifier;
-(id)_dequeueUserNotificationForIdentifier:(id)identifier;
-(id)_frontBlockForIdentifier:(id)identifier;
-(id)_frontListenerForIdentifier:(id)identifier;
-(id)_frontUserNotificationForIdentifier:(id)identifier;
-(void)dealloc;
@end
