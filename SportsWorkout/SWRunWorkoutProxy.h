/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

@interface SWRunWorkoutProxy : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) NSString* currentSongName;	// @dynamic
@property(readonly, assign, nonatomic) int musicSelection;	// @dynamic
@property(readonly, assign, nonatomic) BOOL shouldControlMusic;	// @dynamic
@property(readonly, assign, nonatomic) NSString* powerSongName;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasPowerSong;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasEverStarted;	// @dynamic
@property(readonly, assign, nonatomic) NSDictionary* workoutData;	// @dynamic
@property(readonly, assign, nonatomic) NSString* workoutState;	// @dynamic
@property(readonly, assign, nonatomic) NSString* sensorSearchState;	// @dynamic
@property(readonly, assign, nonatomic) float goal;	// @dynamic
@property(readonly, assign, nonatomic) NSString* presetGoal;	// @dynamic
@property(readonly, assign, nonatomic) NSString* goalType;	// @dynamic
+(id)newProxy;
+(void)initialize;
-(void)endSeeking;
-(void)beginSeekingBackward;
-(void)beginSeekingForward;
-(void)selectNextSong;
-(void)selectPreviousSong;
-(void)playMusic;
-(void)pauseMusic;
-(void)goToNowPlaying;
-(void)playPowerSong;
-(void)playOnDemandPrompt;
-(void)endWorkout;
-(void)pauseWorkout;
-(void)activateWorkout;
-(void)prepareToActivateWorkout;
@end

