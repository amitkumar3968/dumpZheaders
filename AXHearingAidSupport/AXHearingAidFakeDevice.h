/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

#import "AXHearingAidDevice.h"

@class NSString, NSMutableArray;

@interface AXHearingAidFakeDevice : AXHearingAidDevice {
	NSMutableArray* _leftFakePrograms;
	NSMutableArray* _rightFakePrograms;
@private
	int updateCount;
	BOOL _connected;
	int _type;
}
@property(assign, nonatomic) int updateCount;	// @synthesize
@property(assign, nonatomic) BOOL isConnecting;
@property(assign, nonatomic) BOOL isPaired;
@property(assign, nonatomic) float leftBatteryLevel;
@property(assign, nonatomic) float rightBatteryLevel;
@property(retain, nonatomic) NSString* rightUUID;
@property(retain, nonatomic) NSString* leftUUID;
@property(retain, nonatomic) NSString* model;
@property(retain, nonatomic) NSString* manufacturer;
@property(retain, nonatomic) NSString* name;
@property(assign, nonatomic) BOOL connected;	// @synthesize=_connected
@property(assign, nonatomic) int type;	// @synthesize=_type
@property(readonly, assign, getter=isConnected) BOOL connected;	// converted property
// declared property setter: -(void)setType:(int)type;
// declared property getter: -(int)type;
// declared property setter: -(void)setConnected:(BOOL)connected;
// declared property getter: -(BOOL)connected;
// declared property setter: -(void)setUpdateCount:(int)count;
// declared property getter: -(int)updateCount;
-(id)selectedPrograms;
-(void)selectProgram:(id)program;
-(BOOL)didLoadRequiredProperties;
-(BOOL)didLoadBasicProperties;
-(id)persistentRepresentation;
-(void)writeInt:(unsigned char)int toPeripheral:(id)peripheral forProperty:(int)property;
-(void)reload;
-(id)rightPrograms;
-(id)leftPrograms;
-(void)createPrograms;
// declared property getter: -(BOOL)isPaired;
// converted property getter: -(BOOL)isConnected;
-(BOOL)rightAvailable;
-(BOOL)leftAvailable;
-(void)disconnect;
-(void)connect;
-(id)modelForType;
-(id)manufacturerForType;
-(void)sendUpdates;
-(void)dealloc;
-(id)initWithDeviceType:(int)deviceType;
@end
