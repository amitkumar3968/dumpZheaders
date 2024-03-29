/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCObject.h"

@class MCContainer, NSSet, NSArray, NSMutableSet;

@interface MCAudioPlaylist : MCObject {
@private
	NSMutableSet* mSongs;
	NSArray* mCachedOrderedSongs;
	float mVolume;
	double mFadeInDuration;
	double mFadeOutDuration;
	float mDuckLevel;
	double mDuckInDuration;
	double mDuckOutDuration;
	MCContainer* mContainer;
}
@property(assign) MCContainer* container;	// @synthesize=mContainer
@property(assign, nonatomic) double duckOutDuration;	// @synthesize=mDuckOutDuration
@property(assign, nonatomic) double duckInDuration;	// @synthesize=mDuckInDuration
@property(assign, nonatomic) float duckLevel;	// @synthesize=mDuckLevel
@property(assign, nonatomic) double fadeOutDuration;	// @synthesize=mFadeOutDuration
@property(assign, nonatomic) double fadeInDuration;	// @synthesize=mFadeInDuration
@property(assign, nonatomic) float volume;	// @synthesize=mVolume
@property(readonly, assign) NSArray* orderedSongs;
@property(readonly, assign) NSSet* songs;
+(id)keyPathsForValuesAffectingValueForKey:(id)key;
// declared property setter: -(void)setContainer:(id)container;
// declared property getter: -(id)container;
// declared property setter: -(void)setDuckOutDuration:(double)duration;
// declared property getter: -(double)duckOutDuration;
// declared property setter: -(void)setDuckInDuration:(double)duration;
// declared property getter: -(double)duckInDuration;
// declared property setter: -(void)setDuckLevel:(float)level;
// declared property getter: -(float)duckLevel;
// declared property setter: -(void)setFadeOutDuration:(double)duration;
// declared property getter: -(double)fadeOutDuration;
// declared property setter: -(void)setFadeInDuration:(double)duration;
// declared property getter: -(double)fadeInDuration;
// declared property setter: -(void)setVolume:(float)volume;
// declared property getter: -(float)volume;
// declared property getter: -(id)orderedSongs;
-(void)moveSongsAtIndices:(id)indices toIndex:(unsigned)index;
-(void)removeAllSongs;
-(void)removeSongsAtIndices:(id)indices;
-(id)insertSongsForAssets:(id)assets atIndex:(unsigned)index;
-(id)insertSongForAsset:(id)asset atIndex:(unsigned)index;
-(id)addSongsForAssets:(id)assets;
-(id)addSongForAsset:(id)asset;
-(id)songAtIndex:(unsigned)index;
-(unsigned)countOfSongs;
// declared property getter: -(id)songs;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)imprint;
-(void)demolish;
-(id)initWithImprint:(id)imprint andMontage:(id)montage;
-(id)init;
@end

