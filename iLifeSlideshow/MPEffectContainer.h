/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MPFilterSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPActionableSupportInternal.h"

@class MCContainerParallelizer, MPLayer, MCPlug, NSString, NSMutableDictionary, NSMutableArray, MPAudioPlaylist, MPTransition;

@interface MPEffectContainer : XXUnknownSuperclass <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAudioSupport, MPActionableSupport> {
@private
	MCPlug* _containerPlug;
	MCContainerParallelizer* _containerParallelizer;
	NSMutableArray* _effects;
	NSMutableArray* _filters;
	NSMutableDictionary* _attributes;
	MPTransition* _transition;
	MPLayer* _parentLayer;
	MPAudioPlaylist* _audioPlaylist;
	BOOL _transitionDisconnected;
	double _startTime;
	double _duration;
	CGColorRef _backgroundColor;
	NSString* _uuid;
}
@property(assign, nonatomic) double duration;	// @synthesize=_duration
@property(retain, nonatomic) MPTransition* transition;	// @synthesize=_transition
@property(assign, nonatomic) CGColorRef backgroundCGColor;	// @synthesize=_backgroundColor
@property(retain) MPAudioPlaylist* audioPlaylist;	// converted property
@property(assign) double startTime;	// converted property
@property(retain) MPLayer* parentLayer;	// converted property
@property(retain) id scriptingTransition;	// converted property
@property(readonly, retain) NSMutableArray* effects;	// converted property
@property(readonly, retain) NSMutableArray* filters;	// converted property
@property(readonly, retain) NSString* uuid;	// converted property
+(id)effectContainer;
+(BOOL)automaticallyNotifiesObserversForKey:(id)key;
// declared property getter: -(double)duration;
// declared property getter: -(CGColorRef)backgroundCGColor;
-(double)outroTransitionDuration;
-(double)introTransitionDuration;
// declared property setter: -(void)setDuration:(double)duration;
// converted property getter: -(double)startTime;
// converted property getter: -(id)parentLayer;
-(int)index;
// converted property setter: -(void)setAudioPlaylist:(id)playlist;
// converted property getter: -(id)audioPlaylist;
// declared property setter: -(void)setBackgroundCGColor:(CGColorRef)color;
-(void)setBackgroundColorString:(id)string;
-(void)moveFiltersFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)indices;
-(void)insertFilters:(id)filters atIndex:(int)index;
-(void)addFilters:(id)filters;
-(void)addFilter:(id)filter;
// converted property getter: -(id)filters;
// declared property setter: -(void)setTransition:(id)transition;
// declared property getter: -(id)transition;
-(void)moveEffectsFromIndices:(id)indices toIndex:(int)index;
-(void)removeAllEffects;
-(void)removeEffectsAtIndices:(id)indices;
-(void)insertEffects:(id)effects atIndex:(int)index;
-(void)addEffects:(id)effects;
-(void)addEffect:(id)effect;
// converted property getter: -(id)effects;
-(void)dealloc;
-(void)finalize;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)description;
-(id)init;
-(id)fullDebugLog;
-(BOOL)isTransitionConnected;
-(void)reconnectTransition;
-(void)disconnectTransition;
-(double)findMinDuration;
-(void)dump;
-(id)plug;
-(id)container;
-(id)nearestLayerGroup;
-(int)textCount;
-(int)slideCount;
-(id)userInfoAttributeForKey:(id)key;
-(void)setUserInfoAttribute:(id)attribute forKey:(id)key;
-(void)calculateDurationToSmallest:(BOOL)smallest;
-(void)convertFromEffectContainerToParallelizer;
-(void)convertFromParallelizerToEffectContainer;
-(BOOL)shouldBeParallelizer;
// converted property setter: -(void)setStartTime:(double)time;
// converted property setter: -(void)setParentLayer:(id)layer;
-(void)setContainerEffect:(id)effect;
-(void)setContainerParallelizer:(id)parallelizer;
-(void)setContainerPlug:(id)plug;
-(void)cleanup;
-(void)adjustPhasesWithDuration:(double)duration;
-(void)copyAudioPlaylist:(id)playlist;
-(void)copyTransition:(id)transition;
-(void)copyFilters:(id)filters;
-(void)copyEffects:(id)effects;
-(void)copyVars:(id)vars;
-(id)parentDocument;
// converted property getter: -(id)uuid;
-(id)objectID;
-(id)plugID;
// converted property setter: -(void)setScriptingTransition:(id)transition;
// converted property getter: -(id)scriptingTransition;
-(void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;
-(void)removeObjectFromFiltersAtIndex:(int)index;
-(void)insertObject:(id)object inFiltersAtIndex:(int)index;
-(id)objectInFiltersAtIndex:(int)index;
-(int)countOfFilters;
-(void)replaceObjectInEffectsAtIndex:(int)index withObject:(id)object;
-(void)removeObjectFromEffectsAtIndex:(int)index;
-(void)insertObject:(id)object inEffectsAtIndex:(int)index;
-(id)objectInEffectsAtIndex:(int)index;
-(int)countOfEffects;
@end
