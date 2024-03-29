/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SAMPSearchConstraint : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray* searchProperties;
@property(copy, nonatomic) NSString* query;
+(id)searchConstraintWithDictionary:(id)dictionary context:(id)context;
+(id)searchConstraint;
// declared property setter: -(void)setSearchProperties:(id)properties;
// declared property getter: -(id)searchProperties;
// declared property setter: -(void)setQuery:(id)query;
// declared property getter: -(id)query;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

