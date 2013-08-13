/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATXPCConnection, NSMutableArray, NSObject;
@protocol ATConnectionDelegate;

@interface ATConnection : XXUnknownSuperclass {
	ATXPCConnection* _connection;
	NSObject<ATConnectionDelegate>* _delegate;
	BOOL _registerForStatus;
	NSMutableArray* _registeredDataclasses;
	int _atcRunningToken;
	BOOL _atcRunning;
}
@property(retain, nonatomic) NSObject<ATConnectionDelegate>* delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)dealloc;
-(id)init;
-(BOOL)isSyncing:(BOOL*)syncing automatically:(BOOL*)automatically wirelessly:(BOOL*)wirelessly;
-(void)keepATCAlive:(BOOL)alive;
-(void)lowBatteryNotification;
-(void)dataMigrationFinished;
-(void)clearSyncData;
-(void)cancelSync;
-(void)requestSyncForLibrary:(id)library;
-(void)purgePartialAsset:(id)asset forDataclass:(id)dataclass;
-(void)prioritizeAsset:(id)asset forDataclass:(id)dataclass;
-(void)registerForAssetProgressForDataclass:(id)dataclass;
-(void)unregisterForStatus;
-(void)registerForStatus;
-(void)_sendStatusRegistration;
-(void)_sendMessage:(id)message info:(id)info reply:(id)reply;
-(id)_connection;
-(void)_resetConnection;
-(void)_handleMessage:(id)message;
@end
