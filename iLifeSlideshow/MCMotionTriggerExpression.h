/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCMotionTrigger.h"

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {
@private
	NSString* _expression;
	NSDictionary* _attributes;
}
@property(copy) NSDictionary* attributes;	// @synthesize=_attributes
@property(copy) NSString* expression;	// @synthesize=_expression
+(id)motionTriggerForTargetPlugObjectID:(id)targetPlugObjectID withKey:(id)key duration:(double)duration andExpression:(id)expression;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property getter: -(id)attributes;
// declared property setter: -(void)setExpression:(id)expression;
// declared property getter: -(id)expression;
-(id)description;
-(void)_copySelfToSnapshot:(id)snapshot;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint;
@end

