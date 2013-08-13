/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "SBSAccelerometerDelegate.h"
#import "AVCaptureFileOutputRecordingDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBSAccelerometer, NSObject, NSString, AVCaptureSession, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureStillImageOutput, AVCaptureMovieFileOutput, AVCaptureVideoDataOutput, NSTimer, AVCaptureOutput, AVCaptureVideoPreviewLayer;
@protocol PLCameraControllerDelegate, OS_dispatch_queue;

@interface PLCameraController : XXUnknownSuperclass <SBSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
	AVCaptureSession* _avCaptureSession;
	AVCaptureDevice* _avCaptureDeviceFront;
	AVCaptureDevice* _avCaptureDeviceBack;
	AVCaptureDevice* _avCaptureDeviceAudio;
	AVCaptureDeviceInput* _avCaptureInputFront;
	AVCaptureDeviceInput* _avCaptureInputBack;
	AVCaptureDeviceInput* _avCaptureInputAudio;
	AVCaptureStillImageOutput* _avCaptureOutputPhoto;
	AVCaptureMovieFileOutput* _avCaptureOutputVideo;
	AVCaptureVideoDataOutput* _avCaptureOutputPanorama;
	OpaqueFigSampleBufferProcessor* _panoramaProcessor;
	CAImageQueueRef _panoramaImageQueue;
	CGSize _panoramaPreviewSize;
	float _panoramaPreviewScale;
	NSObject<OS_dispatch_queue>* _avCaptureSessionDispatchQueue;
	AVCaptureDevice* _currentDevice;
	AVCaptureDeviceInput* _currentInput;
	AVCaptureOutput* _currentOutput;
	AVCaptureVideoPreviewLayer* _previewLayer;
	CGRect _cleanAperture;
	BOOL _shouldBeStopped;
	int _cameraMode;
	int _cameraDevice;
	int _flashMode;
	int _captureOrientation;
	BOOL _imageWriterQueueIsAvailable;
	unsigned _ioSurfaceCounter;
	BOOL _hdrEnabled;
	BOOL _hdrCaptureIncludesEV0Image;
	int _hdrEV0PhotoCaptureCount;
	float _zoomFactor;
	id<PLCameraControllerDelegate> _delegate;
	double _maximumCaptureDuration;
	int _captureQuality;
	NSString* _videoCapturePath;
	SBSAccelerometer* _accelerometer;
	CGImageRef _lastVideoPreviewFrameImageRef;
	BOOL _lockFocusLock;
	BOOL _lockFocusAfterFocusFinishes;
	BOOL _isFocusingOnFace;
	int _cameraOrientation;
	NSTimer* _idleTimerTimer;
	BOOL _delaySuspend;
	NSTimer* _delaySuspendTimer;
	struct {
		unsigned supportsVideo : 1;
		unsigned supportsFocus : 1;
		unsigned supportsExposure : 1;
		unsigned supportsZoom : 1;
		unsigned supportsHDR : 1;
		unsigned supportsPanorama : 1;
		unsigned supportsVideoStillCapture : 1;
		unsigned hasFlash : 1;
		unsigned hasBackCamera : 1;
		unsigned hasFrontCamera : 1;
		unsigned deferStartVideoCapture : 1;
		unsigned inCall : 1;
		unsigned isCapturingPanorama : 1;
		unsigned isProcessingPanorama : 1;
		unsigned focusDisabled : 1;
		unsigned focusWasModified : 1;
		unsigned serverDied : 1;
		unsigned didGetDeviceUnavailableInBackground : 1;
		unsigned didSetLocationData : 1;
		unsigned isChangingMode : 1;
		unsigned flashWillFireAutomatically : 1;
		unsigned isCameraApp : 1;
		unsigned didSendPreviewStartedCallbackToEmptyDelegate : 1;
		unsigned didGetPreviewStartedCallbackAfterResume : 1;
		unsigned logFocusInfo : 1;
		unsigned logPreviewInfo : 1;
		unsigned logCaptureInfo : 1;
		unsigned logFlashInfo : 1;
		unsigned logDebugInfo : 1;
		unsigned logPanoInfo : 1;
		unsigned enable720p60Recording : 1;
		unsigned pptTestDisableAutofocus : 1;
		unsigned isInternalInstall : 1;
		unsigned shouldTearDownPano : 1;
		unsigned convertSampleBufferToJPEG : 1;
		unsigned delegateDidStartSession : 1;
		unsigned delegateWillStartPreview : 1;
		unsigned delegatePreviewDidStart : 1;
		unsigned delegateSessionDidStart : 1;
		unsigned delegateDidStopSession : 1;
		unsigned delegateWillStopSession : 1;
		unsigned delegateSessionDidStop : 1;
		unsigned delegateSessionWasInterrupted : 1;
		unsigned delegateSessionInterruptionEnded : 1;
		unsigned delegateServerDied : 1;
		unsigned delegateCleanApertureDidChange : 1;
		unsigned delegateModeWillChange : 1;
		unsigned delegateModeDidChange : 1;
		unsigned delegateWillTakePhoto : 1;
		unsigned delegateDidTakePhoto : 1;
		unsigned delegateCapturedPhoto : 1;
		unsigned delegateDidChangeCaptureAbility : 1;
		unsigned delegateDidUpdatePanoramaPreview : 1;
		unsigned delegateDidReceivePanoramaIssue : 1;
		unsigned delegateDidStartPanoramaCapture : 1;
		unsigned delegateWillStopPanoramaCapture : 1;
		unsigned delegatePanoramaWillStartProcessing : 1;
		unsigned delegatePanoramaDidStopProcessing : 1;
		unsigned delegateCapturedPanorama : 1;
		unsigned delegateVideoCaptureDidStart : 1;
		unsigned delegateDidStopVideoCapture : 1;
		unsigned delegateVideoCaptureDidStop : 1;
		unsigned delegateWillStartAutofocus : 1;
		unsigned delegateFocusDidStart : 1;
		unsigned delegateFocusDidEnd : 1;
		unsigned delegateFaceMetadataDidChange : 1;
		unsigned delegateTorchAvailabilityChanged : 1;
	} _cameraFlags;
@private
	id postSessionSetupBlock;
}
@property(readonly, assign, nonatomic) int cameraOrientation;
@property(copy, nonatomic) id postSessionSetupBlock;	// @synthesize
@property(readonly, assign, nonatomic) CGRect cleanAperture;	// @synthesize=_cleanAperture
@property(assign, nonatomic) float zoomFactor;	// @synthesize=_zoomFactor
@property(assign, nonatomic, getter=isHDREnabled) BOOL HDREnabled;	// @synthesize=_hdrEnabled
@property(readonly, assign, nonatomic) BOOL supportsHDR;
@property(assign, nonatomic) BOOL isCameraApp;
@property(assign, nonatomic) BOOL convertSampleBufferToJPEG;
@property(assign, nonatomic) int cameraDevice;
@property(assign, nonatomic) int flashMode;
@property(assign, nonatomic) int cameraMode;
@property(assign, nonatomic) int captureOrientation;	// @synthesize=_captureOrientation
@property(readonly, assign, nonatomic) CGSize panoramaPreviewSize;	// @synthesize=_panoramaPreviewSize
@property(readonly, assign, nonatomic) float panoramaPreviewScale;	// @synthesize=_panoramaPreviewScale
@property(assign, nonatomic) int previewOrientation;
@property(readonly, assign, nonatomic) AVCaptureVideoPreviewLayer* previewLayer;	// @synthesize=_previewLayer
@property(assign, nonatomic) AVCaptureOutput* currentOutput;	// @synthesize=_currentOutput
@property(assign, nonatomic) AVCaptureDeviceInput* currentInput;	// @synthesize=_currentInput
@property(assign, nonatomic) AVCaptureDevice* currentDevice;	// @synthesize=_currentDevice
@property(readonly, assign, nonatomic) AVCaptureStillImageOutput* imageOutput;	// @synthesize=_avCaptureOutputPhoto
@property(readonly, assign, nonatomic) AVCaptureSession* currentSession;	// @synthesize=_avCaptureSession
@property(assign) id delegate;	// converted property
@property(readonly, assign) BOOL imageWriterQueueIsAvailable;	// converted property
@property(readonly, retain) NSString* videoCapturePath;	// converted property
@property(readonly, assign) BOOL isFocusingOnFace;	// converted property
+(id)sharedInstance;
// declared property setter: -(void)setCaptureOrientation:(int)orientation;
// declared property getter: -(int)captureOrientation;
// declared property setter: -(void)setPostSessionSetupBlock:(id)block;
// declared property getter: -(id)postSessionSetupBlock;
// declared property getter: -(float)zoomFactor;
// declared property getter: -(CGRect)cleanAperture;
// declared property getter: -(CGSize)panoramaPreviewSize;
// declared property getter: -(float)panoramaPreviewScale;
// declared property getter: -(id)previewLayer;
// declared property getter: -(id)imageOutput;
// declared property setter: -(void)setCurrentOutput:(id)output;
// declared property getter: -(id)currentOutput;
// declared property setter: -(void)setCurrentInput:(id)input;
// declared property getter: -(id)currentInput;
// declared property setter: -(void)setCurrentDevice:(id)device;
// declared property getter: -(id)currentDevice;
// declared property getter: -(id)currentSession;
-(void)_setOrientationEventsEnabled:(BOOL)enabled;
-(void)_setCameraOrientation:(int)orientation;
// declared property getter: -(int)cameraOrientation;
-(void)accelerometer:(id)accelerometer didChangeDeviceOrientation:(int)orientation;
-(void)accelerometer:(id)accelerometer didAccelerateWithTimeStamp:(double)timeStamp x:(float)x y:(float)y z:(float)z eventType:(int)type;
-(void)postOrientationChangedNotification:(int)notification force:(BOOL)force;
-(void)_synchronizeHDRSettings;
-(BOOL)_isCountingHDREV0Captures;
// declared property getter: -(BOOL)supportsHDR;
// declared property setter: -(void)setHDREnabled:(BOOL)enabled;
// declared property getter: -(BOOL)isHDREnabled;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(BOOL)isTorchDisabled;
-(void)_updateTorchAvailability;
-(BOOL)isTorchOn;
-(BOOL)flashWillFire;
// declared property setter: -(void)setFlashMode:(int)mode;
-(BOOL)hasFlash;
-(void)_setFlashMode:(int)mode force:(BOOL)force;
// declared property getter: -(int)flashMode;
-(void)_torchLevelChanged;
-(void)_flashStateChanged;
-(void)setFaceDetectionEnabled:(BOOL)enabled;
-(void)_setFaceDetectionEnabled:(BOOL)enabled forCaptureDevice:(id)captureDevice captureOutput:(id)output;
-(void)_faceMetadataDidChange:(id)_faceMetadata;
-(void)_faceRectangleChanged;
-(CGRect)faceRectangle;
// converted property getter: -(BOOL)isFocusingOnFace;
-(void)_whiteBalanceCompleted;
-(void)_whiteBalanceStarted;
-(void)_exposureCompleted;
-(BOOL)isExposing;
-(void)_exposureStarted;
-(void)_focusHasChanged:(id)changed;
-(void)_focusStarted;
-(void)_focusCompleted;
-(void)_lockedFocusOperationFinished;
-(void)_autofocusOperationFinished;
-(void)_focusOperationFinished;
-(void)_commonFocusFinished;
-(void)setFocusDisabled:(BOOL)disabled;
-(BOOL)isFocusing;
-(void)lockFocusForRecording;
-(void)lockFocusAndExposureForPano;
-(void)userInitiatedLockFocus;
-(void)_lockFocus:(BOOL)focus lockExposure:(BOOL)exposure lockWhiteBalance:(BOOL)balance;
-(BOOL)isExposureLockSupported;
-(BOOL)isFocusLockSupported;
-(BOOL)canLockFocus;
-(void)performAutofocusAfterCapture;
-(void)_autofocusAfterCapture;
-(void)autofocus;
-(void)_autofocus:(BOOL)autofocus autoExpose:(BOOL)expose;
-(void)_pptTestSetAutofocusDisabled:(BOOL)disabled;
-(void)restartAutoFocus;
-(int)currentFocusMode;
-(void)focusAtAdjustedPoint:(CGPoint)adjustedPoint;
-(BOOL)canFocusAtPoint;
-(BOOL)isFocusAllowed;
-(void)_panoShouldEnd;
-(void)_cleanupPanorama;
-(void)_panoramaDidReceiveErrorNotificationString:(CFStringRef)_panorama;
-(void)_panoramaDidReceiveWarningNotificationString:(CFStringRef)_panorama;
-(void)_panoramaDidReceiveIssueWithPanoramaString:(CFStringRef)_panorama;
-(void)_panoramaDidReceiveStatusNotificationString:(CFStringRef)_panorama;
-(void)setPanoramaCaptureDirection:(int)direction;
-(void)captureOutput:(id)output didDropSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
-(void)captureOutput:(id)output didOutputSampleBuffer:(opaqueCMSampleBuffer*)buffer fromConnection:(id)connection;
-(void)_processSampleBuffer:(opaqueCMSampleBuffer*)buffer;
-(void)panoramaProcessorOutputCallbackWithStatus:(long)status buffer:(opaqueCMSampleBuffer*)buffer;
-(void)_panoramaDidStop;
-(void)stopPanoramaCapture;
-(void)startPanoramaCapture;
-(void)setPanoramaImageQueueLayer:(id)layer;
-(BOOL)isCapturingPanorama;
-(BOOL)canCapturePanorama;
-(BOOL)supportsPanorama;
-(void)setVideoCaptureMaximumDuration:(double)duration;
-(void)setVideoCaptureQuality:(int)quality;
// converted property getter: -(id)videoCapturePath;
-(void)stopVideoCapture;
-(double)minimumVideoCaptureDuration;
-(void)startVideoCapture;
-(void)_setVideoCapturePath:(id)path;
-(id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)properties;
-(void)_setOrientation;
-(void)_setOrientationForConnection:(id)connection;
-(BOOL)canCaptureVideo;
-(void)captureOutput:(id)output didFinishRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections error:(id)error;
-(void)captureOutput:(id)output didStartRecordingToOutputFileAtURL:(id)url fromConnections:(id)connections;
-(void)_movieFileRecordingCompleted:(id)completed;
-(void)_verifyVideoConsolidationForVideoAtPath:(id)path outUserInfo:(id*)info;
-(void)_removeVideoCaptureFileAndDirectoryAtPath:(id)path;
-(BOOL)isCapturingVideo;
-(void)capturePhoto;
// converted property getter: -(BOOL)imageWriterQueueIsAvailable;
-(BOOL)canCapturePhotoDuringRecording;
-(BOOL)canCapturePhoto;
-(void)_didTakePhoto;
-(void)_willTakePhoto;
-(void)_capturedPhotoWithDictionary:(id)dictionary error:(id)error;
-(void)_processCapturedPhotoWithDictionary:(id)dictionary error:(id)error;
-(BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)output;
-(void)_sessionRuntimeErrored:(id)errored;
-(void)_interruptionEnded:(id)ended;
-(void)_wasInterrupted:(id)interrupted;
-(void)_resetIdleTimer;
-(void)_delayIdleTimerByTimeInterval:(double)interval;
-(void)_serverDied:(id)died;
-(void)_recoverFromServerError;
-(void)stopPreview;
-(void)_previewStarted:(id)started;
-(void)_clearPreviewLayer;
-(BOOL)isPreviewMirrored;
// declared property setter: -(void)setPreviewOrientation:(int)orientation;
// declared property getter: -(int)previewOrientation;
-(void)startPreview;
-(void)startPreview:(id)preview;
-(void)_startPreview:(id)preview;
-(void)_startPreviewWithCameraDevice:(int)cameraDevice cameraMode:(int)mode;
// converted property getter: -(id)delegate;
// converted property setter: -(void)setDelegate:(id)delegate;
-(BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
-(void)_sessionStopped:(id)stopped;
-(void)_sessionStarted:(id)started;
-(void)_deviceStarted:(id)started;
-(void)_tearDownCamera;
-(void)_setDelaySuspend:(BOOL)suspend;
-(void)_forceDelaySuspendTimeout;
-(void)_teardownDelaySuspendTimer;
-(void)_destroyCamera;
-(BOOL)_setupCamera;
-(id)_currentVideoConnection;
-(void)_applicationDidBecomeActive:(id)_application;
-(void)_jankyPreviewStartedWorkaround;
-(void)_applicationWillEnterForeground:(id)_application;
-(void)_applicationSuspended:(id)suspended;
-(BOOL)supportsZoom;
// declared property setter: -(void)setZoomFactor:(float)factor;
-(float)maximumZoomFactor;
-(float)minimumZoomFactor;
-(void)_unlockCurrentDeviceForConfiguration;
-(BOOL)_lockCurrentDeviceForConfiguration;
// declared property setter: -(void)setIsCameraApp:(BOOL)app;
-(void)_setLocationEnabled:(BOOL)enabled;
-(BOOL)_modeUsesCompassHeading;
-(void)_inputPortFormatDescriptionDidChange:(id)_inputPortFormatDescription;
// declared property getter: -(BOOL)convertSampleBufferToJPEG;
// declared property setter: -(void)setConvertSampleBufferToJPEG:(BOOL)jpeg;
// declared property getter: -(BOOL)isCameraApp;
// declared property setter: -(void)setCameraDevice:(int)device;
// declared property getter: -(int)cameraDevice;
-(BOOL)hasRearCamera;
-(BOOL)hasFrontCamera;
-(void)_setDefaultPrewarmDate:(id)date;
// declared property setter: -(void)setCameraMode:(int)mode;
-(void)_setCameraMode:(int)mode cameraDevice:(int)device;
-(void)_configureSessionWithCameraMode:(int)cameraMode cameraDevice:(int)device;
-(void)_sanityCheckCameraMode:(int*)mode cameraDevice:(int*)device;
// declared property getter: -(int)cameraMode;
-(BOOL)supportsVideoCapture;
-(BOOL)isChangingModes;
-(void)executeBlockOnMainQueue:(id)queue;
-(void)enqueueBlockOnMainQueue:(id)queue;
-(void)enqueueBlockInCaptureSessionQueue:(id)captureSessionQueue;
-(BOOL)isReady;
-(void)_imageWriterQueueAvailabilityChanged;
-(void)releaseIOSurface;
-(void)captureIOSurface;
-(BOOL)hasInheritedForegroundState;
-(BOOL)inCall;
-(void)_inCallStatusChanged:(BOOL)callStatusChanged;
-(void)_callStateDidChange:(id)_callState;
-(void)_updateCallStatus;
-(void)dealloc;
-(id)init;
@end
