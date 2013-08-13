/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"


@protocol MRMarimbaHitBlobSupport
-(void)cancelGesture:(id)gesture;
-(void)endGesture:(id)gesture;
-(void)doGesture:(id)gesture;
-(void)beginGesture:(id)gesture;
-(BOOL)endLiveUpdateForHitBlob:(id)hitBlob;
-(BOOL)beginLiveUpdateForHitBlob:(id)hitBlob;
-(CGPoint)convertPoint:(CGPoint)point toHitBlob:(id)hitBlob;
-(BOOL)getOnScreenVertices:(CGPoint [4])vertices forHitBlob:(id)hitBlob;
-(id)blobHitAtPoint:(CGPoint)point fromObjectsForObjectIDs:(id)objectIDs localPoint:(CGPoint*)point3;
@end
