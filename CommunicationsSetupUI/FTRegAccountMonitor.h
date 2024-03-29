/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CommunicationsSetupUI-Structs.h"

@class NSArray, FTRegConnectionHandler, IMServiceImpl;

@interface FTRegAccountMonitor : XXUnknownSuperclass {
@private
	int _serviceType;
	IMServiceImpl* _service;
	NSArray* _accounts;
	FTRegConnectionHandler* _connectionHandler;
	XXStruct_xv3RjA _monitorFlags;
}
@property(retain, nonatomic) IMServiceImpl* service;	// @synthesize=_service
@property(assign, nonatomic) int serviceType;	// @synthesize=_serviceType
@property(readonly, assign, nonatomic) NSArray* activeAccounts;	// @synthesize=_accounts
// declared property getter: -(id)activeAccounts;
// declared property setter: -(void)setServiceType:(int)type;
// declared property getter: -(int)serviceType;
// declared property setter: -(void)setService:(id)service;
// declared property getter: -(id)service;
-(void)_handleDaemonConnected:(id)connected;
-(void)_handleAccountNotification:(id)notification;
-(void)_stopListeningForNotifications;
-(void)_startListeningForNotifications;
-(BOOL)_shouldHandleAccountNofication:(id)nofication;
-(void)_updateAccountState:(BOOL)state;
-(id)_activeAccounts;
-(id)logName;
-(void)dealloc;
-(id)initWithServiceType:(int)serviceType;
@end

