/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SALocalSearchPeriod.h"
#import "AceObject.h"


@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod> {
}
@property(assign, nonatomic) int startSecondsSinceMidnight;
@property(assign, nonatomic) int endSecondsSinceMidnight;
+(id)rangePeriodWithDictionary:(id)dictionary context:(id)context;
+(id)rangePeriod;
// declared property setter: -(void)setStartSecondsSinceMidnight:(int)midnight;
// declared property getter: -(int)startSecondsSinceMidnight;
// declared property setter: -(void)setEndSecondsSinceMidnight:(int)midnight;
// declared property getter: -(int)endSecondsSinceMidnight;
-(id)encodedClassName;
-(id)groupIdentifier;
@end

