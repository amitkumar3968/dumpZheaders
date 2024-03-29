/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSString* speechId;
@property(copy, nonatomic) NSData* sessionValidationData;
@property(copy, nonatomic) NSString* language;
@property(copy, nonatomic) NSString* connectionType;
@property(copy, nonatomic) NSString* assistantId;
@property(copy, nonatomic) NSData* activationToken;
+(id)loadAssistantWithDictionary:(id)dictionary context:(id)context;
+(id)loadAssistant;
// declared property setter: -(void)setSpeechId:(id)anId;
// declared property getter: -(id)speechId;
// declared property setter: -(void)setSessionValidationData:(id)data;
// declared property getter: -(id)sessionValidationData;
// declared property setter: -(void)setLanguage:(id)language;
// declared property getter: -(id)language;
// declared property setter: -(void)setConnectionType:(id)type;
// declared property getter: -(id)connectionType;
// declared property setter: -(void)setAssistantId:(id)anId;
// declared property getter: -(id)assistantId;
// declared property setter: -(void)setActivationToken:(id)token;
// declared property getter: -(id)activationToken;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

