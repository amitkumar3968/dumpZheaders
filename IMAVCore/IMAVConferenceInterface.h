/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

#import "IMAVCore-Structs.h"
#import "AVConferenceDelegate.h"
#import "IMAVInterface.h"

@class NSMutableArray, NSLock, NSMutableDictionary, AVConference;

__attribute__((visibility("hidden")))
@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {
	NSMutableArray* _avConferencesToCleanup;
	NSMutableDictionary* _avConferences;
	NSLock* _avConferencesLock;
	BOOL _duringInit;
	BOOL _pendingCleanup;
}
@property(readonly, assign, nonatomic) AVConference* controller;
@property(assign) void* localVideoBackLayer;	// converted property
@property(assign) void* localVideoLayer;	// converted property
+(void)_postParticipantScreenAttributesChangeNotification:(id)notification cameraChanged:(BOOL)changed orientationChanged:(BOOL)changed3 aspectChanged:(BOOL)changed4 cameraWillSwitch:(BOOL)camera camera:(unsigned)camera6 orentation:(unsigned)orentation aspect:(CGSize)aspect;
+(void)_postParticipantMediaChangeNotification:(id)notification cameraChanged:(BOOL)changed orientationChanged:(BOOL)changed3 aspectChanged:(BOOL)changed4 contentRectChanged:(BOOL)changed5 cameraWillSwitch:(BOOL)camera camera:(unsigned)camera7 orentation:(unsigned)orentation aspect:(CGSize)aspect contentRect:(CGRect)rect;
+(BOOL)_useMultipleAVConference;
-(BOOL)_submitEndCallMetric:(id)metric forChat:(id)chat;
-(BOOL)_submitLoggingInformation:(id)information forChat:(id)chat;
-(BOOL)_previewStarted;
-(id)_currentCamera;
-(void)_setCurrentCamera:(id)camera;
-(id)_currentMicrophone;
-(void)_setCurrentMicrophone:(id)microphone;
-(void)avChat:(id)chat setLocalLandscapeAspectRatio:(CGSize)ratio localPortraitAspectRatio:(CGSize)ratio3;
-(void)chatStateUpdated;
-(id)_controller;
// declared property getter: -(id)controller;
-(void)handleRelayCancel:(id)cancel fromParticipant:(id)participant;
-(void)handleRelayUpdate:(id)update fromParticipant:(id)participant;
-(void)handleRelayInitate:(id)initate fromParticipant:(id)participant;
-(BOOL)supportsRelay;
-(void)setRemoteVideoLayersFromChat:(id)chat toChat:(id)chat2;
// converted property setter: -(void)setLocalVideoBackLayer:(void*)layer;
// converted property getter: -(void*)localVideoBackLayer;
-(void)setRemoteVideoBackLayer:(void*)layer forChat:(id)chat;
-(void*)remoteVideoBackLayerForChat:(id)chat;
// converted property setter: -(void)setLocalVideoLayer:(void*)layer;
// converted property getter: -(void*)localVideoLayer;
-(void)setRemoteVideoLayer:(void*)layer forChat:(id)chat;
-(void*)remoteVideoLayerForChat:(id)chat;
-(BOOL)supportsLayers;
-(void)serverDiedForConference:(id)conference;
-(void)conference:(id)conference remoteVideoPaused:(BOOL)paused callID:(int)anId;
-(void)conference:(id)conference remoteAudioPaused:(BOOL)paused callID:(int)anId;
-(void)conference:(id)conference receivedNoRemotePacketsForTime:(double)time callID:(int)anId;
-(void)conference:(id)conference withCallID:(int)callID remoteMediaStalled:(BOOL)stalled;
-(void)conference:(id)conference videoQualityNotificationForCallID:(int)callID isDegraded:(BOOL)degraded isRemote:(BOOL)remote;
-(void)conference:(id)conference withCallID:(int)callID networkHint:(BOOL)hint;
-(void)conference:(id)conference cancelRelayRequest:(int)request requestDict:(id)dict;
-(void)conference:(id)conference sendRelayUpdate:(int)update updateDict:(id)dict;
-(void)conference:(id)conference inititiateRelayRequest:(int)request requestDict:(id)dict;
-(void)conference:(id)conference remoteVideoAttributesChanged:(id)changed callID:(int)anId;
-(void)conference:(id)conference remoteScreenAttributesChanged:(id)changed callID:(int)anId;
-(void)conference:(id)conference receivedFirstRemoteFrameForCallID:(int)callID;
-(void)conference:(id)conference updateOutputMeterLevel:(float)level;
-(void)conference:(id)conference updateInputMeterLevel:(float)level;
-(void)conference:(id)conference didStopWithCallID:(int)callID error:(id)error;
-(void)conference:(id)conference didStopWithCallID:(int)callID error:(id)error callMetadata:(id)metadata;
-(void)conference:(id)conference didStartSession:(BOOL)session withUserInfo:(id)userInfo;
-(id)avChat:(id)chat localICEDataForHandleID:(id)handleID service:(id)service usingRelay:(BOOL)relay supportsARDMuxing:(BOOL)muxing;
-(void)avChat:(id)chat prepareConnectionWithRemoteConnectionData:(id)remoteConnectionData localConnectionData:(id)data;
-(id)natTypeForAVChat:(id)avchat;
-(id)getNatIPFromICEData:(id)icedata;
-(void)_notifyAboutPotentialCallForChat:(id)chat;
-(unsigned)avChat:(id)chat enableAudioReflector:(BOOL)reflector;
-(int)avChat:(id)chat endConferenceForUserID:(id)userID;
-(void)_avChatDealloc:(id)dealloc;
-(BOOL)avChat:(id)chat startConferenceWithUserID:(id)userID;
-(int)endConferenceForAVChat:(id)avchat;
-(BOOL)closeCamera;
-(BOOL)openCamera;
-(BOOL)stopPreview;
-(BOOL)startPreviewWithError:(id*)error;
-(unsigned long long)capabilities;
-(unsigned long long)capabilitiesOfCPU;
-(unsigned long long)capabilitiesOfNetwork;
-(void)avChat:(id)chat setSendingVideo:(BOOL)video;
-(BOOL)isSendingVideoForAVChat:(id)avchat;
-(void)avChat:(id)chat setSendingAudio:(BOOL)audio;
-(BOOL)isSendingAudioForAVChat:(id)avchat;
-(void)avChat:(id)chat setPaused:(BOOL)paused;
-(BOOL)isPausedForAVChat:(id)avchat;
-(void)avChat:(id)chat setMute:(BOOL)mute;
-(BOOL)isMuteForAVChat:(id)avchat;
-(unsigned)cameraOrientationForAVChat:(id)avchat;
-(BOOL)avChat:(id)chat setCameraOrientation:(unsigned)orientation;
-(unsigned)cameraTypeForAVChat:(id)avchat;
-(BOOL)avChat:(id)chat setCameraType:(unsigned)type;
-(BOOL)allowsVideoForAVChat:(id)avchat;
-(void)_conferenceEnded:(id)ended;
-(BOOL)isAVInterfaceReady;
-(void)initAVInterface;
-(void)_queueAVConferenceForCleanup:(id)cleanup;
-(void)_cleanupAVInterface;
-(id)_avChatForConference:(id)conference callID:(int)anId errorString:(id)string;
-(id)_avChatForConference:(id)conference;
-(id)_conferenceForAVChat:(id)avchat;
-(id)_existingConferenceForAVChatGUID:(id)avchatGUID;
-(id)_existingConferenceForAVChat:(id)avchat;
-(BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)chatsOtherThan;
-(void)_configureAVConference:(id)conference;
-(void)dealloc;
-(id)init;
@end

