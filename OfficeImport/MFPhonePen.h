/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPen.h"


__attribute__((visibility("hidden")))
@interface MFPhonePen : MFPen {
@private
	float m_PixelSize;
}
+(id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array LPToDPTransform:(CGAffineTransform)dptransform;
-(void)strokePath:(id)path :(CGPathRef)arg2;
-(void)applyLineCapStyle;
-(void)applyLineJoinStyle:(id)style;
-(void)applyDashedLines;
-(id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double*)array;
@end
