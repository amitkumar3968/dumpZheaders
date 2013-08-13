/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect : OADEffect {
@private
	OADColor* mColor;
	float mRadius;
}
@property(assign) float radius;	// converted property
@property(retain) id color;	// converted property
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
// converted property setter: -(void)setRadius:(float)radius;
// converted property getter: -(float)radius;
// converted property setter: -(void)setColor:(id)color;
// converted property getter: -(id)color;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end
