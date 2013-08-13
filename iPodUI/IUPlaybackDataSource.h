/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUMediaDataSource.h"


@interface IUPlaybackDataSource : IUMediaDataSource {
	BOOL _restartPlaybackOnly;
	BOOL _preservePlaybackState;
	unsigned _shuffleType;
}
@property(assign, nonatomic) unsigned shuffleType;	// @synthesize=_shuffleType
@property(assign, nonatomic) BOOL preservePlaybackState;	// @synthesize=_preservePlaybackState
@property(assign, nonatomic) BOOL restartPlaybackOnly;	// @synthesize=_restartPlaybackOnly
+(Class)queueFeederClass;
// declared property setter: -(void)setShuffleType:(unsigned)type;
// declared property getter: -(unsigned)shuffleType;
// declared property setter: -(void)setRestartPlaybackOnly:(BOOL)only;
// declared property getter: -(BOOL)restartPlaybackOnly;
// declared property setter: -(void)setPreservePlaybackState:(BOOL)state;
// declared property getter: -(BOOL)preservePlaybackState;
-(id)init;
@end

