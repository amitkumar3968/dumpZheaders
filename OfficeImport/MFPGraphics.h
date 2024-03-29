/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MFPGraphicsState, MFPObjectTable, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPGraphics : XXUnknownSuperclass {
@private
	CGRect mCanvas;
	int mHorzDpi;
	int mVertDpi;
	MFPGraphicsState* mCurrentState;
	NSMutableArray* mStateStack;
	MFPObjectTable* mObjectTable;
	NSMutableDictionary* mAvailableFonts;
}
+(float)unitsPerInch:(int)inch;
-(id).cxx_construct;
-(id)fontNameForUppercaseFontName:(id)uppercaseFontName;
-(void)strokePath:(CGPathRef)path pen:(id)pen;
-(void)fillPath:(CGPathRef)path evenOddRule:(BOOL)rule brush:(id)brush;
-(id)currentState;
-(BOOL)areThereOpenContainers;
-(void)restoreGraphicsStateOrEndContainerWithId:(unsigned long)anId;
-(void)beginContainerWithId:(unsigned long)anId boundsInParent:(CGRect)parent bounds:(CGRect)bounds boundsUnit:(int)unit;
-(void)beginContainerNoParamsWithId:(unsigned long)anId;
-(void)beginContainerWithId:(unsigned long)anId containerTransform:(CGAffineTransform)transform;
-(void)saveGraphicsStateWithId:(unsigned long)anId;
-(CGAffineTransform)pageTransformWithScale:(float)scale unit:(int)unit;
-(float)pixelsPerUnit:(int)unit direction:(int)direction;
-(void)setHorizontalDpi:(int)dpi verticalDpi:(int)dpi2;
-(id)objectTable;
-(CGRect)canvas;
-(void)dealloc;
-(id)initWithCanvas:(CGRect)canvas;
@end

