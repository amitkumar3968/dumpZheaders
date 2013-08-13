/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString;

@interface SAAssistantDestroyed : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* assistantId;
+(id)assistantDestroyedWithDictionary:(id)dictionary context:(id)context;
+(id)assistantDestroyed;
-(BOOL)requiresResponse;
// declared property setter: -(void)setAssistantId:(id)anId;
// declared property getter: -(id)assistantId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

