/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) double value;
@property(copy, nonatomic) NSString* providerId;
@property(assign, nonatomic) double maxValue;
@property(copy, nonatomic) NSString* description;
@property(assign, nonatomic) int count;
+(id)ratingWithDictionary:(id)dictionary context:(id)context;
+(id)rating;
// declared property setter: -(void)setValue:(double)value;
// declared property getter: -(double)value;
// declared property setter: -(void)setProviderId:(id)anId;
// declared property getter: -(id)providerId;
// declared property setter: -(void)setMaxValue:(double)value;
// declared property getter: -(double)maxValue;
// declared property setter: -(void)setDescription:(id)description;
// declared property getter: -(id)description;
// declared property setter: -(void)setCount:(int)count;
// declared property getter: -(int)count;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
