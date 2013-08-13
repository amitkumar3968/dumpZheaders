/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MRLayer.h"

@class NSDictionary, NSMutableDictionary, NSArray, NSMutableArray, MRTransition, MCContainerNavigator;

@interface MRLayerNavigator : MRLayer {
@private
	MCContainerNavigator* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	MRLayer* mNextSublayer;
	MRTransition* mCurrentTransition;
	BOOL mIsTransitioning;
	BOOL mTransitionWasAborted;
	MRLayer* mSublayerToPrecompute;
	id mPrecomputingTarget;
	unsigned mPrecomputingType;
	double mTransitionStartTime;
	double mTransitionDuration;
	BOOL mTransitionIsBackwards;
	NSDictionary* mTransitionChanges;
	NSMutableArray* mHistoryBack;
	NSMutableArray* mHistoryForth;
	MRLayer* mCurrentSublayer;
	BOOL mBackAndForthIsEnabled;
	double mForcedTransitionTime;
}
@property(assign, nonatomic) double forcedTransitionTime;	// @synthesize=mForcedTransitionTime
@property(assign) BOOL backAndForthIsEnabled;	// @synthesize=mBackAndForthIsEnabled
@property(readonly, assign) MRLayer* currentSublayer;	// @synthesize=mCurrentSublayer
@property(readonly, assign) NSArray* sublayers;	// @synthesize=mSublayers
// declared property setter: -(void)setForcedTransitionTime:(double)time;
// declared property getter: -(double)forcedTransitionTime;
// declared property setter: -(void)setBackAndForthIsEnabled:(BOOL)enabled;
// declared property getter: -(BOOL)backAndForthIsEnabled;
// declared property getter: -(id)currentSublayer;
// declared property getter: -(id)sublayers;
-(id)_dumpLayerWithOptions:(unsigned)options;
-(id)_currentState;
-(void)endTransitionToSublayer;
-(double)goBack;
-(double)goForth;
-(double)doTransitionBackwards:(id)backwards;
-(double)doTransition:(id)transition;
-(double)doTransition:(id)transition backwards:(BOOL)backwards;
-(double)abortTransition:(id)transition;
-(double)finishTransition:(id)transition;
-(id)actionForKey:(id)key recursive:(BOOL)recursive;
-(id)actionHitAtPoint:(CGPoint)point layer:(id*)layer;
-(id)sublayerForPlugObjectID:(id)plugObjectID recursive:(BOOL)recursive;
-(id)sublayerForID:(id)anId;
-(BOOL)_isNative3D;
-(BOOL)hasAudio;
-(id)sublayerHitAtPoint:(CGPoint)point onlyIfHitElement:(BOOL)element localPoint:(CGPoint*)point3;
-(id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(BOOL)isInfinite;
-(BOOL)isAlphaFriendly;
-(BOOL)isOpaque;
-(BOOL)isLoadedForTime:(double)time;
-(void)depreactivate:(BOOL)depreactivate;
-(void)deactivate;
-(void)endMorphing;
-(void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;
-(void)synchronizeTime;
-(BOOL)hasSomethingToRender;
-(void)setPixelSize:(CGSize)size;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)cleanup;
-(id)initWithPlug:(id)plug andParameters:(id)parameters inSuperlayer:(id)superlayer;
-(void)_preprecomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)_prerenderSublayersAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(id)_retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)_renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)_precomputeAtTime:(double)time inContext:(id)context withArguments:(id)arguments;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)requestRebuildAudio;
-(void)_unobservePlugOnDepreactivate;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlug;
-(void)_observePlug;
-(void)_unobserveSublayer:(id)sublayer;
-(void)_observeSublayer:(id)sublayer;
-(void)_deleteSublayer:(id)sublayer;
-(id)_createSublayerForPlug:(id)plug;
-(void)_executeLayerCommandQueue;
@end

