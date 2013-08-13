/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MRGIFMoviePlayer : XXUnknownSuperclass {
	NSString* _path;
	CGSize _size;
	CGImageSourceRef _imageSource;
	CGImageRef _currentImage;
	unsigned long _currentIndex;
	unsigned long _numberOfImages;
	double _nextImageTime;
	double _playTimeOffset;
	float _imageDuration;
	BOOL _isPlaying;
}
@property(readonly, assign) CGImageRef currentImage;
@property(assign, nonatomic) BOOL isPlaying;	// @synthesize=_isPlaying
// declared property getter: -(BOOL)isPlaying;
-(void)getNextImage;
// declared property getter: -(CGImageRef)currentImage;
// declared property setter: -(void)setIsPlaying:(BOOL)playing;
-(void)setTime:(double)time;
-(void)cleanup;
-(void)dealloc;
-(id)initWithPath:(id)path andSize:(CGSize)size;
@end

