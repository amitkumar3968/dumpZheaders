/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PhotoLibrary-Structs.h"

@class PLManagedAsset, NSArray, NSObject;
@protocol PLSlideshowPluginDelegate, PLAssetContainer;

@interface PLSlideshowPlugin : XXUnknownSuperclass {
	id<PLSlideshowPluginDelegate> _delegate;
	NSObject* _album;
	NSArray* _albumAssets;
	double _secondsPerSlide;
	BOOL _shuffleAlbum;
	BOOL _shouldRepeat;
}
@property(assign, nonatomic) BOOL shouldRepeat;	// @synthesize=_shouldRepeat
@property(assign, nonatomic) BOOL shuffleAlbum;	// @synthesize=_shuffleAlbum
@property(assign, nonatomic) double secondsPerSlide;	// @synthesize=_secondsPerSlide
@property(readonly, assign, nonatomic) PLManagedAsset* currentPhoto;
@property(readonly, assign, nonatomic) NSArray* displayedPhotos;
@property(retain, nonatomic) NSArray* albumAssets;	// @synthesize=_albumAssets
@property(retain, nonatomic) NSObject<PLAssetContainer>* album;
@property(assign, nonatomic) id<PLSlideshowPluginDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setShouldRepeat:(BOOL)repeat;
// declared property getter: -(BOOL)shouldRepeat;
// declared property setter: -(void)setShuffleAlbum:(BOOL)album;
// declared property getter: -(BOOL)shuffleAlbum;
// declared property setter: -(void)setSecondsPerSlide:(double)slide;
// declared property getter: -(double)secondsPerSlide;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setAlbumAssets:(id)assets;
// declared property getter: -(id)albumAssets;
-(void)stopSlideshow;
-(void)resumeSlideshow;
-(void)pauseSlideshow;
-(void)slideshowViewDidDisappear;
-(void)slideshowViewDidAppear;
-(void)slideshowViewWillAppear;
-(id)newSlideshowView;
// declared property getter: -(id)displayedPhotos;
// declared property getter: -(id)currentPhoto;
// declared property getter: -(NSObject*)album;
// declared property setter: -(void)setAlbum:(NSObject*)album;
-(void)dealloc;
@end

