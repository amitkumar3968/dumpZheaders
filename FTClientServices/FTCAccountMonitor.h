/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class IMServiceImpl, NSArray, NSString, FTCConnectionHandler;

@interface FTCAccountMonitor : XXUnknownSuperclass {
	int _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	NSString* _name;
	NSString* _logName;
	FTCConnectionHandler* _connectionHandler;
	BOOL _listeningForNotifications;
}
@property(copy, nonatomic, setter=_setLogName:) NSString* _logName;	// @synthesize
@property(copy, nonatomic) NSString* name;	// @synthesize=_name
@property(retain, nonatomic) IMServiceImpl* service;	// @synthesize=_service
@property(readonly, assign, nonatomic) BOOL isConnectedToDaemon;	// @dynamic
@property(readonly, assign, nonatomic) NSArray* activeAccounts;	// @synthesize=_accounts
@property(assign, nonatomic) int serviceType;	// @synthesize=_serviceType
// declared property setter: -(void)_setLogName:(id)name;
// declared property getter: -(id)_logName;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property getter: -(id)activeAccounts;
// declared property setter: -(void)setServiceType:(int)type;
// declared property getter: -(int)serviceType;
// declared property setter: -(void)setService:(id)service;
// declared property getter: -(id)service;
-(void)_handleCapabilitiesChanged:(id)changed;
-(void)_handleDaemonConnected:(id)connected;
-(void)_handleAccountNotification:(id)notification;
-(void)_stopListeningForNotifications;
-(void)_startListeningForNotifications;
-(BOOL)_shouldHandleAccountNofication:(id)nofication;
-(id)activeAccounts:(BOOL)accounts;
-(id)activeAccounts:(BOOL)accounts requireConnection:(BOOL)connection;
-(void)_updateAccountState:(BOOL)state;
-(void)_updateAccountState:(BOOL)state blockUntilConnected:(BOOL)connected;
-(id)_activeAccounts;
-(BOOL)serviceIsSupported;
// declared property getter: -(BOOL)isConnectedToDaemon;
-(void)dealloc;
-(id)initWithServiceType:(int)serviceType name:(id)name;
@end

