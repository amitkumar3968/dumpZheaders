/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "CBCentralManagerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CBCentralManager, NSLock, NSObject, AXTimer, NSMutableArray, CBUUID;
@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : XXUnknownSuperclass <CBCentralManagerDelegate> {
@private
	CBCentralManager* _bluetoothManager;
	NSLock* _centralRequestsLock;
	BOOL _isScanning;
	AXTimer* _invalidateDevicesTimer;
	NSObject<OS_dispatch_queue>* _bluetoothCentralQueue;
	NSMutableArray* _availableSearchBlocks;
	NSMutableArray* _connectedSearchBlocks;
	NSMutableArray* _updateDeviceBlocks;
	CBUUID* _leaHearingAidUUID;
	CBUUID* _disUUID;
	CBUUID* _manufacturerUUID;
	NSMutableArray* availablePeripherals;
	NSMutableArray* loadedDevices;
	NSMutableArray* connectedDevices;
	NSMutableArray* centralRequestBlocks;
	NSMutableArray* _persistentDevices;
}
@property(retain, nonatomic) NSMutableArray* connectedSearchBlocks;	// @synthesize=_connectedSearchBlocks
@property(retain, nonatomic) NSMutableArray* availableSearchBlocks;	// @synthesize=_availableSearchBlocks
@property(retain, nonatomic) NSMutableArray* centralRequestBlocks;	// @synthesize
@property(retain, nonatomic) NSMutableArray* updateDeviceBlocks;	// @synthesize=_updateDeviceBlocks
@property(retain, nonatomic) NSMutableArray* persistentDevices;	// @synthesize=_persistentDevices
@property(retain, nonatomic) NSMutableArray* connectedDevices;	// @synthesize
@property(retain, nonatomic) NSMutableArray* availablePeripherals;	// @synthesize
@property(retain) NSMutableArray* loadedDevices;	// @synthesize
@property(readonly, assign) BOOL isScanning;	// converted property
@property(readonly, retain) CBUUID* leaHearingAidUUID;	// converted property
@property(readonly, retain) CBUUID* disUUID;	// converted property
@property(readonly, retain) CBUUID* manufacturerUUID;	// converted property
+(void)searchForConnectedDevicesWithCompletion:(id)completion;
+(void)hearingAidDeviceUpdate:(id)update;
+(void)searchForAvailableDevicesWithCompletion:(id)completion;
+(id)sharedController;
// declared property setter: -(void)setPersistentDevices:(id)devices;
// declared property getter: -(id)persistentDevices;
// declared property setter: -(void)setUpdateDeviceBlocks:(id)blocks;
// declared property getter: -(id)updateDeviceBlocks;
// declared property setter: -(void)setConnectedSearchBlocks:(id)blocks;
// declared property getter: -(id)connectedSearchBlocks;
// declared property setter: -(void)setAvailableSearchBlocks:(id)blocks;
// declared property getter: -(id)availableSearchBlocks;
// declared property setter: -(void)setCentralRequestBlocks:(id)blocks;
// declared property getter: -(id)centralRequestBlocks;
// declared property setter: -(void)setConnectedDevices:(id)devices;
// declared property getter: -(id)connectedDevices;
// declared property setter: -(void)setLoadedDevices:(id)devices;
// declared property getter: -(id)loadedDevices;
// declared property setter: -(void)setAvailablePeripherals:(id)peripherals;
// declared property getter: -(id)availablePeripherals;
-(void)pairedHearingAidsDidChange;
-(void)centralManager:(id)manager didDisconnectPeripheral:(id)peripheral error:(id)error;
-(void)centralManager:(id)manager didFailToConnectPeripheral:(id)connectPeripheral error:(id)error;
-(void)centralManager:(id)manager didConnectPeripheral:(id)peripheral;
-(void)centralManager:(id)manager didDiscoverPeripheral:(id)peripheral advertisementData:(id)data RSSI:(id)rssi;
-(void)centralManager:(id)manager didRetrieveConnectedPeripherals:(id)peripherals;
-(void)centralManager:(id)manager didRetrievePeripherals:(id)peripherals;
-(void)centralManagerDidUpdateState:(id)centralManager;
-(void)sendRequestToCentralManager:(id)centralManager;
-(id)modelNumberUUID;
-(id)firmwareVersionUUID;
-(id)hardwareVersionUUID;
// converted property getter: -(id)manufacturerUUID;
// converted property getter: -(id)disUUID;
// converted property getter: -(id)leaHearingAidUUID;
// converted property getter: -(BOOL)isScanning;
-(void)deviceDidFinishLoading:(id)device;
-(void)device:(id)device didSubsumeSlave:(id)slave;
-(void)deviceDidUpdateProperty:(id)device;
-(void)stopSearching;
-(BOOL)isBluetoothAvailable;
-(void)disconnectFromPeripheral:(id)peripheral;
-(void)connectToPeripheral:(id)peripheral;
-(void)searchForConnectedDevices;
-(id)sortByRSSI:(id)rssi;
-(void)searchForAvailableDevices;
-(id)hearingAidForPeripheral:(id)peripheral;
-(id)hearingAidsForUUID:(id)uuid;
-(id)fakeHearingAids;
-(void)dealloc;
-(id)init;
@end

