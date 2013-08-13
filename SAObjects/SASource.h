/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSNumber, NSString;

@interface SASource : SADomainObject {
}
@property(copy, nonatomic) NSNumber* remote;
@property(copy, nonatomic) NSString* domainIdentifier;
@property(copy, nonatomic) NSString* accountName;
@property(copy, nonatomic) NSString* accountIdentifier;
+(id)sourceWithDictionary:(id)dictionary context:(id)context;
+(id)source;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setRemote:(id)remote;
// declared property getter: -(id)remote;
// declared property setter: -(void)setDomainIdentifier:(id)identifier;
// declared property getter: -(id)domainIdentifier;
// declared property setter: -(void)setAccountName:(id)name;
// declared property getter: -(id)accountName;
// declared property setter: -(void)setAccountIdentifier:(id)identifier;
// declared property getter: -(id)accountIdentifier;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
