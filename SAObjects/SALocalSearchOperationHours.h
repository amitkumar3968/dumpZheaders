/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSDictionary;

@interface SALocalSearchOperationHours : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSDictionary* operationPeriods;
+(id)operationHoursWithDictionary:(id)dictionary context:(id)context;
+(id)operationHours;
// declared property setter: -(void)setOperationPeriods:(id)periods;
// declared property getter: -(id)operationPeriods;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

