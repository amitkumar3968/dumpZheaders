/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "MCAnimationPath.h"


@interface MCAnimationPathPhysics : MCAnimationPath {
@private
	float _staticFriction;
	float _kineticFriction;
	float _skinFriction;
}
@property(assign, nonatomic) float skinFriction;	// @synthesize=_skinFriction
@property(assign, nonatomic) float kineticFriction;	// @synthesize=_kineticFriction
@property(assign, nonatomic) float staticFriction;	// @synthesize=_staticFriction
// declared property setter: -(void)setSkinFriction:(float)friction;
// declared property getter: -(float)skinFriction;
// declared property setter: -(void)setKineticFriction:(float)friction;
// declared property getter: -(float)kineticFriction;
// declared property setter: -(void)setStaticFriction:(float)friction;
// declared property getter: -(float)staticFriction;
-(void)_copySelfToSnapshot:(id)snapshot;
-(id)imprint;
-(id)initWithImprint:(id)imprint;
@end
