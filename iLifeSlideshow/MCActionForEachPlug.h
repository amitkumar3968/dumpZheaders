/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAction.h"

@class NSString;

@interface MCActionForEachPlug : MCAction {
@private
	MCAction* _action;
	NSString* _prefix;
}
@property(retain) MCAction* action;	// @synthesize=_action
@property(copy) NSString* prefix;	// @synthesize=_prefix
+(id)forEachPlugActionForTargetPlugObjectID:(id)targetPlugObjectID withAction:(id)action andPrefix:(id)prefix;
// declared property setter: -(void)setPrefix:(id)prefix;
// declared property getter: -(id)prefix;
// declared property setter: -(void)setAction:(id)action;
// declared property getter: -(id)action;
-(id)description;
-(void)_copySelfToSnapshot:(id)snapshot;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint;
@end

