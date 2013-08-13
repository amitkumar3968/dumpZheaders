/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADSolidFill : OADFill {
@private
	OADColor* mColor;
	BOOL mIsColorOverridden;
}
@property(retain) id color;	// converted property
+(id)blackFill;
+(id)whiteFill;
+(id)defaultProperties;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(void)setStyleColor:(id)color;
-(BOOL)isColorOverridden;
// converted property setter: -(void)setColor:(id)color;
// converted property getter: -(id)color;
-(id)initWithDefaults;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
@end

