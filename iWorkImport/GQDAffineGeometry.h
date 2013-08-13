/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDAffineGeometry : XXUnknownSuperclass <GQDNameMappable> {
@private
	CGSize mNaturalSize;
	CGSize mSize;
	BOOL mSizesLocked;
	BOOL mAspectRatioLocked;
	CGPoint mPosition;
	float mAngle;
	BOOL mHorizontalFlip;
	BOOL mVerticalFlip;
	float mShearXAngle;
	float mShearYAngle;
}
@property(assign) float angle;	// converted property
@property(assign) CGPoint position;	// converted property
@property(assign) CGSize size;	// converted property
@property(assign) CGSize naturalSize;	// converted property
+(CGRect)boundsOfTransformedRect:(CGRect)transformedRect transform:(id)transform;
+(void)transformRect:(CGRect)rect transform:(id)transform upperLeft:(CGPoint*)left lowerLeft:(CGPoint*)left4 lowerRight:(CGPoint*)right upperRight:(CGPoint*)right6;
+(const StateSpec*)stateForReading;
-(id).cxx_construct;
-(CGAffineTransform)transformHasVFlip:(BOOL)flip vFlip:(BOOL)flip2 hasHFlip:(BOOL)flip3 hFlip:(BOOL)flip4;
-(CGAffineTransform)transform;
-(CGRect)naturalBounds;
-(CGPoint)nonrotatedPosition;
-(CGSize)sizeOfBoundingBox;
-(float)shearYAngle;
-(float)shearXAngle;
-(BOOL)verticalFlip;
-(BOOL)horizontalFlip;
// converted property setter: -(void)setAngle:(float)angle;
// converted property getter: -(float)angle;
// converted property setter: -(void)setPosition:(CGPoint)position;
// converted property getter: -(CGPoint)position;
-(BOOL)aspectRatioLocked;
-(BOOL)sizesLocked;
// converted property setter: -(void)setSize:(CGSize)size;
// converted property getter: -(CGSize)size;
// converted property setter: -(void)setNaturalSize:(CGSize)size;
// converted property getter: -(CGSize)naturalSize;
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end
