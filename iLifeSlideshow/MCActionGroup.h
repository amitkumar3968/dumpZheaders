/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAction.h"

@class NSArray, NSMutableArray;

@interface MCActionGroup : MCAction {
@private
	NSMutableArray* _actions;
}
@property(readonly, assign, nonatomic) unsigned countOfActions;
@property(readonly, assign, nonatomic) NSArray* actions;	// @synthesize=_actions
+(id)actionGroup;
-(id)description;
-(void)_copySelfToSnapshot:(id)snapshot;
-(void)moveActionsAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removeAllActions;
-(void)removeActionsAtIndices:(id)indices;
-(void)insertActions:(id)actions atIndex:(unsigned)index;
-(void)insertAction:(id)action atIndex:(unsigned)index;
-(void)addActions:(id)actions;
-(void)addAction:(id)action;
-(id)actionAtIndex:(unsigned)index;
// declared property getter: -(unsigned)countOfActions;
// declared property getter: -(id)actions;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint;
-(id)init;
@end
