/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SWRunWorkoutObserver.h"

@class NSArray, NSMutableArray;

@interface SWIntervalSnapshotObserver : XXUnknownSuperclass <SWRunWorkoutObserver> {
	NSMutableArray* _snapshots;
	unsigned _timeIntervalInSeconds;
	float _distanceIntervalInMiles;
	float _calorieInterval;
	unsigned _previousTimeSnapshotIndex;
	unsigned _previousDistanceSnapshotIndex;
	unsigned _previousCalorieSnapshotIndex;
}
@property(readonly, assign, nonatomic) NSArray* snapshots;	// @dynamic
-(void)adjustSnapshotsForDistanceScaleFactor:(float)distanceScaleFactor;
-(void)observeRunWorkoutUserEvent:(id)event userEvent:(id)event2;
-(void)observeRunWorkoutStateChange:(id)change oldState:(id)state newState:(id)state3;
-(void)observeRunWorkoutControllerDataChange:(id)change elapsedTime:(unsigned)time pace:(float)pace distance:(float)distance calories:(float)calories location:(id)location;
// declared property getter: -(id)snapshots;
-(void)dealloc;
-(id)initWithCalorieInterval:(float)calorieInterval;
-(id)initWithDistanceIntervalInMiles:(float)miles;
-(id)initWithTimeIntervalInSeconds:(unsigned)seconds;
-(id)_init;
@end

