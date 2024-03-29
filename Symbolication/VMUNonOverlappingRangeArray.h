/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "VMURangeArray.h"


@interface VMUNonOverlappingRangeArray : VMURangeArray {
}
-(VMURange)largestUnusedWithInUse:(id)use;
-(id)subtract:(id)subtract mergeRanges:(BOOL)ranges;
-(void)_mergeAllBitsOfRange:(VMURange)range excludingRanges:(id)ranges mergeRanges:(BOOL)ranges3;
-(void)mergeRanges:(id)ranges excludingRanges:(id)ranges2;
-(void)mergeRange:(VMURange)range excludingRanges:(id)ranges;
-(void)mergeRanges:(id)ranges;
-(void)mergeRange:(VMURange)range;
-(void)sortAndMergeRanges;
-(void)addRange:(VMURange)range;
@end

