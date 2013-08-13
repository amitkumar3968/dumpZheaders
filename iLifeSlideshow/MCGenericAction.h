/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAction.h"

@class NSMutableDictionary, NSDictionary;

@interface MCGenericAction : MCAction {
@private
	NSMutableDictionary* _attributes;
}
@property(copy) NSDictionary* attributes;	// @synthesize=_attributes
+(id)genericActionForTargetPlugObjectID:(id)targetPlugObjectID withAttributes:(id)attributes;
// declared property setter: -(void)setAttributes:(id)attributes;
// declared property getter: -(id)attributes;
-(id)description;
-(void)_copySelfToSnapshot:(id)snapshot;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint;
@end
