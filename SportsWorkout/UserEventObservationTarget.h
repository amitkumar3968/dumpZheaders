/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "ObservationTarget.h"

@class NSString;

@interface UserEventObservationTarget : ObservationTarget {
	NSString* _event;
}
@property(retain, nonatomic) NSString* event;	// @synthesize=_event
+(id)targetWithEvent:(id)event selector:(SEL)selector;
// declared property setter: -(void)setEvent:(id)event;
// declared property getter: -(id)event;
-(id)description;
-(void)dealloc;
@end

