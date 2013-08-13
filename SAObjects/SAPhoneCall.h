/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSString, SAPersonAttribute, NSURL;

@interface SAPhoneCall : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSString* recipient;
@property(assign, nonatomic) BOOL faceTime;
@property(retain, nonatomic) SAPersonAttribute* callRecipient;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)callWithDictionary:(id)dictionary context:(id)context;
+(id)call;
-(BOOL)requiresResponse;
// declared property setter: -(void)setRecipient:(id)recipient;
// declared property getter: -(id)recipient;
// declared property setter: -(void)setFaceTime:(BOOL)time;
// declared property getter: -(BOOL)faceTime;
// declared property setter: -(void)setCallRecipient:(id)recipient;
// declared property getter: -(id)callRecipient;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
