/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SASendCommands : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray* commands;
+(id)sendCommandsWithDictionary:(id)dictionary context:(id)context;
+(id)sendCommands;
-(BOOL)requiresResponse;
// declared property setter: -(void)setCommands:(id)commands;
// declared property getter: -(id)commands;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

