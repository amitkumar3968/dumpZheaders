/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YouTube-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class YTSearchRequest, YTVideo, NSURL, NSArray, UIMoviePlayerController, UIImageView, UILabel;

@interface YTMovieView : XXUnknownSuperclass {
	id _delegate;
	YTVideo* _video;
	NSArray* _videoList;
	NSURL* _youTubeURL;
	YTSearchRequest* _videoInfoRequest;
	UIMoviePlayerController* _moviePlayer;
	UIImageView* _bugView;
	UIImageView* _gradientView;
	BOOL _canAutoPlay;
	BOOL _shownFromExternalURL;
	BOOL _switchingVideos;
	BOOL _controlsShown;
	BOOL _useSmallLogo;
	BOOL _showControlsAfterFullscreenExit;
	BOOL _isShown;
	double _seekTime;
	UILabel* _logLabel;
}
@property(readonly, retain) YTVideo* video;	// converted property
@property(readonly, retain) UIMoviePlayerController* moviePlayer;	// converted property
-(void)forceControlsVisible:(BOOL)visible;
-(void)searchRequest:(id)request didFailWithError:(id)error;
-(void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;
-(void)_presentAlertForError:(id)error reasonCode:(id)code;
-(void)moviePlayerPlaybackDidEnd:(id)moviePlayerPlayback;
-(CGRect)moviePlayerFrameAfterFullscreenExit:(id)exit;
-(void)moviePlayerDidHideOverlay:(id)moviePlayer;
-(void)moviePlayerWillHideOverlay:(id)moviePlayer;
-(void)moviePlayerDidShowOverlay:(id)moviePlayer;
-(void)moviePlayerWillShowOverlay:(id)moviePlayer;
-(void)moviePlayerDidExitFullscreen:(id)moviePlayer;
-(void)moviePlayerWillExitFullscreen:(id)moviePlayer;
-(void)moviePlayerDidEnterFullscreen:(id)moviePlayer;
-(void)moviePlayerWillEnterFullscreen:(id)moviePlayer;
-(BOOL)moviePlayer:(id)player validateAction:(SEL)action;
-(BOOL)moviePlayerHeadsetPreviousTrackPressed:(id)pressed;
-(BOOL)moviePlayerHeadsetNextTrackPressed:(id)pressed;
-(BOOL)moviePlayerBackwardButtonPressed:(id)pressed;
-(BOOL)moviePlayerForwardButtonPressed:(id)pressed;
-(void)shareSheetDidHide;
-(void)shareSheetWillShow;
-(BOOL)moviePlayerEmailButtonPressed:(id)pressed;
-(BOOL)moviePlayerAddBookmarkButtonPressed:(id)pressed;
-(void)moviePlayerBufferingStateDidChange:(id)moviePlayerBufferingState;
-(void)moviePlayerPlaybackStateDidChange:(id)moviePlayerPlaybackState fromPlaybackState:(unsigned)playbackState;
-(void)_hideBug;
-(void)_hideOverlay;
-(BOOL)moviePlayerExitRequest:(id)request exitReason:(int)reason;
// converted property getter: -(id)video;
-(void)useSmallLogo:(BOOL)logo;
// converted property getter: -(id)moviePlayer;
-(id)fullscreenView;
-(void)setFullscreen:(BOOL)fullscreen;
-(void)willShowAlert;
-(void)setCanAutoPlay:(BOOL)play;
-(int)orientation;
-(BOOL)canContinuePlayingWhenLocked;
-(BOOL)isPlaying;
-(void)pause;
-(void)play;
-(void)didHide;
-(void)willHide;
-(void)didShow;
-(void)willShowForVideo:(id)video inList:(id)list orVideoID:(id)anId;
-(void)_cancelVideoInfoRequest;
-(void)_loadVideoInfoWithID:(id)anId;
-(void)_loadVideoFromURL:(BOOL)url;
-(void)_switchToVideo:(id)video;
-(BOOL)_loggingEnabled;
-(void)_setupBackground;
-(void)_updateCaptionsForMovie;
-(BOOL)_canBookmark;
-(BOOL)_canShare;
-(void)_destroyMoviePlayer;
-(void)setSeekTime:(double)time;
-(void)setFrame:(CGRect)frame;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

