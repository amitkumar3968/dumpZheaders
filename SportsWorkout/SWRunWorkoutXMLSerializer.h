/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import "SportsWorkout-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SWRunWorkoutXMLSerializer : XXUnknownSuperclass {
}
+(int)__eventTypeForUserInteractionSnapshotEvent:(id)userInteractionSnapshotEvent;
+(void)__serializeWorkoutDict:(id)dict toURL:(id)url;
+(id)__formatPace:(unsigned)pace;
+(id)__formatTimeInterval:(unsigned)interval;
+(id)__snapshotDictArrayForSnapshotVector:(vector<ISL::IPodSportsWorkout_Run::Snapshot, std::allocator<ISL::IPodSportsWorkout_Run::Snapshot> >)snapshotVector;
+(id)dictionaryForWorkoutFileAtURL:(id)url;
+(void)serializeWorkoutDict:(id)dict toURL:(id)url;
+(id)__gregorianCalendar;
@end
