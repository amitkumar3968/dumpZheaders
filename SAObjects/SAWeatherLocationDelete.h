/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class SAWeatherLocation, NSURL;

@interface SAWeatherLocationDelete : SABaseClientBoundCommand {
}
@property(retain, nonatomic) SAWeatherLocation* weatherLocation;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)locationDeleteWithDictionary:(id)dictionary context:(id)context;
+(id)locationDelete;
-(BOOL)requiresResponse;
// declared property setter: -(void)setWeatherLocation:(id)location;
// declared property getter: -(id)weatherLocation;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

