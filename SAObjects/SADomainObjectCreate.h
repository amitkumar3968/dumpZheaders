/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject, NSURL;

@interface SADomainObjectCreate : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject* object;
@property(copy, nonatomic) NSURL* targetAppId;
+(id)domainObjectCreateWithDictionary:(id)dictionary context:(id)context;
+(id)domainObjectCreate;
-(BOOL)requiresResponse;
// declared property setter: -(void)setObject:(id)object;
// declared property getter: -(id)object;
// declared property setter: -(void)setTargetAppId:(id)anId;
// declared property getter: -(id)targetAppId;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

