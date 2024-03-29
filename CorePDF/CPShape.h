/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicObject.h"
#import "CPDisposable.h"


@interface CPShape : CPGraphicObject <CPDisposable> {
	unsigned pdfObjectID;
	CGPathRef path;
	BOOL isUprightRectangle;
	int windingRule;
	float lineWidth;
	float miterLimit;
	int lineCap;
	int lineJoin;
	CGColorRef fillColor;
	CGColorRef strokeColor;
	CGPDFObject* fillObject;
	CGPDFObject* strokeObject;
	CGAffineTransform paintTransform;
	BOOL boundsComputed;
	BOOL renderedBoundsComputed;
}
@property(assign) CGAffineTransform paintTransform;	// converted property
@property(assign) int lineJoin;	// converted property
@property(assign) int lineCap;	// converted property
@property(assign) float miterLimit;	// converted property
@property(assign) float lineWidth;	// converted property
@property(assign) CGPDFObject* strokeObject;	// converted property
@property(assign) CGColorRef strokeColor;	// converted property
@property(assign) CGPDFObject* fillObject;	// converted property
@property(assign) CGColorRef fillColor;	// converted property
@property(assign) int windingRule;	// converted property
@property(assign) CGPathRef path;	// converted property
@property(assign) unsigned pdfObjectID;	// converted property
@property(readonly, assign) BOOL isUprightRectangle;	// converted property
-(unsigned)pathElementCount;
-(void)makeLineFromVertex:(CGPoint)vertex toVertex:(CGPoint)vertex2;
-(id)string;
-(void)addShape:(id)shape;
-(BOOL)canCombineWith:(id)with;
-(BOOL)isVisible;
-(BOOL)isStrokeFor:(id)aFor;
-(BOOL)hasSamePathAs:(id)as;
// converted property setter: -(void)setPaintTransform:(CGAffineTransform)transform;
// converted property getter: -(CGAffineTransform)paintTransform;
// converted property setter: -(void)setLineJoin:(int)join;
// converted property getter: -(int)lineJoin;
// converted property setter: -(void)setLineCap:(int)cap;
// converted property getter: -(int)lineCap;
// converted property setter: -(void)setMiterLimit:(float)limit;
// converted property getter: -(float)miterLimit;
// converted property setter: -(void)setLineWidth:(float)width;
// converted property getter: -(float)lineWidth;
-(BOOL)hasStroke;
// converted property setter: -(void)setStrokeObject:(CGPDFObject*)object;
// converted property getter: -(CGPDFObject*)strokeObject;
// converted property setter: -(void)setStrokeColor:(CGColorRef)color;
// converted property getter: -(CGColorRef)strokeColor;
-(BOOL)hasFill;
// converted property setter: -(void)setFillObject:(CGPDFObject*)object;
// converted property getter: -(CGPDFObject*)fillObject;
// converted property setter: -(void)setFillColor:(CGColorRef)color;
// converted property getter: -(CGColorRef)fillColor;
// converted property setter: -(void)setWindingRule:(int)rule;
// converted property getter: -(int)windingRule;
-(long)zOrder;
-(void)accept:(id)accept;
-(id)attributes;
// converted property getter: -(BOOL)isUprightRectangle;
-(CGRect)innerBounds;
-(void)recomputeRenderedBounds;
-(CGRect)renderedBounds;
// converted property setter: -(void)setPath:(CGPathRef)path;
// converted property getter: -(CGPathRef)path;
// converted property setter: -(void)setPdfObjectID:(unsigned)anId;
// converted property getter: -(unsigned)pdfObjectID;
-(void)recomputeBounds;
-(CGRect)bounds;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)init;
-(id)initWithPDFShape:(CPPDFShape*)pdfshape;
@end

