/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASportsTeamRank : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* source;
@property(copy, nonatomic) NSNumber* primary;
@property(copy, nonatomic) NSNumber* position;
+(id)teamRankWithDictionary:(id)dictionary context:(id)context;
+(id)teamRank;
// declared property setter: -(void)setSource:(id)source;
// declared property getter: -(id)source;
// declared property setter: -(void)setPrimary:(id)primary;
// declared property getter: -(id)primary;
// declared property setter: -(void)setPosition:(id)position;
// declared property getter: -(id)position;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

