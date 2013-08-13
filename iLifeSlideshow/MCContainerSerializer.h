/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSArray, NSMutableSet;

@interface MCContainerSerializer : MCContainer {
@private
	NSMutableSet* mPlugs;
	NSArray* mCachedOrderedPlugs;
	double mCachedDuration;
}
@property(readonly, assign) double duration;
@property(readonly, assign) NSArray* orderedPlugs;
@property(readonly, assign, nonatomic) unsigned countOfPlugs;
@property(readonly, assign) NSSet* plugs;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
-(double)timeInForPlug:(id)plug;
// declared property getter: -(id)orderedPlugs;
-(void)removeAllPlugs;
-(void)movePlugsAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removePlugsAtIndices:(id)indices;
-(id)insertPlugsForContainers:(id)containers atIndex:(unsigned)index;
-(id)insertPlugForContainer:(id)container atIndex:(unsigned)index;
-(id)addPlugsForContainers:(id)containers;
-(id)addPlugForContainer:(id)container;
-(id)plugAtIndex:(unsigned)index;
// declared property getter: -(unsigned)countOfPlugs;
// declared property getter: -(id)plugs;
// declared property getter: -(double)duration;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(id)init;
@end

