/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PLSlideshowPlugin.h"
#import "PLImageLoadingQueueDelegate.h"
#import "PhotoLibrary-Structs.h"

@class PLManagedAsset, PLImageCache, PLImageLoadingQueue, PLImageSource, PLCroppedImageView, PLCachedImage;

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate> {
	PLImageCache* _imageCache;
	PLImageLoadingQueue* _imageLoadingQueue;
	PLImageSource* _imageSource;
	CFArrayRef _imageIndexes;
	unsigned _currentIndex;
	PLManagedAsset* _requestedImage;
	PLCachedImage* _nextImage;
	PLCroppedImageView* _currentImageView;
	PLCroppedImageView* _nextImageView;
	unsigned _didLoadFirstImage : 1;
	unsigned _slideshowTimerDidFire : 1;
	unsigned _slideshowTimerIsScheduled : 1;
	unsigned _paused : 1;
}
-(void)_slideshowTimerFired;
-(void)_crossFadeAnimationDidStop:(id)_crossFadeAnimation finished:(id)finished context:(void*)context;
-(void)_transitionToNextImage;
-(void)_didLoadImage:(id)image;
-(void)_displayFirstImage;
-(void)imageLoadingQueue:(id)queue didLoadImage:(id)image forAsset:(id)asset fromSource:(id)source;
-(void)_requestNextImageSynchronously:(BOOL)synchronously;
-(id)_nextImage;
-(int)_albumImageIndexForSlideIndex:(int)slideIndex;
-(void)_scheduleSlideshowTimer;
-(void)stopSlideshow;
-(void)resumeSlideshow;
-(void)pauseSlideshow;
-(void)slideshowViewDidDisappear;
-(void)slideshowViewDidAppear;
-(void)slideshowViewWillAppear;
-(id)newSlideshowView;
-(CGRect)_contentBounds;
-(void)setAlbumAssets:(id)assets;
-(void)dealloc;
-(id)init;
@end
