/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "UIMovieScrubberDelegate.h"
#import "UIMovieScrubberDataSource.h"
#import "PLMoviePlayerControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, PLPhotoTileViewController, PLMoviePlayerController, PLVideoPosterFrameView, PLVideoEditingOverlayView, NSArray, UIImageView, PLPhotoBakedThumbnails, AVRemaker, PLProgressStack, NSLock, UIMovieScrubber, UIButton, PLAirTunesService, NSString, PLVideoOutBackgroundView, PLAirPlayBackgroundView, NSMutableDictionary, PLManagedAsset, UIView, UIImage, NSDictionary, NSURL;
@protocol PLVideoViewDelegate;

@interface PLVideoView : XXUnknownSuperclass <UIMovieScrubberDelegate, UIMovieScrubberDataSource, PLMoviePlayerControllerDelegate> {
	PLManagedAsset* _videoCameraImage;
	NSURL* _videoURL;
	PLPhotoTileViewController* _imageTile;
	PLVideoPosterFrameView* _posterFrameView;
	UIButton* _videoOverlayPlayButton;
	UIView* _videoOverlayBackgroundView;
	PLVideoEditingOverlayView* _trimMessageView;
	UIImage* _posterFrameImage;
	UIImage* _snapshotImage;
	float _scrubberWidth;
	unsigned _scaleMode;
	UIImageView* _scrubberBackgroundView;
	UIView* _scrubberTitleView;
	NSTimer* _scrubberUpdateTimer;
	NSDictionary* _thumbnailOptionsDict;
	CGSize _thumbnailSize;
	PLPhotoBakedThumbnails* _bakedLandscapeThumbnails;
	PLPhotoBakedThumbnails* _bakedPortraitThumbnails;
	AVRemaker* _remaker;
	NSString* _trimmedPath;
	NSString* _videoPathAfterTrim;
	NSTimer* _trimProgressTimer;
	PLManagedAsset* _trimmedVideoClip;
	PLProgressStack* _trimProgressStack;
	float _progress;
	int _interfaceOrientation;
	PLMoviePlayerController* _moviePlayer;
	int _orientationWhenLastDisplayed;
	id<PLVideoViewDelegate> _delegate;
	double _maximumTrimLength;
	double _lastScrubbedValue;
	double _lastActualValue;
	double _duration;
	double _cachedCurrentPlaybackTime;
	unsigned _currentThumbnailRequestID;
	PLAirTunesService* _selectedAirTunesService;
	PLAirPlayBackgroundView* _airPlayBackgroundView;
	PLVideoOutBackgroundView* _videoOutBackgroundView;
	NSArray* _imageGenerators;
	NSLock* _thumbnailReqlock;
	unsigned _showsPosterFrame : 1;
	unsigned _showsPlayButton : 1;
	unsigned _showsScrubber : 1;
	unsigned _canEdit : 1;
	unsigned _loadMediaImmediately : 1;
	unsigned _scrubberIsSubview : 1;
	unsigned _viewWillAppear : 1;
	unsigned _didLayout : 1;
	unsigned _wasPlayingBeforeScrub : 1;
	unsigned _playFromBeginning : 1;
	unsigned _needsReloadScrubberThumbnails : 1;
	unsigned _playing : 1;
	unsigned _playingToAirTunes : 1;
	unsigned _editing : 1;
	unsigned _disableEditAfterTrim : 1;
	unsigned _scrubbing : 1;
	unsigned _scrubbingToRight : 1;
	unsigned _deleteOriginalFile : 1;
	unsigned _passthroughTrimming : 1;
	unsigned _preparingMoviePlayer : 1;
	unsigned _preparedMoviePlayer : 1;
	unsigned _isMoviePlayerDelegate : 1;
	unsigned _moviePlayerIsReady : 1;
	unsigned _moviePlayerDidBuffer : 1;
	unsigned _showingOverlay : 1;
	unsigned _showingScrubber : 1;
	unsigned _showScrubberWhenMovieIsReady : 1;
	unsigned _playbackDidBegin : 1;
	unsigned _playbackWillBegin : 1;
	unsigned _loadScrubberThumbnails : 1;
	unsigned _videoIsLandscape : 1;
	unsigned _canCreateMetadata : 1;
	unsigned _createPreviewPosterFrame : 1;
	unsigned _startedDeliveringNotificationsToMainThread : 1;
	unsigned _isTrimming : 1;
	unsigned _wasTrimmedInPlace : 1;
	unsigned _remakingFailed : 1;
	unsigned _previewFrameRequestID;
	NSMutableDictionary* _thumbnailRequests;
	NSMutableDictionary* _requestsBeingProcessed;
	UIMovieScrubber* _scrubber;
	NSMutableDictionary* _cachedThumbnails;
	NSArray* _landscapeSummaryThumbnailTimestamps;
	NSArray* _portraitSummaryThumbnailTimestamps;
}
@property(readonly, assign, nonatomic) BOOL _didSetPhotoData;
@property(readonly, assign, nonatomic) BOOL _mediaIsPlayable;
@property(readonly, assign, nonatomic) NSString* _mediaTitle;
@property(readonly, assign, nonatomic) NSString* _pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, assign, nonatomic) NSString* _pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, assign, nonatomic) NSString* _pathForVideoPreviewFile;
@property(readonly, assign, nonatomic) NSString* _pathForOriginalFile;
@property(retain, nonatomic) PLProgressStack* trimProgressStack;	// @synthesize=_trimProgressStack
@property(assign, nonatomic) double currentTime;
@property(assign, nonatomic) float scrubberWidth;	// @synthesize=_scrubberWidth
@property(assign, nonatomic) BOOL scrubberIsSubview;
@property(assign, nonatomic) BOOL canEdit;
@property(assign, nonatomic) BOOL loadMediaImmediately;
@property(assign, nonatomic) BOOL showsScrubber;
@property(assign, nonatomic) BOOL showsPlayOverlay;
@property(assign, nonatomic) BOOL showsPosterFrame;
@property(readonly, assign, nonatomic) UIImage* currentFrameImage;
@property(readonly, assign, nonatomic) UIImageView* previewImageView;
@property(readonly, assign, nonatomic) NSString* videoPathAfterTrim;
@property(readonly, assign, nonatomic) double endTime;
@property(readonly, assign, nonatomic) double startTime;
@property(assign, nonatomic, getter=isEditing) BOOL editing;
@property(readonly, assign, nonatomic) double duration;
@property(readonly, assign, nonatomic) UIView* posterFrameView;	// @synthesize=_posterFrameView
@property(readonly, assign, nonatomic) UIImage* posterFrameImage;
@property(retain, nonatomic) PLManagedAsset* trimmedVideoClip;
@property(readonly, assign, nonatomic) int interfaceOrientation;	// @synthesize=_interfaceOrientation
@property(readonly, assign, nonatomic) PLManagedAsset* videoCameraImage;
@property(assign, nonatomic) PLPhotoTileViewController* imageTile;
@property(assign, nonatomic) id<PLVideoViewDelegate> delegate;
@property(readonly, assign, nonatomic) NSString* pathForVideoFile;
@property(retain) UIView* videoOverlayBackgroundView;	// converted property
@property(readonly, retain) UIButton* videoOverlayPlayButton;	// converted property
+(id)videoViewForVideoFileAtURL:(id)url;
// declared property setter: -(void)setTrimProgressStack:(id)stack;
// declared property getter: -(id)trimProgressStack;
// declared property getter: -(id)posterFrameView;
// declared property setter: -(void)setScrubberWidth:(float)width;
// declared property getter: -(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_updateScrubberValue;
// declared property getter: -(double)duration;
-(void)_playbackFinished;
-(id)_moviePlayer;
-(void)adjustUIForVideoOut:(BOOL)videoOut;
-(void)_airTunesServiceChanged;
-(void)_removeAirPlayBackgroundView;
-(void)_addAirPlayBackgroundView;
-(id)_parentViewForExternalOutputBackground;
-(void)_handleScreenConnectionChange:(BOOL)change;
-(void)_screenDidDisconnect:(id)_screen;
-(void)_screenDidConnect:(id)_screen;
-(BOOL)shouldShowCopyCalloutAtPoint:(CGPoint)point;
-(void)_scrubToTime:(double)time;
// declared property getter: -(double)currentTime;
// declared property setter: -(void)setCurrentTime:(double)time;
// declared property getter: -(BOOL)loadMediaImmediately;
// declared property setter: -(void)setLoadMediaImmediately:(BOOL)immediately;
// declared property getter: -(BOOL)scrubberIsSubview;
// declared property setter: -(void)setScrubberIsSubview:(BOOL)subview;
-(BOOL)_canEditDuration:(double)duration;
// declared property getter: -(BOOL)canEdit;
// declared property setter: -(void)setCanEdit:(BOOL)edit;
// declared property getter: -(BOOL)showsScrubber;
-(void)setShowsScrubber:(BOOL)scrubber duration:(double)duration;
// declared property setter: -(void)setShowsScrubber:(BOOL)scrubber;
// declared property getter: -(BOOL)showsPlayOverlay;
// declared property setter: -(void)setShowsPlayOverlay:(BOOL)overlay;
-(void)_updatePosterFrameVisibility;
-(void)_updatePosterImageView;
-(void)_invalidateSnapshotImage;
-(void)_updateSnapshotImage;
// declared property getter: -(id)posterFrameImage;
-(void)setPosterFrameImage:(id)image;
// declared property getter: -(BOOL)showsPosterFrame;
// declared property setter: -(void)setShowsPosterFrame:(BOOL)frame;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)superview;
-(void)setFrame:(CGRect)frame;
-(void)viewDidDisappear;
-(void)viewDidAppear;
-(void)viewWillAppear:(BOOL)view;
-(void)_updateScrubberVisibilityWithDuration:(double)duration;
-(void)stop;
-(void)pause;
-(void)play;
-(BOOL)playingToVideoOut;
-(BOOL)playingToAirTunes;
-(void)playToAirTunes;
-(void)playButtonClicked:(id)clicked;
-(void)_verifyPlaybackHasBegun;
-(void)_didBeginPlayback;
-(void)_delayedAddAirPlayBackground;
-(BOOL)isPlaying;
-(void)handleDoubleTap;
-(void)toggleScaleMode:(float)mode;
// declared property setter: -(void)setImageTile:(id)tile;
// declared property getter: -(id)imageTile;
// declared property getter: -(id)videoCameraImage;
// declared property getter: -(id)previewImageView;
-(id)_videoSnapshot;
// declared property getter: -(id)currentFrameImage;
-(id)newPreviewImageData:(id*)data fullScreenImage:(id*)image;
// declared property setter: -(void)setTrimmedVideoClip:(id)clip;
// declared property getter: -(id)trimmedVideoClip;
// declared property getter: -(id)videoPathAfterTrim;
// declared property getter: -(double)endTime;
// declared property getter: -(double)startTime;
-(void)cancelTrim;
-(void)trimUsingMode:(int)mode saveACopy:(BOOL)copy;
-(BOOL)wasTrimmedInPlace;
-(BOOL)isTrimming;
-(BOOL)deleteOriginalFileAfterTrim;
-(void)_remakerDidFinish:(id)_remaker;
-(void)_cancelRemaking:(id)remaking;
-(void)_stopDeliveringNotifications;
-(void)_startDeliveringNotificationsToMainThread;
-(void)_trimProgressChanged:(id)changed;
-(void)setProgress:(id)progress;
-(void)_updateTrimProgress;
-(void)_informDelegateAboutProgressChange:(float)change;
-(void)_resetTrimProgressTimer;
-(void)_removeTrimProgressTimer;
-(void)importerFinishedProcessingTrimmedVideo:(id)video;
-(void)_thumbnailsWereRegenerated:(id)regenerated error:(id)error contextInfo:(void*)info;
-(void)_scrubberAnimationFinished;
-(void)movieScrubberEditingAnimationFinished:(id)finished;
-(void)_reset;
-(void)_setPlaying:(BOOL)playing;
// declared property getter: -(BOOL)isEditing;
// declared property setter: -(void)setEditing:(BOOL)editing;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)hideTrimMessage;
-(void)showTrimMessage:(id)message withBottomY:(float)bottomY;
-(void)setMaximumTrimLength:(double)length;
-(void)_clearImageGenerators;
-(void)_destroyGenerators;
-(void)_serviceImageGenerationRequest;
-(void)_removeThumbnailRequestForRequestID:(id)requestID;
-(void)_addThumbnailRequestForTimestamp:(id)timestamp isPreviewThumbnail:(BOOL)thumbnail;
-(void)movieScrubber:(id)scrubber widthDelta:(float)delta originXDelta:(float)delta3;
-(void)movieScrubberDidCancelEditing:(id)movieScrubber;
-(void)movieScrubberDidBeginEditing:(id)movieScrubber;
-(void)movieScrubberWillBeginEditing:(id)movieScrubber;
-(void)movieScrubberDidFinishRequestingThumbnails:(id)movieScrubber;
-(void)movieScrubberWillBeginRequestingThumbnails:(id)movieScrubber;
-(void)movieScrubber:(id)scrubber editingEndValueDidChange:(double)editingEndValue;
-(void)movieScrubber:(id)scrubber editingStartValueDidChange:(double)editingStartValue;
-(void)movieScrubber:(id)scrubber valueDidChange:(double)value;
-(void)_didScrubToValue:(double)value withHandle:(int)handle;
-(void)movieScrubberDidEndScrubbing:(id)movieScrubber withHandle:(int)handle;
-(void)movieScrubberDidBeginScrubbing:(id)movieScrubber withHandle:(int)handle;
-(void)_resetScrubberUpdateTimer;
-(void)_removeScrubberUpdateTimer;
-(float)movieScrubberThumbnailAspectRatio:(id)ratio;
-(id)_loadThumbnailsIntoDictionary:(id)dictionary isLandscape:(BOOL)landscape aspectRatio:(float)ratio;
-(void)movieScrubber:(id)scrubber requestThumbnailImageForTimestamp:(id)timestamp;
// declared property getter: -(BOOL)_didSetPhotoData;
-(BOOL)_mediaIsVideo;
// declared property getter: -(BOOL)_mediaIsPlayable;
// declared property getter: -(id)_mediaTitle;
// declared property getter: -(id)_pathForPrebakedPortraitScrubberThumbnails;
// declared property getter: -(id)_pathForPrebakedLandscapeScrubberThumbnails;
// declared property getter: -(id)_pathForVideoPreviewFile;
// declared property getter: -(id)_pathForOriginalFile;
// declared property getter: -(id)pathForVideoFile;
-(void)_saveCachedThumbnailsIfNecessary;
-(id)movieScrubber:(id)scrubber timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;
-(id)movieScrubber:(id)scrubber evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;
-(double)movieScrubberDuration:(id)duration;
-(BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)pressed;
-(BOOL)moviePlayerHeadsetNextTrackPressed:(id)pressed;
-(BOOL)moviePlayerHeadsetPlayPausePressed:(id)pressed;
-(BOOL)moviePlayerCanManageStatusBar:(id)bar;
-(void)willResignMoviePlayerDelegate:(id)delegate;
-(void)didBecomeMoviePlayerDelegate:(id)delegate;
-(void)_prepareMoviePlayerIfNeeded;
-(void)moviePlayerDurationAvailable:(id)available;
-(void)moviePlayerReadyToPlay:(id)play;
-(void)_savePreviewPosterFrameImage:(CGImageRef)image;
-(void)_requestPreviewPosterFrameForVideoSize:(CGSize)videoSize;
-(void)moviePlayerPlaybackDidEnd:(id)moviePlayerPlayback;
-(void)moviePlayerPlaybackStateDidChange:(id)moviePlayerPlaybackState fromPlaybackState:(unsigned)playbackState;
-(void)moviePlayerPlaybackRateDidChange:(id)moviePlayerPlaybackRate;
-(void)moviePlayerBufferingStateDidChange:(id)moviePlayerBufferingState;
-(BOOL)moviePlayerExitRequest:(id)request exitReason:(int)reason;
-(void)_reloadScrubberThumbnailsIfNeeded;
-(void)_setNeedsReloadScrubberThumbnails:(BOOL)thumbnails;
-(void)layoutSubviews;
-(BOOL)_canCreateMetadata;
-(void)_updateScaleModeForSize:(CGSize)size;
-(void)_hideTrimMessageView:(BOOL)view;
-(void)removeVideoOverlay;
-(void)_hideVideoOverlay:(BOOL)overlay;
-(void)_videoOverlayFadeOutDidFinish;
-(void)_showVideoOverlay;
// converted property getter: -(id)videoOverlayPlayButton;
// converted property setter: -(void)setVideoOverlayBackgroundView:(id)view;
// converted property getter: -(id)videoOverlayBackgroundView;
-(id)videoScrubber;
-(void)_createScrubberIfNeeded;
// declared property getter: -(float)scrubberWidth;
-(void)_updateScrubberFrame;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)description;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)dealloc;
-(void)_resetMoviePlayer;
-(id)_initWithFrame:(CGRect)frame videoCameraImage:(id)image orientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame videoCameraImage:(id)image orientation:(int)orientation;
@end

