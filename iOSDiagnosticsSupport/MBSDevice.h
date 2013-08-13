/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSData, NSString;

@interface MBSDevice : XXUnknownSuperclass {
@private
	NSMutableDictionary* _deviceInfoDictionary;
	NSData* _logData;
	NSString* _logFileName;
}
@property(retain) NSString* logFileName;	// @synthesize=_logFileName
@property(retain) NSData* logData;	// @synthesize=_logData
@property(retain) NSMutableDictionary* deviceInfoDictionary;	// @synthesize=_deviceInfoDictionary
// declared property setter: -(void)setLogFileName:(id)name;
// declared property getter: -(id)logFileName;
// declared property setter: -(void)setLogData:(id)data;
// declared property getter: -(id)logData;
// declared property setter: -(void)setDeviceInfoDictionary:(id)dictionary;
// declared property getter: -(id)deviceInfoDictionary;
-(BOOL)copyLogsToTempDirectory;
-(BOOL)createTempDirectory;
-(BOOL)collectLogs;
-(id)collectUbiquityData;
-(id)collectAggdData;
-(id)collectGasGaugeData;
-(id)collectBasicDeviceData;
-(BOOL)collectAllDeviceInformation;
-(void)dealloc;
@end

