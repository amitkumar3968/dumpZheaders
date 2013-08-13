/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : XXUnknownSuperclass <NSCopying> {
@private
	NSMutableArray* mTransforms;
}
@property(retain) id transforms;	// converted property
+(id)tsuColorWithOADColor:(id)oadcolor;
+(id)tsuColorWithRed:(float)red green:(float)green blue:(float)blue;
+(id)tsuColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
+(id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
+(int)mapSchemeColorID:(int)anId colorMap:(id)map;
+(id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;
+(id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)colorForStyleColor:(id)styleColor;
-(void)addTransformOfType:(int)type value:(float)value;
-(void)addTransformOfType:(int)type;
// converted property setter: -(void)setTransforms:(id)transforms;
// converted property getter: -(id)transforms;
-(void)dealloc;
-(void)addTransform:(id)transform;
-(id)copyWithZone:(NSZone*)zone;
@end
