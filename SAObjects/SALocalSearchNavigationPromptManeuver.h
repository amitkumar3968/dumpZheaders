/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSURL;

@interface SALocalSearchNavigationPromptManeuver : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSNumber* maneuverIndex;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)navigationPromptManeuverWithDictionary:(id)dictionary context:(id)context;
+(id)navigationPromptManeuver;
-(BOOL)requiresResponse;
// declared property setter: -(void)setManeuverIndex:(id)index;
// declared property getter: -(id)maneuverIndex;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

