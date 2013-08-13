/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class SALocation, SAPersonAttribute, NSString;

@interface SAFmfGeoFence : SADomainObject {
}
@property(retain, nonatomic) SALocation* location;
@property(copy, nonatomic) NSString* geoFenceTrigger;
@property(retain, nonatomic) SAPersonAttribute* friend;
+(id)geoFenceWithDictionary:(id)dictionary context:(id)context;
+(id)geoFence;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setLocation:(id)location;
// declared property getter: -(id)location;
// declared property setter: -(void)setGeoFenceTrigger:(id)trigger;
// declared property getter: -(id)geoFenceTrigger;
// declared property setter: -(void)setFriend:(id)aFriend;
// declared property getter: -(id)friend;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

