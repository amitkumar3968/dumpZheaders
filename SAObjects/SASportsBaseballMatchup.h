/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASportsMatchup.h"

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup {
}
@property(copy, nonatomic) NSNumber* strikes;
@property(copy, nonatomic) NSNumber* outs;
@property(copy, nonatomic) NSNumber* onThird;
@property(copy, nonatomic) NSNumber* onSecond;
@property(copy, nonatomic) NSNumber* onFirst;
@property(copy, nonatomic) NSString* inningStatus;
@property(copy, nonatomic) NSNumber* homeHits;
@property(copy, nonatomic) NSNumber* homeErrors;
@property(copy, nonatomic) NSNumber* balls;
@property(copy, nonatomic) NSNumber* awayHits;
@property(copy, nonatomic) NSNumber* awayErrors;
+(id)baseballMatchupWithDictionary:(id)dictionary context:(id)context;
+(id)baseballMatchup;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setStrikes:(id)strikes;
// declared property getter: -(id)strikes;
// declared property setter: -(void)setOuts:(id)outs;
// declared property getter: -(id)outs;
// declared property setter: -(void)setOnThird:(id)third;
// declared property getter: -(id)onThird;
// declared property setter: -(void)setOnSecond:(id)second;
// declared property getter: -(id)onSecond;
// declared property setter: -(void)setOnFirst:(id)first;
// declared property getter: -(id)onFirst;
// declared property setter: -(void)setInningStatus:(id)status;
// declared property getter: -(id)inningStatus;
// declared property setter: -(void)setHomeHits:(id)hits;
// declared property getter: -(id)homeHits;
// declared property setter: -(void)setHomeErrors:(id)errors;
// declared property getter: -(id)homeErrors;
// declared property setter: -(void)setBalls:(id)balls;
// declared property getter: -(id)balls;
// declared property setter: -(void)setAwayHits:(id)hits;
// declared property getter: -(id)awayHits;
// declared property setter: -(void)setAwayErrors:(id)errors;
// declared property getter: -(id)awayErrors;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
