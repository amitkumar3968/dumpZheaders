/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol UIMovieScrubberDataSource <NSObject>
-(void)movieScrubber:(id)scrubber requestThumbnailImageForTimestamp:(id)timestamp;
-(float)movieScrubberThumbnailAspectRatio:(id)ratio;
-(id)movieScrubber:(id)scrubber timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;
-(id)movieScrubber:(id)scrubber evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;
-(double)movieScrubberDuration:(id)duration;
@end
