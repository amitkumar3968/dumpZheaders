/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSURL* weatherLocationId;
@property(copy, nonatomic) NSString* error;
+(id)locationAddCompletedWithWeatherLocationId:(id)weatherLocationId;
+(id)locationAddCompletedWithError:(id)error;
+(id)locationAddCompletedWithDictionary:(id)dictionary context:(id)context;
+(id)locationAddCompleted;
// declared property setter: -(void)setWeatherLocationId:(id)anId;
// declared property getter: -(id)weatherLocationId;
// declared property setter: -(void)setError:(id)error;
// declared property getter: -(id)error;
-(id)initWithWeatherLocationId:(id)weatherLocationId;
-(id)initWithError:(id)error;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

