/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSURL* alarmId;
+(id)createCompletedWithDictionary:(id)dictionary context:(id)context;
+(id)createCompleted;
// declared property setter: -(void)setAlarmId:(id)anId;
// declared property getter: -(id)alarmId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

