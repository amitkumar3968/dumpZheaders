/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject {
}
@property(retain, nonatomic) SASource* groupSource;
@property(copy, nonatomic) NSString* groupName;
+(id)contactGroupWithDictionary:(id)dictionary context:(id)context;
+(id)contactGroup;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setGroupSource:(id)source;
// declared property getter: -(id)groupSource;
// declared property setter: -(void)setGroupName:(id)name;
// declared property getter: -(id)groupName;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
