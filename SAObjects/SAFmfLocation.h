/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocation.h"

@class NSNumber, SAPersonAttribute, NSString;

@interface SAFmfLocation : SALocation {
}
@property(retain, nonatomic) NSNumber* locationDate;
@property(retain, nonatomic) SAPersonAttribute* friend;
@property(copy, nonatomic) NSString* emailAddress;
@property(retain, nonatomic) NSNumber* distance;
+(id)locationWithDictionary:(id)dictionary context:(id)context;
+(id)location;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setLocationDate:(id)date;
// declared property getter: -(id)locationDate;
// declared property setter: -(void)setFriend:(id)aFriend;
// declared property getter: -(id)friend;
// declared property setter: -(void)setEmailAddress:(id)address;
// declared property getter: -(id)emailAddress;
// declared property setter: -(void)setDistance:(id)distance;
// declared property getter: -(id)distance;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
