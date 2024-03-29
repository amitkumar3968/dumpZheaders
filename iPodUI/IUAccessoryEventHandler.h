/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface IUAccessoryEventHandler : XXUnknownSuperclass {
@private
	double _accessoryEventButtonDownTime;
	unsigned _accessoryEventKeyHeldHandled : 1;
	unsigned _accessoryEventRepeatCount;
	unsigned _accessoryKeyRepeatTimerActive : 1;
	unsigned _accessoryKeyTimerIsForKeyHeld : 1;
	void* _commandObserver;
	BOOL _handlingSimpleRemoteEvent;
}
@property(readonly, assign, nonatomic, getter=isPlayingSingleMovie) BOOL playingSingleMovie;
@property(readonly, assign, nonatomic, getter=isHandlingSimpleRemoteEvent) BOOL handlingSimpleRemoteEvent;	// @synthesize=_handlingSimpleRemoteEvent
@property(readonly, assign, nonatomic, getter=isHandlingRemoteEvent) BOOL handlingRemoteEvent;
+(id)sharedInstance;
// declared property getter: -(BOOL)isHandlingSimpleRemoteEvent;
-(BOOL)_togglePlaybackWouldPlayMusicSoundController;
-(void)_switchToPlaylistContextForSpecifier:(id)specifier;
-(BOOL)_setupMusicSoundController;
-(void)_endHandlingSimpleRemoteEvent;
-(void)handleSimpleRemoteAction:(int)action withContext:(int)context trackID:(long long)anId;
-(void)handleFastForwardEventWithSeconds:(double)seconds;
-(void)handleRewindEventWithSeconds:(double)seconds;
-(void)handleDownArrowEvent;
-(void)handleUpArrowEvent;
-(void)handleSelectEvent;
-(BOOL)acceptRemoteNavigationCommand;
-(BOOL)handleMenuEvent;
-(BOOL)handleRepeatAdvanceEvent;
-(BOOL)handleShuffleAdvanceEvent;
-(BOOL)handleTogglePlaybackEvent;
-(BOOL)handleStopEvent;
-(BOOL)_handleEventWithHandler:(SEL)handler ifCurrentItemType:(unsigned)type;
-(BOOL)handleSeekEndEvent;
-(BOOL)handleSeekBeginEvent:(int)event;
-(BOOL)handlePlaylistSeek:(int)seek;
-(BOOL)handlePlayEvent;
-(BOOL)handlePauseEvent;
-(BOOL)handleChangeTrackEvent:(int)event deltaType:(int)type;
-(BOOL)handleChangeTrackEvent:(int)event;
-(BOOL)handleChangeChapterEvent:(int)event;
-(BOOL)handleAlbumSeek:(int)seek;
// declared property getter: -(BOOL)isPlayingSingleMovie;
// declared property getter: -(BOOL)isHandlingRemoteEvent;
-(void)dealloc;
-(id)init;
@end

