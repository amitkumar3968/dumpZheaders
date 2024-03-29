/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsEntity.h"

@class SASportsTeam, NSString, NSArray, NSNumber;

@interface SASportsAthlete : SASportsEntity {
}
@property(copy, nonatomic) NSArray* statistics;
@property(copy, nonatomic) NSArray* previousTeams;
@property(copy, nonatomic) NSString* position;
@property(copy, nonatomic) NSString* lastName;
@property(copy, nonatomic) NSNumber* injured;
@property(copy, nonatomic) NSString* gender;
@property(copy, nonatomic) NSArray* formattedMetadata;
@property(copy, nonatomic) NSString* firstName;
@property(copy, nonatomic) NSArray* athleteMetadata;
@property(retain, nonatomic) SASportsTeam* activeTeam;
+(id)athleteWithDictionary:(id)dictionary context:(id)context;
+(id)athlete;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setStatistics:(id)statistics;
// declared property getter: -(id)statistics;
// declared property setter: -(void)setPreviousTeams:(id)teams;
// declared property getter: -(id)previousTeams;
// declared property setter: -(void)setPosition:(id)position;
// declared property getter: -(id)position;
// declared property setter: -(void)setLastName:(id)name;
// declared property getter: -(id)lastName;
// declared property setter: -(void)setInjured:(id)injured;
// declared property getter: -(id)injured;
// declared property setter: -(void)setGender:(id)gender;
// declared property getter: -(id)gender;
// declared property setter: -(void)setFormattedMetadata:(id)metadata;
// declared property getter: -(id)formattedMetadata;
// declared property setter: -(void)setFirstName:(id)name;
// declared property getter: -(id)firstName;
// declared property setter: -(void)setAthleteMetadata:(id)metadata;
// declared property getter: -(id)athleteMetadata;
// declared property setter: -(void)setActiveTeam:(id)team;
// declared property getter: -(id)activeTeam;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

