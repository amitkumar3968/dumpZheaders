/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MPAction.h"
#import "iLifeSlideshow-Structs.h"

@class NSMutableDictionary, NSString, NSObject, NSDictionary;
@protocol MPActionableSupport;

@interface MPTransitionAction : MPAction {
	NSString* _transitionID;
	double _transitionDuration;
	NSMutableDictionary* _transitionAttributes;
	NSObject<MPActionableSupport>* _transitionDestination;
}
@property(retain, nonatomic) NSObject<MPActionableSupport>* transitionDestination;	// @synthesize=_transitionDestination
@property(assign, nonatomic) double transitionDuration;	// @synthesize=_transitionDuration
@property(copy, nonatomic) NSString* transitionID;	// @synthesize=_transitionID
@property(copy, nonatomic) NSDictionary* transitionAttributes;	// @synthesize=_transitionAttributes
+(id)transitionAction;
// declared property getter: -(id)transitionDestination;
// declared property getter: -(double)transitionDuration;
// declared property getter: -(id)transitionID;
// declared property getter: -(id)transitionAttributes;
-(void)configureTarget;
-(void)setAction:(id)action;
// declared property setter: -(void)setTransitionDestination:(id)destination;
// declared property setter: -(void)setTransitionDuration:(double)duration;
// declared property setter: -(void)setTransitionID:(id)anId;
// declared property setter: -(void)setTransitionAttributes:(id)attributes;
-(id)transitionAttributeForKey:(id)key;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(id)init;
@end

