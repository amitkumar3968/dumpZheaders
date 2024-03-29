/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SALocalSearchProtobufAttribute : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* value;
@property(copy, nonatomic) NSString* name;
+(id)protobufAttributeWithDictionary:(id)dictionary context:(id)context;
+(id)protobufAttribute;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

