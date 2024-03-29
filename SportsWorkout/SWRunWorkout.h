/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SWRunSensorPacketObserver.h"
#import "SWWorkout.h"

@class SWPaceModel, SWRunSensor, NSData;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {
	SWRunSensor* _sensor;
	SWPaceModel* _paceModel;
	BOOL _hasStarted;
	float _weightInLbs;
	BOOL _isCalibration;
}
@property(readonly, assign, nonatomic) float maximumCalibrationDistanceMiles;	// @dynamic
@property(readonly, assign, nonatomic) float minimumCalibrationDistanceMiles;	// @dynamic
@property(readonly, assign, nonatomic) BOOL canBeUsedForRunCalibration;	// @dynamic
@property(readonly, assign, nonatomic) BOOL canBeUsedForWalkCalibration;	// @dynamic
@property(copy, nonatomic) NSData* paceModelParameters;	// @dynamic
@property(assign, nonatomic) BOOL isCalibration;	// @synthesize=_isCalibration
@property(readonly, assign, nonatomic) BOOL isWalk;	// @dynamic
@property(assign, nonatomic) float weightInLbs;	// @synthesize=_weightInLbs
@property(readonly, assign, nonatomic) SWRunSensor* sensor;	// @synthesize=_sensor
+(id)workoutWithSensor:(id)sensor;
// declared property setter: -(void)setIsCalibration:(BOOL)calibration;
// declared property getter: -(BOOL)isCalibration;
// declared property setter: -(void)setWeightInLbs:(float)lbs;
// declared property getter: -(float)weightInLbs;
// declared property getter: -(id)sensor;
-(void)sensor:(id)sensor didReceivePacketPayload:(const char*)payload timestamp:(unsigned long)timestamp;
-(void)pauseWorkout;
-(void)activateWorkout;
-(BOOL)recalibrateWithAdjustedDistanceMiles:(float)adjustedDistanceMiles;
-(BOOL)calibrateWithDistanceMiles:(float)distanceMiles forWalk:(BOOL)walk;
-(void)resetCalibration;
// declared property getter: -(float)maximumCalibrationDistanceMiles;
// declared property getter: -(float)minimumCalibrationDistanceMiles;
// declared property getter: -(BOOL)canBeUsedForRunCalibration;
// declared property getter: -(BOOL)canBeUsedForWalkCalibration;
// declared property getter: -(id)paceModelParameters;
// declared property setter: -(void)setPaceModelParameters:(id)parameters;
-(id)workoutData;
// declared property getter: -(BOOL)isWalk;
-(void)dealloc;
-(id)initWithSensor:(id)sensor;
@end

