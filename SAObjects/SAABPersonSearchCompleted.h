/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseCommand.h"
#import "SAServerBoundCommand.h"

@class NSString, NSArray;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString* refId;	// @dynamic
@property(copy, nonatomic) NSString* aceId;	// @dynamic
@property(copy, nonatomic) NSArray* results;
+(id)personSearchCompletedWithResults:(id)results;
+(id)personSearchCompletedWithDictionary:(id)dictionary context:(id)context;
+(id)personSearchCompleted;
// declared property setter: -(void)setResults:(id)results;
// declared property getter: -(id)results;
-(id)initWithResults:(id)results;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

