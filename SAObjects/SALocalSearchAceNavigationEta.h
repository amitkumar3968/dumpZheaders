/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SADistance, SADuration;

@interface SALocalSearchAceNavigationEta : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) SADuration* timeEta;
@property(retain, nonatomic) SADistance* distanceEta;
+(id)aceNavigationEtaWithDictionary:(id)dictionary context:(id)context;
+(id)aceNavigationEta;
// declared property setter: -(void)setTimeEta:(id)eta;
// declared property getter: -(id)timeEta;
// declared property setter: -(void)setDistanceEta:(id)eta;
// declared property getter: -(id)distanceEta;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

