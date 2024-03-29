/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSError;

@interface SUPlayerStatus : XXUnknownSuperclass <NSCopying> {
@private
	double _currentTime;
	double _duration;
	NSError* _error;
	int _state;
}
@property(retain, nonatomic) NSError* error;	// @synthesize=_error
@property(assign, nonatomic) int playerState;	// @synthesize=_state
@property(assign, nonatomic) double duration;	// @synthesize=_duration
@property(assign, nonatomic) double currentTime;	// @synthesize=_currentTime
// declared property setter: -(void)setPlayerState:(int)state;
// declared property getter: -(int)playerState;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
// declared property setter: -(void)setDuration:(double)duration;
// declared property getter: -(double)duration;
// declared property setter: -(void)setCurrentTime:(double)time;
// declared property getter: -(double)currentTime;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(void)dealloc;
@end

