/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MCObject.h"
#import "MCAnimationPathSupport.h"
#import "MCFilterSupport.h"

@class NSSet, NSDictionary, NSMutableDictionary, NSString, NSArray, MCPlugSlide, MCAssetVideo, NSMutableSet, MCContainerEffect, MCSong;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {
@private
	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned mFlags;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned mIndex;
	float mAudioVolume;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	float mAudioDuckLevel;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;
	NSString* mFrameID;
	MCContainerEffect* mContainer;
}
@property(readonly, assign) unsigned char countOfLayouts;
@property(assign, nonatomic) unsigned char currentLayoutIndex;
@property(assign) MCContainerEffect* container;	// @synthesize=mContainer
@property(assign, nonatomic) float rotation;
@property(assign, nonatomic) float scale;
@property(assign, nonatomic) CGPoint center;
@property(copy) NSString* kenBurnsType;
@property(copy) NSDictionary* frameAttributes;
@property(copy) NSString* frameID;	// @synthesize=mFrameID
@property(assign, nonatomic) double duration;	// @synthesize=mDuration
@property(readonly, assign) BOOL durationIsDefined;
@property(assign, nonatomic) double startTime;	// @synthesize=mStartTime
@property(readonly, assign) BOOL startTimeIsDefined;
@property(assign, nonatomic) double audioDuckOutDuration;	// @synthesize=mAudioDuckOutDuration
@property(assign, nonatomic) double audioDuckInDuration;	// @synthesize=mAudioDuckInDuration
@property(assign, nonatomic) float audioDuckLevel;	// @synthesize=mAudioDuckLevel
@property(assign, nonatomic) double audioFadeOutDuration;	// @synthesize=mAudioFadeOutDuration
@property(assign, nonatomic) double audioFadeInDuration;	// @synthesize=mAudioFadeInDuration
@property(assign, nonatomic) float audioVolume;	// @synthesize=mAudioVolume
@property(assign, nonatomic) unsigned index;	// @synthesize=mIndex
@property(readonly, assign) MCSong* song;	// @synthesize=mSong
@property(retain) MCPlugSlide* plug;	// @synthesize=mPlug
@property(retain) MCAssetVideo* asset;
@property(readonly, assign, nonatomic) unsigned countOfFilters;
@property(readonly, assign) NSArray* orderedFilters;
@property(readonly, assign) NSSet* filters;
@property(readonly, assign) unsigned countOfAnimationPaths;
@property(readonly, assign) NSSet* animationPaths;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
// declared property setter: -(void)setContainer:(id)container;
// declared property getter: -(id)container;
// declared property setter: -(void)setFrameID:(id)anId;
// declared property getter: -(id)frameID;
// declared property getter: -(double)duration;
// declared property getter: -(double)startTime;
// declared property setter: -(void)setAudioDuckOutDuration:(double)duration;
// declared property getter: -(double)audioDuckOutDuration;
// declared property setter: -(void)setAudioDuckInDuration:(double)duration;
// declared property getter: -(double)audioDuckInDuration;
// declared property setter: -(void)setAudioDuckLevel:(float)level;
// declared property getter: -(float)audioDuckLevel;
// declared property setter: -(void)setAudioFadeOutDuration:(double)duration;
// declared property getter: -(double)audioFadeOutDuration;
// declared property setter: -(void)setAudioFadeInDuration:(double)duration;
// declared property getter: -(double)audioFadeInDuration;
// declared property setter: -(void)setAudioVolume:(float)volume;
// declared property getter: -(float)audioVolume;
// declared property setter: -(void)setIndex:(unsigned)index;
// declared property getter: -(unsigned)index;
-(void)_copySelfToSnapshot:(id)snapshot;
// declared property setter: -(void)setCurrentLayoutIndex:(unsigned char)index;
// declared property getter: -(unsigned char)currentLayoutIndex;
// declared property getter: -(unsigned char)countOfLayouts;
// declared property setter: -(void)setFrameAttributes:(id)attributes;
// declared property getter: -(id)frameAttributes;
-(void)setFrameAttribute:(id)attribute forKey:(id)key;
-(id)frameAttributeForKey:(id)key;
// declared property setter: -(void)setDuration:(double)duration;
// declared property getter: -(BOOL)durationIsDefined;
-(void)undefineDuration;
// declared property setter: -(void)setStartTime:(double)time;
// declared property getter: -(BOOL)startTimeIsDefined;
-(void)undefineStartTime;
// declared property setter: -(void)setPlug:(id)plug;
// declared property getter: -(id)plug;
-(void)setSongForAsset:(id)asset;
// declared property getter: -(id)song;
// declared property setter: -(void)setRotation:(float)rotation;
// declared property getter: -(float)rotation;
// declared property setter: -(void)setScale:(float)scale;
// declared property getter: -(float)scale;
// declared property setter: -(void)setCenter:(CGPoint)center;
// declared property getter: -(CGPoint)center;
// declared property setter: -(void)setKenBurnsType:(id)type;
// declared property getter: -(id)kenBurnsType;
// declared property setter: -(void)setAsset:(id)asset;
// declared property getter: -(id)asset;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(id)init;
-(void)removeAllAnimationPaths;
-(void)removeAnimationPathForKey:(id)key;
-(void)addAnimationPath:(id)path;
-(id)animationPathForKey:(id)key;
// declared property getter: -(unsigned)countOfAnimationPaths;
// declared property getter: -(id)animationPaths;
-(id)imprintsForAnimationPaths;
-(void)demolishAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)imprints;
-(void)unobserveFilter:(id)filter;
-(void)observeFilter:(id)filter;
-(void)moveFiltersAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)indices;
-(id)insertFilterWithFilterID:(id)filterID atIndex:(unsigned)index;
-(id)addFilterWithFilterID:(id)filterID;
-(id)filterAtIndex:(unsigned)index;
// declared property getter: -(unsigned)countOfFilters;
// declared property getter: -(id)filters;
// declared property getter: -(id)orderedFilters;
-(id)imprintsForFilters;
-(void)demolishFilters;
-(void)initFiltersWithImprints:(id)imprints;
@end

