/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AVQueueFeeder : XXUnknownSuperclass {
}
-(double)bookmarkTimeForIndex:(unsigned)index;
-(void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;
-(void)contentsDidChangeByRemovingRange:(NSRange)contents;
-(void)contentsDidChangeByInsertingRange:(NSRange)contents;
-(id)playbackInfoAtIndex:(unsigned)index;
-(id)pathAtIndex:(unsigned)index;
-(unsigned)itemCount;
-(unsigned)numberOfPaths;
-(id)init;
@end

