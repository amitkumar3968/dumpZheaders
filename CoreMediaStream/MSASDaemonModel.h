/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSASModelBase.h"


@interface MSASDaemonModel : MSASModelBase {
}
+(id)defaultModel;
-(void)clearAllNextActivityDates;
-(void)setNextActivityDate:(id)date forPersonID:(id)personID;
-(id)nextActivityDateByPersonID;
-(id)earliestNextActivityDate;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)databaseVersion currentVersion:(int)version;
-(id)init;
@end
