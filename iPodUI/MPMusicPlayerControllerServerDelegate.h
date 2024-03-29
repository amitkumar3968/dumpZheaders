/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "NSObject.h"


@protocol MPMusicPlayerControllerServerDelegate <NSObject>
-(void)musicPlayerServer:(id)server prepareQueueWithGeniusMixPlaylist:(id)geniusMixPlaylist;
-(void)musicPlayerServer:(id)server prepareQueueWithQuery:(id)query;
-(void)musicPlayerServer:(id)server setShuffleMode:(int)mode;
-(void)musicPlayerServer:(id)server setFirstItem:(id)item;
-(id)currentMediaQueryForMusicPlayerServer:(id)musicPlayerServer;
-(BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)musicPlayerServer;
-(unsigned)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)musicPlayerServer;
-(unsigned)indexOfNowPlayingItemForMusicPlayerServer:(id)musicPlayerServer;
-(void)musicPlayerServer:(id)server setNowPlayingItem:(id)item;
-(id)nowPlayingItemForMusicPlayerServer:(id)musicPlayerServer;
-(void)musicPlayerServer:(id)server setPlaybackSpeed:(int)speed;
-(int)playbackSpeedForMusicPlayerServer:(id)musicPlayerServer;
-(id)playerForMusicPlayerServer:(id)musicPlayerServer usingApplicationSpecificQueue:(BOOL)queue;
-(void)musicPlayerServer:(id)server registerForShuffleModeChangesWithChangeHandler:(id)changeHandler;
-(void)musicPlayerServer:(id)server registerForRepeatModeChangesWithChangeHandler:(id)changeHandler;
@end

