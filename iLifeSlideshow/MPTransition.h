/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class NSMutableDictionary, NSString;

@interface MPTransition : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSMutableDictionary* _attributes;
	id _parent;
	NSString* _transitionID;
	NSString* _presetID;
	double _duration;
	BOOL _isRandom;
	int _randomSeed;
}
@property(assign, nonatomic) double duration;	// @synthesize=_duration
@property(copy, nonatomic) NSString* presetID;	// @synthesize=_presetID
@property(copy, nonatomic) NSString* transitionID;	// @synthesize=_transitionID
@property(assign) int randomSeed;	// converted property
@property(retain) id transitionAttributes;	// converted property
@property(assign) BOOL isRandom;	// converted property
@property(retain) id parentContainer;	// converted property
@property(readonly, retain) id parent;	// converted property
+(id)transitionWithTransitionID:(id)transitionID;
// declared property getter: -(double)duration;
// declared property getter: -(id)presetID;
// declared property getter: -(id)transitionID;
// converted property setter: -(void)setRandomSeed:(int)seed;
// converted property getter: -(int)randomSeed;
// converted property getter: -(id)parentContainer;
// converted property getter: -(id)parent;
-(void)setTransitionAttribute:(id)attribute forKey:(id)key;
-(id)transitionAttributeForKey:(id)key;
// converted property setter: -(void)setTransitionAttributes:(id)attributes;
// converted property getter: -(id)transitionAttributes;
// declared property setter: -(void)setDuration:(double)duration;
// declared property setter: -(void)setPresetID:(id)anId;
// declared property setter: -(void)setTransitionID:(id)anId;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
-(id)initWithTransitionID:(id)transitionID;
-(id)transitionPresetID;
-(double)findMaxDuration;
-(id)convertMPAttributeToMCAttribute:(id)mcattribute withKey:(id)key;
-(id)fullDebugLog;
-(void)dump;
-(id)_transitionAttributes;
-(void)applyFormattedAttributes;
-(id)formattedAttributes;
// converted property setter: -(void)setIsRandom:(BOOL)random;
// converted property getter: -(BOOL)isRandom;
// converted property setter: -(void)setParentContainer:(id)container;
-(id)parentDocument;
-(void)copyAttribures:(id)attribures;
-(void)copyVars:(id)vars;
@end

