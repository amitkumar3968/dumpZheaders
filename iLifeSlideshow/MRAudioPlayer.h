/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "NSObject.h"
#import "MRAudioPlayer.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, AVPlayer;

@protocol MRAudioPlayer <NSObject>
@property(readonly, assign) float currentDuckLevel;
@property(assign, nonatomic) int priority;
@property(assign, nonatomic) double parentDuration;
@property(assign, nonatomic) double duckOutDuration;
@property(assign, nonatomic) double duckInDuration;
@property(assign, nonatomic) float duckLevel;
@property(assign, nonatomic) double fadeOutDuration;
@property(assign, nonatomic) double fadeInDuration;
@property(assign, nonatomic) float volume;
// declared property getter: -(float)currentDuckLevel;
// declared property setter: -(void)setPriority:(int)priority;
// declared property getter: -(int)priority;
// declared property setter: -(void)setParentDuration:(double)duration;
// declared property getter: -(double)parentDuration;
// declared property setter: -(void)setDuckOutDuration:(double)duration;
// declared property getter: -(double)duckOutDuration;
// declared property setter: -(void)setDuckInDuration:(double)duration;
// declared property getter: -(double)duckInDuration;
// declared property setter: -(void)setDuckLevel:(float)level;
// declared property getter: -(float)duckLevel;
// declared property setter: -(void)setFadeOutDuration:(double)duration;
// declared property getter: -(double)fadeOutDuration;
// declared property setter: -(void)setFadeInDuration:(double)duration;
// declared property getter: -(double)fadeInDuration;
// declared property setter: -(void)setVolume:(float)volume;
// declared property getter: -(float)volume;
@end

@interface MRAudioPlayer : XXUnknownSuperclass <MRAudioPlayer> {
	NSArray* _audioItems;
@private
	AVPlayer* _avPlayer;
	double _duration;
	double _parentDuration;
	double _localTime;
	float _volume;
	double _fadeInDuration;
	double _fadeOutDuration;
	float _duckLevel;
	double _duckInDuration;
	double _duckOutDuration;
	int _priority;
	float _currentVolume;
	BOOL _shouldBePlaying;
}
@property(readonly, assign) float currentDuckLevel;
@property(assign, nonatomic) int priority;	// @synthesize=_priority
@property(assign, nonatomic) double parentDuration;	// @synthesize=_parentDuration
@property(assign, nonatomic) double duckOutDuration;	// @synthesize=_duckOutDuration
@property(assign, nonatomic) double duckInDuration;	// @synthesize=_duckInDuration
@property(assign, nonatomic) float duckLevel;	// @synthesize=_duckLevel
@property(assign, nonatomic) double fadeOutDuration;	// @synthesize=_fadeOutDuration
@property(assign, nonatomic) double fadeInDuration;	// @synthesize=_fadeInDuration
@property(assign, nonatomic) float volume;	// @synthesize=_volume
@property(assign, nonatomic) BOOL shouldBePlaying;	// @synthesize=_shouldBePlaying
@property(readonly, assign) float currentVolume;	// @synthesize=_currentVolume
@property(assign, nonatomic) double localTime;	// @synthesize=_localTime
@property(readonly, assign) double duration;	// @synthesize=_duration
@property(readonly, assign) AVPlayer* avPlayer;	// @synthesize=_avPlayer
// declared property getter: -(BOOL)shouldBePlaying;
// declared property getter: -(float)currentVolume;
// declared property setter: -(void)setPriority:(int)priority;
// declared property getter: -(int)priority;
// declared property setter: -(void)setDuckOutDuration:(double)duration;
// declared property getter: -(double)duckOutDuration;
// declared property setter: -(void)setDuckInDuration:(double)duration;
// declared property getter: -(double)duckInDuration;
// declared property setter: -(void)setDuckLevel:(float)level;
// declared property getter: -(float)duckLevel;
// declared property setter: -(void)setFadeOutDuration:(double)duration;
// declared property getter: -(double)fadeOutDuration;
// declared property setter: -(void)setFadeInDuration:(double)duration;
// declared property getter: -(double)fadeInDuration;
// declared property setter: -(void)setVolume:(float)volume;
// declared property getter: -(float)volume;
// declared property setter: -(void)setLocalTime:(double)time;
// declared property getter: -(double)localTime;
// declared property setter: -(void)setParentDuration:(double)duration;
// declared property getter: -(double)parentDuration;
// declared property getter: -(double)duration;
// declared property getter: -(id)avPlayer;
-(void)resyncAudioItem;
-(void)processWithDuckLevel:(float)duckLevel;
// declared property setter: -(void)setShouldBePlaying:(BOOL)bePlaying;
// declared property getter: -(float)currentDuckLevel;
-(void)syncVolumeToAudioPlaylist:(id)audioPlaylist;
-(void)dealloc;
-(id)initWithAudioItems:(id)audioItems andAudioPlaylist:(id)playlist;
@end

