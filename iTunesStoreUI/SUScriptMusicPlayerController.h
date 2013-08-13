/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class SUScriptMediaItem, NSNumber, NSString;

@interface SUScriptMusicPlayerController : SUScriptObject {
	NSString* _playerType;
}
@property(readonly, assign) NSString* shuffleModeSongs;
@property(readonly, assign) NSString* shuffleModeOff;
@property(readonly, assign) NSString* shuffleModeDefault;
@property(readonly, assign) NSString* shuffleModeAlbums;
@property(readonly, assign) NSString* repeatModeOne;
@property(readonly, assign) NSString* repeatModeNone;
@property(readonly, assign) NSString* repeatModeDefault;
@property(readonly, assign) NSString* repeatModeAll;
@property(readonly, assign) NSString* playbackStateStopped;
@property(readonly, assign) NSString* playbackStateSeekingForward;
@property(readonly, assign) NSString* playbackStateSeekingBackward;
@property(readonly, assign) NSString* playbackStatePlaying;
@property(readonly, assign) NSString* playbackStatePaused;
@property(readonly, assign) NSString* playbackStateInterrupted;
@property(retain) NSNumber* volume;
@property(copy) NSString* shuffleMode;
@property(copy) NSString* repeatMode;
@property(readonly, assign) NSString* playerType;
@property(readonly, assign) NSString* playbackState;
@property(readonly, assign) SUScriptMediaItem* nowPlayingItem;
@property(readonly, assign) double currentPlaybackTime;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
+(id)scriptPlaybackStateForNativePlaybackState:(int)nativePlaybackState;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)shuffleModeSongs;
// declared property getter: -(id)shuffleModeOff;
// declared property getter: -(id)shuffleModeDefault;
// declared property getter: -(id)shuffleModeAlbums;
// declared property getter: -(id)repeatModeOne;
// declared property getter: -(id)repeatModeNone;
// declared property getter: -(id)repeatModeDefault;
// declared property getter: -(id)repeatModeAll;
// declared property getter: -(id)playbackStateStopped;
// declared property getter: -(id)playbackStateSeekingForward;
// declared property getter: -(id)playbackStateSeekingBackward;
// declared property getter: -(id)playbackStatePlaying;
// declared property getter: -(id)playbackStatePaused;
// declared property getter: -(id)playbackStateInterrupted;
// declared property getter: -(id)volume;
// declared property setter: -(void)setVolume:(id)volume;
// declared property setter: -(void)setShuffleMode:(id)mode;
// declared property setter: -(void)setRepeatMode:(id)mode;
// declared property getter: -(id)shuffleMode;
// declared property getter: -(id)repeatMode;
// declared property getter: -(id)playerType;
// declared property getter: -(id)playbackState;
// declared property getter: -(id)nowPlayingItem;
// declared property getter: -(double)currentPlaybackTime;
-(id)_className;
-(void)stop;
-(void)skipToPreviousItem;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)setQueueWithQuery:(id)query;
-(void)setQueueWithItemCollection:(id)itemCollection;
-(void)play;
-(void)pause;
-(void)endSeeking;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)dealloc;
-(id)initWithPlayerType:(id)playerType;
@end

