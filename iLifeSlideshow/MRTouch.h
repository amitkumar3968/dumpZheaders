/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class NSArray, NSMutableArray;

@interface MRTouch : XXUnknownSuperclass {
@private
	NSMutableArray* _gestureRecognizers;
	CGPoint _location;
	double _timestamp;
	unsigned _tapCount;
	int _phase;
}
@property(readonly, assign) NSArray* gestureRecognizers;
@property(assign, nonatomic) int phase;	// @synthesize=_phase
@property(assign, nonatomic) unsigned tapCount;	// @synthesize=_tapCount
@property(assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(assign, nonatomic) CGPoint location;	// @synthesize=_location
+(id)touchWithUITouch:(id)uitouch inView:(id)view;
+(id)touchWithLocation:(CGPoint)location timestamp:(double)timestamp tapCount:(unsigned)count;
// declared property setter: -(void)setPhase:(int)phase;
// declared property getter: -(int)phase;
// declared property setter: -(void)setTapCount:(unsigned)count;
// declared property getter: -(unsigned)tapCount;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property getter: -(double)timestamp;
// declared property setter: -(void)setLocation:(CGPoint)location;
// declared property getter: -(CGPoint)location;
-(id)description;
-(void)removeGestureRecognizer:(id)recognizer;
-(void)addGestureRecognizer:(id)recognizer;
// declared property getter: -(id)gestureRecognizers;
-(void)dealloc;
@end

