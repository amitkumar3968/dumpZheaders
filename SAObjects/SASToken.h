/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSNumber;

@interface SASToken : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSString* text;
@property(copy, nonatomic) NSNumber* startTime;
@property(assign, nonatomic) BOOL removeSpaceBefore;
@property(assign, nonatomic) BOOL removeSpaceAfter;
@property(copy, nonatomic) NSNumber* endTime;
@property(copy, nonatomic) NSNumber* confidenceScore;
+(id)tokenWithDictionary:(id)dictionary context:(id)context;
+(id)token;
// declared property setter: -(void)setText:(id)text;
// declared property getter: -(id)text;
// declared property setter: -(void)setStartTime:(id)time;
// declared property getter: -(id)startTime;
// declared property setter: -(void)setRemoveSpaceBefore:(BOOL)before;
// declared property getter: -(BOOL)removeSpaceBefore;
// declared property setter: -(void)setRemoveSpaceAfter:(BOOL)after;
// declared property getter: -(BOOL)removeSpaceAfter;
// declared property setter: -(void)setEndTime:(id)time;
// declared property getter: -(id)endTime;
// declared property setter: -(void)setConfidenceScore:(id)score;
// declared property getter: -(id)confidenceScore;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
