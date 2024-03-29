/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawableProperties.h"
#import "OADEffectsParent.h"
#import "OADProperties3DParent.h"

@class OADScene3D, NSArray, OADShape3D, OADFill;

__attribute__((visibility("hidden")))
@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {
@private
	OADFill* mFill;
	NSArray* mEffects;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
}
@property(retain) id shape3D;	// converted property
@property(retain) id scene3D;	// converted property
@property(retain) id effects;	// converted property
@property(retain) id fill;	// converted property
+(id)defaultProperties;
-(BOOL)hasShape3D;
// converted property setter: -(void)setShape3D:(id)d;
// converted property getter: -(id)shape3D;
-(BOOL)hasScene3D;
// converted property setter: -(void)setScene3D:(id)d;
// converted property getter: -(id)scene3D;
-(BOOL)hasEffects;
// converted property setter: -(void)setEffects:(id)effects;
// converted property getter: -(id)effects;
-(BOOL)hasFill;
// converted property setter: -(void)setFill:(id)fill;
// converted property getter: -(id)fill;
-(void)dealloc;
-(id)initWithDefaults;
@end

