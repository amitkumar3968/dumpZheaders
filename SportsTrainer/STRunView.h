/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SportsTrainer-Structs.h"

@class SWRunWorkoutProxy, NSTimer, UIView, UIButton, UIImageView, NSString, STRunTimeLabel, STRunDistanceLabel, STRunPaceLabel, STRunCaloriesLabel, STRunProgressView, STAnimatableButton, STShadowLabel;
@protocol STRunViewDelegate;

@interface STRunView : XXUnknownSuperclass {
	id<STRunViewDelegate> _delegate;
	SWRunWorkoutProxy* _workoutProxy;
	NSTimer* _subsecondTimer;
	NSTimer* _workoutInfoTimer;
	double _elapsedWorkoutTime;
	double _estimatedElapsedWorkoutTime;
	double _lastWorkoutNotificationTime;
	UIView* _rotationContainer;
	int _orientation;
	int _interface;
	UIButton* _leftButton;
	UIButton* _rightButton;
	STAnimatableButton* _endWorkoutButton;
	UIButton* _previousTrackButton;
	UIButton* _nextTrackButton;
	UIImageView* _transportControlsDivider;
	STRunTimeLabel* _runTimeLabel;
	STRunDistanceLabel* _runDistanceLabel;
	STRunPaceLabel* _runPaceLabel;
	STRunCaloriesLabel* _runCaloriesLabel;
	STShadowLabel* _nowPlayingSongLabel;
	STRunProgressView* _runProgressView;
	float _progressToGoal;
	UIImageView* _powerSongGlowView;
	NSTimer* _considerSeekTimer;
	int _currentSeekDirection;
	NSString* _throttledWorkoutState;
	struct {
		unsigned timerPaused : 1;
		unsigned shouldStartTimer : 1;
		unsigned isLockScreen : 1;
		unsigned animateForResumeEventsOnly : 1;
		unsigned canHighlightPowerSong : 1;
		unsigned validPaceReceived : 1;
		unsigned noMusic : 1;
		unsigned seekHandled : 1;
		unsigned seekAllowed : 1;
		unsigned needsNowPlayingLayout : 1;
		unsigned forceTimeExtrapolation : 1;
		unsigned goalCompleted : 1;
		unsigned useMetricDistance : 1;
		unsigned forceMetricForDistanceOnly : 1;
		unsigned throttleNextPauseResume : 1;
		unsigned shouldControlMusic : 1;
		unsigned unused : 16;
	} _runFlagsBitfield;
}
@property(readonly, assign, nonatomic) SWRunWorkoutProxy* workoutProxy;	// @synthesize=_workoutProxy
@property(assign, nonatomic) int orientation;	// @synthesize=_orientation
@property(assign, nonatomic) int interface;	// @synthesize=_interface
@property(assign, nonatomic) BOOL animateForResumeEventsOnly;
@property(assign, nonatomic) BOOL isLockScreen;
@property(assign, nonatomic) id<STRunViewDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(id)workoutProxy;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(int)orientation;
// declared property getter: -(int)interface;
-(void)_nowPlayingChanged:(id)changed;
-(void)_applicationWillResignActive:(id)_application;
-(void)_applicationResumed:(id)resumed;
-(void)_applicationWillSuspend:(id)_application;
-(void)_playPowerSongEventFromRemote:(id)remote;
-(void)_startWorkoutEventFromRemote:(id)remote;
-(void)_workoutStateDidChange:(id)_workoutState;
-(void)_empedSearchStateChanged:(id)changed;
-(id)_powersongLandscapeButtonDownImage;
-(id)_powersongLandscapeButtonImage;
-(id)_powersongButtonDownImage;
-(id)_powersongButtonImage;
-(id)_endWorkoutLandscapeButtonDownImage;
-(id)_endWorkoutLandscapeButtonImage;
-(id)_endWorkoutButtonDownImage;
-(id)_endWorkoutButtonImage;
-(id)_startWorkoutLandscapeButtonDownImage;
-(id)_startWorkoutLandscapeButtonImage;
-(id)_startWorkoutButtonDownImage;
-(id)_startWorkoutButtonImage;
-(id)_redButtonDownImage;
-(id)_redButtonImage;
-(id)_orangeButtonDownImage;
-(id)_orangeButtonImage;
-(id)_greenButtonDownImage;
-(id)_greenButtonImage;
-(void)_stopUpdateTimers;
-(void)_startUpdateTimers;
-(id)_mainButtonStringForGoalType:(id)goalType;
-(void)_configureButtonsForWorkout;
-(void)_updateSubviewsForWorkoutData:(id)workoutData;
-(void)_workoutInfoTimerTick:(id)tick;
-(void)_subsecondTimerTick:(id)tick;
-(BOOL)_endSeekInDirection:(int)direction;
-(BOOL)_beginSeekInDirection:(int)direction;
-(void)_considerSeekTimerFired:(id)fired;
-(void)_endSeeking:(id)seeking;
-(void)_beginConsiderSeeking:(id)seeking;
-(void)_cancelConsiderSeeking:(id)seeking;
-(void)_nextTrack;
-(void)_previousTrack;
-(void)_stop;
-(void)_unthrottlePauseResume;
-(void)_resumeWorkoutForResume:(BOOL)resume;
-(void)_resume;
-(void)_pauseWorkoutForResume:(BOOL)resume;
-(void)_pause;
-(void)_cancel;
-(void)_start;
-(void)_changeMusic;
-(void)_updateProgressViewWithDictionary:(id)dictionary;
-(void)selectPowerSong;
-(void)resumeWorkout;
-(void)_finishResumeEventsOnly;
-(void)resumeEventsOnly;
-(void)resume;
-(void)suspend;
// declared property setter: -(void)setOrientation:(int)orientation;
// declared property setter: -(void)setInterface:(int)interface;
// declared property setter: -(void)setAnimateForResumeEventsOnly:(BOOL)resumeEventsOnly;
// declared property getter: -(BOOL)animateForResumeEventsOnly;
// declared property setter: -(void)setIsLockScreen:(BOOL)screen;
// declared property getter: -(BOOL)isLockScreen;
-(void)_layoutLabel:(id)label inPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutCaloriesInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutPaceInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutRunDistanceInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutRunTimeInPosition:(int)position isLandscape:(BOOL)landscape isLockedMusicInterface:(BOOL)interface hasProgressView:(BOOL)view;
-(void)_layoutNowPlayingLabelForWorkoutType:(int)workoutType;
-(void)_layoutTransportControlsDivider;
-(void)_layoutSecondaryLabelsForWorkoutType:(int)workoutType;
-(void)_layoutPrimaryLabelForWorkoutType:(int)workoutType;
-(void)_layoutLabelsForWorkoutType:(int)workoutType presetGoal:(id)goal;
-(void)_layoutMainButtonsForGoalType:(id)goalType;
-(void)_layoutBottomButtons;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame workoutProxy:(id)proxy;
-(id)initWithFrame:(CGRect)frame;
-(int)_workoutTypeForGoalType:(id)goalType;
@end

