/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import "AVCaptureFileOutputRecordingDelegate.h"
#import "AVCaptureFileOutputPauseResumeDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, AVCaptureSession, AVCaptureMovieFileOutput, AVCaptureConnection, MPAudioDeviceController, AVAssetExportSession, NSMutableArray, RCSavedRecording;

@interface RCAudioInputDevice : XXUnknownSuperclass <AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> {
@private
	AVCaptureSession* _captureController;
	AVCaptureMovieFileOutput* _movieFileOutput;
	AVCaptureConnection* _captureConnection;
	MPAudioDeviceController* _audioDeviceController;
	NSString* _pickedRouteName;
	RCSavedRecording* _activeRecording;
	NSDate* _recordingStartDate;
	NSDate* _pauseStartDate;
	double _totalPausedTime;
	double _duration;
	unsigned _backgroundTaskIdentifier;
	unsigned _recording : 1;
	unsigned _audioInputAvailable : 1;
	unsigned _active : 1;
	unsigned _interrupted : 1;
	unsigned _writingToDisk : 1;
	unsigned _recordAfterFinishedWritingToDisk : 1;
	unsigned _lastRecordingDidStop : 1;
	unsigned _preparingToRecord : 1;
	unsigned _stopRecordingImmediately : 1;
	unsigned _previewStarted : 1;
	AVAssetExportSession* _exportSession;
	NSString* _originalRecordingPath;
	NSString* _remadeRecordingPath;
	NSMutableArray* _recordingsToRemake;
	RCSavedRecording* _recordingBeingRemade;
	unsigned _remaking : 1;
}
@property(readonly, assign, nonatomic) RCSavedRecording* recordingBeingRemade;	// @synthesize=_recordingBeingRemade
@property(readonly, assign, nonatomic) BOOL shouldSuspend;
@property(readonly, assign, nonatomic) double elapsedRecordingTime;
@property(retain, nonatomic) NSDate* recordingStartDate;	// @synthesize=_recordingStartDate
@property(readonly, assign, nonatomic) BOOL isPaused;
@property(readonly, assign, nonatomic) BOOL isRecording;
@property(readonly, assign, nonatomic) BOOL audioInputAvailable;
+(id)sharedInputDevice;
+(id)savedRecordingsDirectory;
// declared property setter: -(void)setRecordingStartDate:(id)date;
// declared property getter: -(id)recordingStartDate;
// declared property getter: -(id)recordingBeingRemade;
-(void).cxx_destruct;
-(void)_setDisableSBMediaHUD:(BOOL)hud;
-(void)_removeCaptureObservers;
-(void)_applicationWillTerminate:(id)_application;
-(void)_remakeRecording:(id)recording;
-(void)_sessionErrored:(id)errored;
-(void)_captureCompleted;
-(void)_teardownAudioInputQueue;
-(BOOL)_setupAudioInputQueue;
-(void)_audioInputAvailabilityDidChange:(BOOL)_audioInputAvailability;
-(void)_recordingStopped;
-(void)captureOutput:(id)output didResumeRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
-(void)captureOutput:(id)output didPauseRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
-(void)_sessionDidStartRunning:(id)_session;
-(void)_interruptionDidEnd:(id)_interruption;
-(void)_interruptionDidBegin:(id)_interruption;
-(void)_availableModesDidChange:(id)_availableModes;
-(void)_adjustDurationForPauseIfNecessary;
-(void)_beginRecording;
-(void)captureOutput:(id)output didFinishRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections error:(id)error;
-(void)captureOutput:(id)output didStartRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
-(void)_createCaptureController;
-(BOOL)_attachCaptureDevice;
-(void)remakeRecording:(id)recording;
// declared property getter: -(BOOL)shouldSuspend;
// declared property getter: -(double)elapsedRecordingTime;
-(void)endRecording;
-(void)resumeRecording;
-(void)pauseRecording;
-(BOOL)beginRecording;
// declared property getter: -(BOOL)isPaused;
// declared property getter: -(BOOL)isRecording;
-(void)getAverageAudioLevel:(float*)level peakAudioLevel:(float*)level2;
// declared property getter: -(BOOL)audioInputAvailable;
-(void)resignActive;
-(void)becomeActive;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)dealloc;
-(id)_init;
-(id)init;
@end

