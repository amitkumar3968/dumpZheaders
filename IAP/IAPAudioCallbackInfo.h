/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import "IAP-Structs.h"
#import <Foundation/NSException.h>

@class NSLock, CPDistributedNotificationCenter;

@interface IAPAudioCallbackInfo : NSException {
@private
	/*function-pointer*/ void* _deviceStateChangedCallback;
	void* _deviceStateChangedContext;
	/*function-pointer*/ void* _volumeChangedCallback;
	void* _volumeChangedContext;
	/*function-pointer*/ void* _pauseOnHeadphoneDisconnectChangedCallback;
	void* _pauseOnHeadphoneDisconnectChangedContext;
	/*function-pointer*/ void* _volumeControlSupportChangedCallback;
	void* _volumeControlSupportChangedContext;
	CPDistributedNotificationCenter* _dnCenter;
	CPDistributedNotificationCenter* _dnCenteriAP2;
	CFRunLoopRef _dnCenterRunLoop;
	NSLock* _lock;
}
+(id)sharedInstance;
-(void)_volumeControlSupportChanged:(id)changed;
-(void)_pauseOnHeadphoneDisconnectChanged:(id)changed;
-(void)_volumeChanged:(id)changed;
-(void)_deviceStateChanged:(id)changed;
-(void)startNotificationCenterOnRunLoop:(CFRunLoopRef)loop;
-(void)clearVolumeControlSupportChangedCallback;
-(void)setupVolumeControlSupportChangedCallback:(/*function-pointer*/ void*)callback withContext:(void*)context andRunLoop:(CFRunLoopRef)loop;
-(void)clearPauseOnHeadphoneDisconnectChangedCallback;
-(void)setupPauseOnHeadphoneDisconnectChangedCallback:(/*function-pointer*/ void*)callback withContext:(void*)context andRunLoop:(CFRunLoopRef)loop;
-(void)clearVolumeChangedCallback;
-(void)setupVolumeChangedCallback:(/*function-pointer*/ void*)callback withContext:(void*)context andRunLoop:(CFRunLoopRef)loop;
-(void)clearDeviceStateChangedCallback;
-(void)setupDeviceStateChangedCallback:(/*function-pointer*/ void*)callback withContext:(void*)context andRunLoop:(CFRunLoopRef)loop;
-(void)dealloc;
-(id)init;
@end

