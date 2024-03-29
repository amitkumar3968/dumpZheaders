/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EMFPlayer, MFPEffect, NSMutableData, MFPGraphics;

__attribute__((visibility("hidden")))
@interface EMFPlusPlayer : XXUnknownSuperclass {
@private
	MFPGraphics* mGraphics;
	EMFPlayer* mOwner;
	int mLargeType;
	unsigned short mLargeFlags;
	unsigned long mLargeSize;
	NSMutableData* mLargeData;
	MFPEffect* mEffect;
}
@property(retain) id effect;	// converted property
+(float)firstTabPosPastPos:(float)pos stringFormat:(id)format isExplicit:(BOOL*)anExplicit;
+(int)serializableObjectTypeForGUID:(id)guid;
-(int)play:(const char*)play :(unsigned long)arg2;
-(void)resetLargeRecord;
-(int)playRecord:(int)record :(const char*)arg2 :(unsigned long)arg3 :(unsigned short)arg4;
-(int)playSerializableObject:(const char*)object :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playColorCurveEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playRedEyeCorrectionEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playColorBalanceEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playTintEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playLevelsEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playHueSaturationLightnessEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playBrightnessContrastEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playColorLUTEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playColorMatrixEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playSharpenEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playBlurEffectWithData:(const char*)data size:(unsigned long)size;
-(int)playSetCompositingQuality:(const char*)quality :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetCompositingMode:(const char*)mode :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetPixelOffsetMode:(const char*)mode :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetInterpolationMode:(const char*)mode :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetTextContrast:(const char*)contrast :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetTextRenderingHint:(const char*)hint :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetAntiAliasMode:(const char*)mode :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetRenderingOrigin:(const char*)origin :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playOffsetClip:(const char*)clip :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetClipRegion:(const char*)region :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetClipPath:(const char*)path :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetClipRect:(const char*)rect :(unsigned long)arg2 :(unsigned short)arg3;
-(int)setClipPath:(CGPathRef)path flags:(unsigned short)flags;
-(int)playResetClip:(const char*)clip :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetPageTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playRotateWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playScaleWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playTranslateWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playMultiplyWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playResetWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSetWorldTransform:(const char*)transform :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playEndContainer:(const char*)container :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playBeginContainerNoParams:(const char*)params :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playBeginContainer:(const char*)container :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playRestore:(const char*)restore :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playSave:(const char*)save :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playGetDC:(const char*)dc :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawDriverString:(const char*)string :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawString:(const char*)string :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawImagePoints:(const char*)points :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawImage:(const char*)image :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillPath:(const char*)path :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawPath:(const char*)path :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawCurve:(const char*)curve :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawClosedCurve:(const char*)curve :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillClosedCurve:(const char*)curve :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawBeziers:(const char*)beziers :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawPie:(const char*)pie :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillPie:(const char*)pie :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawArc:(const char*)arc :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawLines:(const char*)lines :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillPolygon:(const char*)polygon :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawRects:(const char*)rects :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillRects:(const char*)rects :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playDrawEllipse:(const char*)ellipse :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playFillEllipse:(const char*)ellipse :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playClear:(const char*)clear :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playStrokePath:(CGPathRef)path :(const char*)arg2 :(unsigned long)arg3 :(unsigned short)arg4;
-(int)playFillPath:(CGPathRef)path :(const char*)arg2 :(unsigned long)arg3 :(unsigned short)arg4;
-(CGPathRef)canvasInWorldCoordinates;
-(int)playObject:(const char*)object :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playGraphics:(const char*)graphics :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playCustomLineCap:(const char*)cap :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playImageAttributes:(const char*)attributes :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playStringFormat:(const char*)format :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playFont:(const char*)font :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playImage:(const char*)image :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playRegion:(const char*)region :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playPath:(const char*)path :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playPen:(const char*)pen :(unsigned long)arg2 :(unsigned char)arg3;
-(int)playBrush:(const char*)brush :(unsigned long)arg2 :(unsigned char)arg3;
-(int)readBrush:(const char*)brush :(unsigned long)arg2 returnBrush:(id*)brush3;
-(int)readGradientBrush:(id)brush from:(const char**)from brushFlags:(unsigned long)flags;
-(int)readPath:(const char*)path :(unsigned long)arg2 returnPath:(CGPathRef*)path3;
-(int)readImage:(const char*)image :(unsigned long)arg2 :(id*)arg3;
-(int)playHeader:(const char*)header :(unsigned long)arg2 :(unsigned short)arg3;
-(int)playUnknown:(const char*)unknown :(unsigned long)arg2 :(int)arg3 :(unsigned short)arg4;
// converted property setter: -(void)setEffect:(id)effect;
// converted property getter: -(id)effect;
-(void)dealloc;
-(id)initWithOwner:(id)owner canvas:(CGRect)canvas;
@end

