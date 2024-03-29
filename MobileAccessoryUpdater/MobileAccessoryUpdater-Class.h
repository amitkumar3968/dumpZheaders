/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

#import "MobileAccessoryUpdater-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol MobileAccessoryUpdaterDelegate;

@interface MobileAccessoryUpdater : XXUnknownSuperclass {
@private
	id<MobileAccessoryUpdaterDelegate> _delegate;
	NSString* _bundleIdentifier;
	NSString* _clientIdentifier;
	char* _cClientIdentifier;
	xpc_connection_s* _connection;
	dispatch_queue_s* _sessionQueue;
	dispatch_queue_s* _callbackQueue;
	NSString* _activeFilter;
	int _notifyToken;
}
-(void)dealloc;
-(void)unregister;
-(BOOL)setLastRemoteFindDate:(id)date;
-(void)performNextStepWithOptions:(id)options;
-(void)performStep:(id)step withOptions:(id)options;
-(const char*)getActiveDeviceClassCString;
-(id)getActiveDeviceClass;
-(BOOL)setActiveDeviceClass:(id)aClass;
-(id)queryNextStep:(id*)step;
-(BOOL)sendMessageForCommand:(int)command withOptions:(id)options requiresFilter:(BOOL)filter;
-(BOOL)doesOperationCodeRequireFilter:(int)filter;
-(int)getOperationCodeFromName:(id)name;
-(void)handleInboundEvent:(void*)event;
-(BOOL)createSession;
-(BOOL)registerForIdentifier:(id)identifier isGroupIdentifier:(BOOL)identifier2;
-(void)createConnection;
-(BOOL)registerForBSDNotifications;
-(id)initWithPluginIdentifier:(id)pluginIdentifier isGroupIdentifier:(BOOL)identifier delegate:(id)delegate options:(id)options error:(id*)error;
-(id)initWithPluginIdentifier:(id)pluginIdentifier delegate:(id)delegate options:(id)options error:(id*)error;
-(id)initWithGroupIdentifer:(id)groupIdentifer delegate:(id)delegate options:(id)options error:(id*)error;
@end

