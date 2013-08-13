/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "NSObject.h"


@protocol MPPlaybackControlsDelegate <NSObject>
@optional
-(BOOL)controlsOverlay:(id)overlay shouldDisableMailPodcastLinkButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideMailPodcastLinkButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didClickMailPodcastLinkButtonForItem:(id)item;
-(void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;
-(BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;
-(unsigned)controlsOverlay:(id)overlay playbackSpeedForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisablePlaybackSpeedButtonForItem:(id)item;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)controlsOverlay;
-(BOOL)controlsOverlay:(id)overlay shouldDisableFastFowardAndRewindButtonForItem:(id)item;
-(void)controlsOverlayDidClickFastForwardButton:(id)controlsOverlay;
-(void)controlsOverlayDidClickRewindButton:(id)controlsOverlay;
-(unsigned)shuffleTypeForPlaybackControls:(id)playbackControls;
-(unsigned)repeatTypeForPlaybackControls:(id)playbackControls;
-(BOOL)hideGeniusButtonForPlaybackControls:(id)playbackControls;
-(BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)playbackControlsScrubber;
-(BOOL)playbackControlsDidTapGeniusButton:(id)playbackControls;
-(BOOL)playbackControls:(id)controls changedShuffleType:(unsigned)type;
-(BOOL)playbackControls:(id)controls changedRepeatType:(unsigned)type;
@end
