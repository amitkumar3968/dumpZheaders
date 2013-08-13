/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SADuration : AceObject <SAAceSerializable> {
}
@property(retain, nonatomic) NSNumber* value;
@property(copy, nonatomic) NSString* units;
@property(copy, nonatomic) NSString* unit;
+(id)durationWithDictionary:(id)dictionary context:(id)context;
+(id)duration;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setUnits:(id)units;
// declared property getter: -(id)units;
// declared property setter: -(void)setUnit:(id)unit;
// declared property getter: -(id)unit;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

