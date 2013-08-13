/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPZoneBorder;

@interface CPZoneBorderIntersection : XXUnknownSuperclass <NSCopying, CPCopying> {
	CGRect intersectionRect;
	CPZoneBorder* intersectingBorder;
	BOOL forwardVector;
	BOOL backwardVector;
}
@property(assign) BOOL backwardVector;	// converted property
@property(assign) BOOL forwardVector;	// converted property
@property(retain) CPZoneBorder* intersectingBorder;	// converted property
@property(assign) CGRect intersectionRect;	// converted property
-(int)comparePositionLengthwise:(id)lengthwise;
// converted property getter: -(BOOL)backwardVector;
// converted property setter: -(void)setBackwardVector:(BOOL)vector;
// converted property getter: -(BOOL)forwardVector;
// converted property setter: -(void)setForwardVector:(BOOL)vector;
// converted property getter: -(id)intersectingBorder;
// converted property setter: -(void)setIntersectingBorder:(id)border;
// converted property getter: -(CGRect)intersectionRect;
// converted property setter: -(void)setIntersectionRect:(CGRect)rect;
-(id)copyWithZone:(NSZone*)zone;
-(id)initSuper;
@end

