/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import "UIApplicationDelegate.h"
#import "CNFDisplayControllerDelegate.h"
#import "CNFSoundPlayerDelegateProtocol.h"
#import "CNFAudioDeviceControllerProtocol.h"
#import <Celestial/_AVController_RouteDescriptionKey_RouteCurrentlyPicked.h>
#import "Conference-Structs.h"

@class CNFAudioDeviceController, NSObject, CNFAudioPlayer, AVController, UIWindow, NSURL, CNFDisplayController;
@protocol CNFCallViewControllerDelegate;

@interface CNFCallViewController : _AVController_RouteDescriptionKey_RouteCurrentlyPicked <UIApplicationDelegate, CNFDisplayControllerDelegate, CNFSoundPlayerDelegateProtocol, CNFAudioDeviceControllerProtocol> {
@private
	NSObject<CNFCallViewControllerDelegate>* _delegate;
	CNFDisplayController* _displayController;
	AVController* _avController;
	CNFAudioDeviceController* _deviceController;
	BOOL _isOutgoingInvitation;
	BOOL _initialMuteState;
	BOOL _audioWasInterrupted;
	BOOL _faceTimeEndedWhileSoundPlaying;
	NSURL* _originationURL;
	CNFAudioPlayer* _player;
}
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) CNFDisplayController* displayController;	// @synthesize=_displayController
@property(retain, nonatomic) NSURL* originationURL;	// @synthesize=_originationURL
@property(assign, nonatomic) BOOL initialMuteState;	// @synthesize=_initialMuteState
@property(assign, nonatomic) BOOL isOutgoingInvitation;	// @synthesize=_isOutgoingInvitation
@property(assign, nonatomic) NSObject<CNFCallViewControllerDelegate>* delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) CNFAudioDeviceController* deviceController;	// @synthesize=_deviceController
// declared property getter: -(id)originationURL;
// declared property setter: -(void)setInitialMuteState:(BOOL)state;
// declared property getter: -(BOOL)initialMuteState;
// declared property getter: -(BOOL)isOutgoingInvitation;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property getter: -(id)deviceController;
// declared property setter: -(void)setDisplayController:(id)controller;
// declared property getter: -(id)displayController;
-(void)_forceAudioCompletion;
-(void)audioPlayerDidStopPlaying:(id)audioPlayer;
-(void)audioDeviceView:(id)view selectedMute:(int)mute;
-(BOOL)audioIsMuted;
-(BOOL)muteButtonEnabled;
-(BOOL)shouldDisplayMuteOption;
-(id)audioDeviceView:(id)view deviceAtIndex:(int)index isActive:(BOOL*)active;
-(int)audioDeviceViewNumberOfDevices:(id)devices;
-(void)audioDeviceView:(id)view selectedItem:(int)item;
-(void)audioDeviceView:(id)view eventOccurred:(id)occurred;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(BOOL)shouldDisableEdgeClip;
-(void)resetToFullScreenPreview;
-(void)returnToFullScreenPreviewWithAnimations:(id)animations completion:(id)completion;
-(void)animateOutWithAnimations:(id)animations completion:(id)completion;
-(void)setIsSendingVideo:(BOOL)video;
-(void)stopPreview;
-(void)startPreview;
-(void)startFaceTimeWithURL:(id)url withCompletion:(id)completion;
-(void)_stopSounds;
-(void)_playOutgoingRingSound;
-(void)_delayedPlayOutgoingRingSound;
-(BOOL)_endAudioInterruption;
-(BOOL)_beginAudioInterruption;
-(void)conferenceDisplayControllerEndedWhileSuspending:(id)suspending;
-(BOOL)auxiliaryAudioRoutesAvailable;
-(void)conferenceDisplayController:(id)controller cameraToggleWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller muteConferenceWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller endWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller didFinishAnimatingCallEndWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller cancelCallFailureRecoveryWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller retryVideoConferenceInvitationWithReason:(unsigned)reason;
-(void)conferenceDisplayController:(id)controller endCallWithReason:(unsigned)reason;
-(void)_handleDismissConference:(id)conference;
-(void)_handleFirstRemoteFrame:(id)frame;
-(void)_handleInvitationSent:(id)sent;
-(void)_handleTelephonyStateChanged:(id)changed;
-(void)_handleStateChanged:(id)changed;
-(void)_handleConferenceConnected:(id)connected;
-(void)_handleConferenceConnecting:(id)connecting;
-(void)_gracefullyTerminateAndReturnToLastApp;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)updateViewControllerForOrientation:(int)orientation;
-(void)resumeFromCallWaitingAnimated:(BOOL)callWaitingAnimated;
-(void)prepareForCallWaitingAnimated:(BOOL)callWaitingAnimated;
-(BOOL)isShowingCallWaiting;
-(void)animateShowUnlocked;
-(void)showLockedAnimated:(BOOL)animated contactImage:(id)image lockScreenImageView:(id)view withCompletion:(id)completion;
-(void)didFinishLocking;
-(BOOL)isShowingLock;
// declared property setter: -(void)setOriginationURL:(id)url;
// declared property setter: -(void)setIsOutgoingInvitation:(BOOL)invitation;
-(BOOL)shouldHideStatusBar;
-(BOOL)isShowingFaceTimeUI;
-(BOOL)isInPhoneCall;
-(void)animateFromVoiceControlWithName:(id)name andSubtitle:(id)subtitle;
-(void)showAcceptCallBarsAnimated:(BOOL)animated callBarsOffscreen:(BOOL)offscreen wasLocked:(BOOL)locked wasCallWaiting:(BOOL)waiting;
-(void)showCallBarsAnimated:(BOOL)animated;
-(void)_muteConference:(BOOL)conference;
-(id)newDisplayController;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)loadView;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end

