/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
@private
	NSMutableSet* mSongs;
}
-(void)forgetSong:(id)song;
-(void)learnSong:(id)song;
-(BOOL)isInUse;
-(void)demolish;
-(id)init;
@end

