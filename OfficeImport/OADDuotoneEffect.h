/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADDuotoneEffect : OADBlipEffect {
@private
	OADColor* mColor1;
	OADColor* mColor2;
	int mTransferMode1;
	int mTransferMode2;
}
@property(assign) int transferMode2;	// converted property
@property(assign) int transferMode1;	// converted property
@property(retain) id color2;	// converted property
@property(retain) id color1;	// converted property
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)setStyleColor:(id)color;
// converted property setter: -(void)setTransferMode2:(int)a2;
// converted property getter: -(int)transferMode2;
// converted property setter: -(void)setTransferMode1:(int)a1;
// converted property getter: -(int)transferMode1;
// converted property setter: -(void)setColor2:(id)a2;
// converted property getter: -(id)color2;
// converted property setter: -(void)setColor1:(id)a1;
// converted property getter: -(id)color1;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

