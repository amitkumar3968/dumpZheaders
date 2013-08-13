/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "NSCoding.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray, NSArray, NSLock;

@interface SUGradient : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	BOOL _sorted;
	int _type;
}
@property(readonly, assign) int numberOfColorStops;
@property(readonly, assign) NSArray* colorStopOffsets;
@property(readonly, assign) NSArray* colorStopColors;
@property(readonly, assign) SUGradientPoint p1;
@property(readonly, assign) SUGradientPoint p0;
@property(readonly, assign) int gradientType;
+(id)gradientWithColor:(id)color;
-(id)description;
// declared property getter: -(SUGradientPoint)p1;
// declared property getter: -(SUGradientPoint)p0;
// declared property getter: -(int)numberOfColorStops;
-(id)newPatternColorWithSize:(CGSize)size opaque:(BOOL)opaque;
// declared property getter: -(int)gradientType;
-(CGShadingRef)copyShading;
-(CGGradientRef)copyCGGradient;
// declared property getter: -(id)colorStopOffsets;
// declared property getter: -(id)colorStopColors;
-(void)addColorStopWithOffset:(float)offset color:(CGColorRef)color;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)dealloc;
-(id)initWithType:(int)type;
-(id)initWithPropertyList:(id)propertyList;
-(id)initWithPoint0:(SUGradientPoint)point0 point1:(SUGradientPoint)a1 type:(int)type;
@end

