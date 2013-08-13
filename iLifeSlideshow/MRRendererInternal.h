/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MRContext, NSRecursiveLock, MRRenderArguments, NSThread, NSConditionLock, NSString, NSMutableDictionary, NSArray, NSMutableArray, CMMotionManager, MRImage, NSMutableSet, NSDictionary, MRLayerEffect;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;

@interface MRRendererInternal : XXUnknownSuperclass {
	MRContext* mContext;
	double mMasterStartTime;
	double mMasterDuration;
	int mMasterMode;
	NSThread* mRenderThread;
	NSRecursiveLock* mRenderLock;
	NSConditionLock* mFrameLock;
	double mTimeOffset;
	double mUnalteredTimeOffset;
	double mMasterClock;
	BOOL mIsStalled;
	BOOL mRenderingRequested;
	BOOL mHasToRebuildAudio;
	BOOL mDontShowDRMUI;
	BOOL mSlaveFrameMode;
	CGPoint mContextOffset;
	MRRenderArguments* mRenderArguments;
	CGImageRef mSnapshotAsCGImage;
	NSConditionLock* mSnapshotAsCGImageLock;
	int mPreviousMode;
	double mModeChangeTime;
	NSMutableArray* mSelectedLayers;
	NSMutableDictionary* mLayerTrackings;
	NSMutableSet* mLayersCurrentlyTrackedIn;
	NSMutableDictionary* mGestureRecognizers;
	MRLayerEffect* mLayerCurrentlyTextEditing;
	NSString* mCurrentlyEditedTextElement;
	BOOL mShouldPauseWhenStill;
	BOOL mNeedsToResize;
	BOOL mNeedsToTemporaryResize;
	BOOL mNeedsToResumeOrPauseLayers;
	BOOL mNeedsToSynchronizeTimeInLayers;
	BOOL mNeedsToSynchronizeTimeInAudioMovies;
	CGSize mTemporarySize;
	double mMorphingStartTime;
	double mMorphingEndTime;
	float mMorphingRotationAngle;
	BOOL mMorphingHandlesRotation;
	MRImage* mSnapshotForMorphing;
	NSMutableArray* mActions;
	NSMutableDictionary* mAudioPlayerBuckets;
	NSArray* mAudioPlayerSortedBuckets;
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;
	BOOL mScreenBurnTest;
	unsigned long long mScreenBurnTestCurrentPass;
	MRImage* mScreenBurnTestAccumulationImage1;
	MRImage* mScreenBurnTestAccumulationImage2;
	NSMutableArray* mNavigatorHistoryBack;
	NSMutableArray* mNavigatorHistoryForth;
	NSDictionary* mForcedState;
	CMMotionManager* mMotionManager;
	BOOL mHideTextWhileEditing;
	BOOL mUsesNewImageManager;
	double mFrameTime[64];
	unsigned long mFrameTimeIndex;
	FILE* mRenderingLogFile;
	double mPreviousStartTimeForLog;
	double mLastSaveTimeForLog;
	NSString* mCurrentIDs;
	MRImage* mCurrentIDsImage;
	NSString* mPreviousCurrentIDs;
	double mOuterTime;
	BOOL mInnerTimeNeedsSync;
	BOOL mUseOuterTime;
	BOOL mOuterIsPlaying;
	BOOL mInnerIsPlayingNeedsSync;
	BOOL mUseOuterIsPlaying;
	unsigned mCountOfPreloadingImages;
}
@end
