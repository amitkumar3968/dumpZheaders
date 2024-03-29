/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSArray;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray* viewIds;
@property(copy, nonatomic) NSNumber* timeInSeconds;
@property(copy, nonatomic) NSArray* commands;
+(id)requestUpdateViewsWithDictionary:(id)dictionary context:(id)context;
+(id)requestUpdateViews;
-(BOOL)requiresResponse;
// declared property setter: -(void)setViewIds:(id)ids;
// declared property getter: -(id)viewIds;
// declared property setter: -(void)setTimeInSeconds:(id)seconds;
// declared property getter: -(id)timeInSeconds;
// declared property setter: -(void)setCommands:(id)commands;
// declared property getter: -(id)commands;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

