/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObjectCommand.h"
#import "SABaseClientBoundCommand.h"

@class NSArray;

@interface SADomainObjectRetrieve : SABaseClientBoundCommand <SADomainObjectCommand> {
}
@property(copy, nonatomic) NSArray* identifiers;
+(id)domainObjectRetrieveWithDictionary:(id)dictionary context:(id)context;
+(id)domainObjectRetrieve;
-(BOOL)requiresResponse;
// declared property setter: -(void)setIdentifiers:(id)identifiers;
// declared property getter: -(id)identifiers;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

