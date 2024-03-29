/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"
#import "MRMarimbaPlayback.h"
#import "MRMarimbaHitBlobSupport.h"
#import "MRMarimbaBasicPlayback.h"

@class NSDictionary, NSString, EAGLContext, MPFaceDetector, MPDocument, MRRenderer;

@interface MRMarimbaLayer : XXUnknownSuperclass <MRMarimbaPlayback, MRMarimbaHitBlobSupport, MRMarimbaBasicPlayback> {
@private
	MRRenderer* _renderer;
	MPDocument* _document;
	BOOL _masterClockIsSet;
	BOOL _bailTimeWatcher;
	BOOL _stopWithVideo;
	BOOL _wasSuspended;
	MPFaceDetector* _faceDetector;
	float _morphingToAspectRatio;
	CGSize _frameBufferSize;
	NSDictionary* _nextMorphInfo;
	BOOL _usesNewImageManager;
	BOOL _enableSlideDidChangeNotification;
	NSString* _lastSlideChange;
	EAGLContext* _context;
	unsigned _viewRenderbuffer;
	unsigned _viewFramebuffer;
	unsigned _depthBuffer;
	BOOL _isReadonly;
	BOOL _slidesAreReadonly;
}
@property(assign, nonatomic) BOOL enableSlideDidChangeNotification;	// @synthesize=_enableSlideDidChangeNotification
@property(readonly, assign, nonatomic) MRRenderer* renderer;
@property(assign, nonatomic) BOOL displaysFPS;
@property(assign, nonatomic) BOOL stopWithVideo;
@property(assign, nonatomic) float volume;
@property(readonly, assign, nonatomic) BOOL isPlaying;
@property(readonly, assign, nonatomic) double timeRemaining;
@property(assign, nonatomic) double time;
@property(retain, nonatomic) MPDocument* document;
@property(readonly, assign) CGSize size;
@property(assign, nonatomic) BOOL usesNewImageManager;	// @synthesize=_usesNewImageManager
@property(assign, nonatomic) BOOL slidesAreReadonly;	// @synthesize=_slidesAreReadonly
@property(assign, nonatomic) BOOL isReadonly;	// @synthesize=_isReadonly
@property(assign, nonatomic) double framesPerSecond;	// @dynamic
@property(assign) BOOL bailTimeWatcher;	// converted property
@property(retain) NSString* lastSlideChange;	// converted property
+(void)releaseResources;
+(id)layerWithDocument:(id)document;
+(id)layerWithDocument:(id)document size:(CGSize)size;
// declared property getter: -(BOOL)enableSlideDidChangeNotification;
// declared property getter: -(BOOL)usesNewImageManager;
// declared property setter: -(void)setSlidesAreReadonly:(BOOL)readonly;
// declared property getter: -(BOOL)slidesAreReadonly;
// declared property setter: -(void)setIsReadonly:(BOOL)readonly;
// declared property getter: -(BOOL)isReadonly;
// declared property setter: -(void)setEnableSlideDidChangeNotification:(BOOL)changeNotification;
-(void)touchesCancelled:(id)cancelled;
-(BOOL)touchesEnded:(id)ended;
-(void)touchesMoved:(id)moved;
-(void)touchesBegan:(id)began;
-(CGImageRef)snapshotAsCGImage;
-(CGImageRef)snapshotAsCGImageForTime:(double)time withSize:(CGSize)size;
-(void)aspectRatioChangedTo:(id)to;
-(void)didAddEffects:(id)effects;
-(void)didApplyStyle:(id)style;
-(BOOL)effectRequestedSlidesAfterDelay:(id)delay;
-(BOOL)effect:(id)effect requestedNumberOfSlides:(unsigned)slides firstSlideIndexStillNeeded:(unsigned)needed;
-(BOOL)nearingEndForSerializerAfterDelay:(id)serializerAfterDelay;
-(BOOL)nearingEndForSerializer:(id)serializer;
-(void)unlockRendering;
-(void)lockRendering;
-(void)_reauthorForAspectRatioChange;
-(void)endMorphing;
-(void)beginMorphingToAspectRatio:(float)aspectRatio withDuration:(double)duration;
-(void)morphToAspectRatio:(float)aspectRatio andOrientation:(int)orientation withDuration:(double)duration;
-(void)warmupRenderer;
-(void)requestRendering:(BOOL)rendering;
// declared property setter: -(void)setFramesPerSecond:(double)second;
// declared property getter: -(double)framesPerSecond;
// declared property getter: -(id)renderer;
-(void)prevFrame;
-(void)nextFrame;
-(void)gotoBeginning;
-(void)gotoEnd;
-(void)goForth;
-(void)goBack;
-(void)setSuspended:(BOOL)suspended;
// declared property setter: -(void)setVolume:(float)volume;
// declared property getter: -(float)volume;
// declared property getter: -(double)timeRemaining;
// declared property setter: -(void)setTime:(double)time;
// declared property getter: -(double)time;
// declared property setter: -(void)setDisplaysFPS:(BOOL)fps;
// declared property getter: -(BOOL)displaysFPS;
// declared property setter: -(void)setStopWithVideo:(BOOL)video;
// declared property getter: -(BOOL)stopWithVideo;
-(void)pauseWhenStill;
-(void)pause;
-(void)play;
// declared property getter: -(BOOL)isPlaying;
-(void)togglePlayback;
-(void)didLiveChanged:(id)changed;
// declared property setter: -(void)setDocument:(id)document;
// declared property getter: -(CGSize)size;
-(void)setBounds:(CGRect)bounds;
// declared property setter: -(void)setUsesNewImageManager:(BOOL)manager;
-(void)setAsynchronous:(BOOL)asynchronous;
// declared property getter: -(id)document;
-(void)cleanup;
-(void)dealloc;
-(id)init;
-(void)_postNotificationForSlideChange:(id)slideChange;
-(void)_slideDidAppear:(id)_slide;
-(void)removeFadeIn;
-(void)gotoSlide:(id)slide;
-(void)gotoPreviousSlide;
-(void)gotoNextSlide;
-(void)removeEffectContainersBeforeTime:(double)time;
-(id)currentSlide;
-(id)currentSlides;
-(void)watcherThread:(id)thread;
-(void)callbackThread:(id)thread;
-(int)_mainLayerIndex;
-(id)_effectContainerForTime:(double)time;
-(id)_firstEffectContainer;
-(void)whenTransitionIsFinishedSendAction:(SEL)action toTarget:(id)target;
-(BOOL)isInTransition;
-(BOOL)isInFade;
-(id)_currentEffectContainer;
-(id)_currentEffectLayer;
-(void)moveToSubtitleForSlide:(id)slide;
-(void)moveToTitleSlide;
-(void)moveToPreviousEffectContainer;
-(void)moveToNextEffectContainer;
-(void)moveToEffectContainer:(id)effectContainer withStartOffset:(double)startOffset toStopOffset:(double)stopOffset blocking:(BOOL)blocking;
-(id)displayedEffectContainers;
-(double)relativeTimeForLayer:(id)layer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTime;
-(void)cancelGesture:(id)gesture;
-(void)endGesture:(id)gesture;
-(void)doGesture:(id)gesture;
-(void)beginGesture:(id)gesture;
-(BOOL)endLiveUpdateForHitBlob:(id)hitBlob;
-(BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;
-(CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;
-(BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;
-(id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint*)point3;
-(BOOL)updateFramebuffer;
-(void)destroyFramebuffer;
// converted property setter: -(void)setBailTimeWatcher:(BOOL)watcher;
// converted property getter: -(BOOL)bailTimeWatcher;
// converted property setter: -(void)setLastSlideChange:(id)change;
// converted property getter: -(id)lastSlideChange;
@end

