/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SWAccessory.h"


@interface SWRemote : SWAccessory {
	BOOL _isListeningToRemote;
}
@property(readonly, assign, nonatomic) BOOL isListeningToRemote;	// @synthesize=_isListeningToRemote
// declared property getter: -(BOOL)isListeningToRemote;
-(void)stopListeningToRemoteCommands;
-(void)beginListeningToRemoteCommands;
@end

