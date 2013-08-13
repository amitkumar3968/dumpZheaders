/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class SADomainObject;

@interface SADomainObjectDelete : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(retain, nonatomic) SADomainObject* identifier;
+(id)domainObjectDeleteWithDictionary:(id)dictionary context:(id)context;
+(id)domainObjectDelete;
-(BOOL)requiresResponse;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)identifier;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
