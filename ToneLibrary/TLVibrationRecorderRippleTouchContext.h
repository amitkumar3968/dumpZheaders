/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "ToneLibrary-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface TLVibrationRecorderRippleTouchContext : XXUnknownSuperclass {
	double _creationTimestamp;
	CGPoint _location;
	float _speed;
}
@property(readonly, assign, nonatomic) float speed;	// @synthesize=_speed
@property(readonly, assign, nonatomic) CGPoint location;	// @synthesize=_location
// declared property getter: -(float)speed;
// declared property getter: -(CGPoint)location;
-(double)timeIntervalSinceCreation;
-(void)reset;
-(void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location speed:(float)speed;
-(void)configureWithTimeIntervalSinceCreation:(double)timeIntervalSinceCreation location:(CGPoint)location;
-(id)init;
@end

