/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SportsWorkout-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSFileHandle;

@interface SWBluetoothMessageHandler : XXUnknownSuperclass {
	CFRunLoopRef _btRunLoop;
	CFRunLoopTimerRef _futureTimer;
	BOOL _shouldCancelBTThread;
	BOOL _isActive;
	BOOL _isActivating;
	BOOL _isConnecting;
	unsigned _btSensorDeviceCount;
	NSTimer* _multiSensorTimer;
	int _deviceVirtualType;
	unsigned _serviceMask;
	BTSessionImplRef _btSession;
	BTLocalDeviceImplRef _btLocalDevice;
	BTDiscoveryAgentImplRef _btDiscoveryAgent;
	BTDeviceImplRef _btSensorDevice;
	NSFileHandle* _btSensorDeviceInputHandle;
	BOOL _rssi;
}
@property(readonly, assign, nonatomic) BOOL rssi;	// @synthesize=_rssi
@property(readonly, assign) BOOL isActive;	// converted property
+(id)newMessageHandler;
// declared property getter: -(BOOL)rssi;
-(void)requestRSSI;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent deviceDidChange:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent didLoseDevice:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)_bluetoothDiscoveryAgent:(BTDiscoveryAgentImplRef)agent didFindDevice:(BTDeviceImplRef)device withAttributes:(unsigned)attributes;
-(void)_bluetoothDiscoveryAgentQueryDidEnd:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentQuery forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentQueryDidBegin:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentQuery forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentScanDidEnd:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentScan forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothDiscoveryAgentScanDidBegin:(BTDiscoveryAgentImplRef)_bluetoothDiscoveryAgentScan forDevice:(BTDeviceImplRef)device withResult:(int)result;
-(void)_bluetoothServicesDidIndicateServiceSpecificEvent:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothServicesDidDisconnect:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothServicesDidConnect:(unsigned)_bluetoothServices device:(BTDeviceImplRef)device forEvent:(unsigned)event withResult:(int)result;
-(void)_bluetoothLocalDeviceDiscoveryDidEnd:(BTLocalDeviceImplRef)_bluetoothLocalDeviceDiscovery withResult:(int)result;
-(void)_bluetoothLocalDeviceDiscoveryDidStart:(BTLocalDeviceImplRef)_bluetoothLocalDeviceDiscovery withResult:(int)result;
-(void)_retryConnectToDevice;
-(void)_bluetoothLocalDeviceDidChangeConnectionStatus:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangePairingStatus:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeConnectability:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeDiscoverability:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangeName:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothLocalDeviceDidChangePowerState:(BTLocalDeviceImplRef)_bluetoothLocalDevice withResult:(int)result;
-(void)_bluetoothSessionDidFail:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidTerminate:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidDetach:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_bluetoothSessionDidAttach:(BTSessionImplRef)_bluetoothSession withResult:(int)result;
-(void)_handleApplicationWillTerminateNotification:(id)_handleApplication;
-(void)_closeInputPort;
-(void)_openInputPort;
-(void)_handleDataAvailableNotification:(id)notification;
-(void)_disconnectFromDevice:(BTDeviceImplRef)device;
-(void)_connectToDevice:(BTDeviceImplRef)device;
-(void)_setDeviceForAddress:(XXStruct_BfdK7C)address;
-(void)_handleScanDidEnd;
-(void)_handleMultiSensorTimer:(id)timer;
-(void)_setPowerOn:(BOOL)on forLocalDeviceModule:(unsigned)localDeviceModule;
-(BOOL)_isPowerOnForLocalDeviceModule:(unsigned)localDeviceModule;
-(void)_setSensorDeviceVirtualType;
-(void)_destroyDiscoveryAgent;
-(void)_stopDiscoveryAgentScan;
-(void)_handleDeviceLost:(BTDeviceImplRef)lost;
-(void)_handleDeviceFound:(BTDeviceImplRef)found;
-(void)_getDiscoveredDevicesFromAgent;
-(void)_beginDiscoveryAgentScan;
-(void)_createDiscoveryAgent;
-(void)_clearServiceCallbacks;
-(void)_setupServiceCallbacks;
-(void)_clearLocalDeviceCallbacks;
-(void)_setupLocalDeviceCallbacks;
-(void)_clearLocalDevice;
-(void)_getLocalDevice;
-(void)_detachSession;
-(void)_attachToSession;
-(void)startReadingInput;
-(XXStruct_BfdK7C)deviceAddressForSensor;
-(BOOL)isSensorDeviceConnected;
-(void)cancelConnectToDevice;
-(void)connectToDevice:(int)device withAddress:(XXStruct_BfdK7C)address;
-(void)forgetSensorDevice;
-(BOOL)isSensorDeviceDiscovered;
-(void)beginDeviceDiscovery:(int)discovery serviceMask:(unsigned)mask;
-(void)deactivate;
-(void)activate;
// converted property getter: -(BOOL)isActive;
-(const char*)__btSessionName;
-(void)_cancelBTThread;
-(void)_btThreadMain;
-(id)init;
@end
