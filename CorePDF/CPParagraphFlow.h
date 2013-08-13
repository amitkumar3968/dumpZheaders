/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, CPParagraph;

@interface CPParagraphFlow : XXUnknownSuperclass {
	CPParagraph* paragraph;
	float fLeft;
	float fRight;
	float fTop;
	float fBottom;
	NSMutableArray* paragraphsAbove;
	NSMutableArray* paragraphsBelow;
	NSMutableArray* paragraphsLeft;
	NSMutableArray* paragraphsRight;
	BOOL placed;
	BOOL adjacentToCallout;
	int calloutType;
	CPParagraph* nextInColumn;
}
@property(assign) int calloutType;	// @synthesize
@property(assign) BOOL placed;	// @synthesize
@property(assign) float fBottom;	// @synthesize
@property(assign) float fRight;	// @synthesize
@property(assign) float fLeft;	// @synthesize
@property(assign, nonatomic) CPParagraph* nextInColumn;	// @synthesize
@property(retain, nonatomic) CPParagraph* paragraph;	// @synthesize
@property(readonly, retain) NSMutableArray* paragraphsAbove;	// converted property
@property(readonly, retain) NSMutableArray* paragraphsBelow;	// converted property
@property(readonly, retain) NSMutableArray* paragraphsLeft;	// converted property
@property(readonly, retain) NSMutableArray* paragraphsRight;	// converted property
// declared property setter: -(void)setNextInColumn:(id)column;
// declared property getter: -(id)nextInColumn;
// declared property setter: -(void)setCalloutType:(int)type;
// declared property getter: -(int)calloutType;
// declared property setter: -(void)setPlaced:(BOOL)placed;
// declared property getter: -(BOOL)placed;
// declared property setter: -(void)setFBottom:(float)bottom;
// declared property getter: -(float)fBottom;
// declared property setter: -(void)setFRight:(float)right;
// declared property getter: -(float)fRight;
// declared property setter: -(void)setFLeft:(float)left;
// declared property getter: -(float)fLeft;
// declared property setter: -(void)setParagraph:(id)paragraph;
// declared property getter: -(id)paragraph;
-(int)rightOrder;
-(int)leftOrder;
-(int)outOrder;
-(int)inOrder:(BOOL)order;
-(int)inOrder;
-(float)area;
-(float)dAbove;
-(float)dBelow;
-(CGRect)belowBounds;
-(void)replaceAbove:(id)above withOneOf:(id)of;
-(void)replaceBelow:(id)below withOneOf:(id)of;
-(void)removeFromAbove:(id)above;
-(void)removeFromBelow:(id)below;
-(id)nextParagraphInColumn:(id)column;
-(id)belowTwoSides:(unsigned)sides;
-(id)twoSides:(unsigned)sides;
-(id)ignoreCallouts:(unsigned)callouts;
-(id)simpleRule:(unsigned)rule;
-(void)setParagraphsRightIn:(id)anIn;
-(void)setParagraphsLeftIn:(id)anIn;
-(void)setParagraphsBelowIn:(id)anIn;
// converted property getter: -(id)paragraphsRight;
// converted property getter: -(id)paragraphsLeft;
// converted property getter: -(id)paragraphsBelow;
// converted property getter: -(id)paragraphsAbove;
-(void)setParagraphsAboveIn:(id)anIn;
-(BOOL)intervalOverlapTop:(float)top bottom:(float)bottom paragraphs:(id)paragraphs;
-(BOOL)intervalOverlapLeft:(float)left right:(float)right paragraphs:(id)paragraphs;
-(BOOL)intervalOverlapLeft:(float)left right:(float)right rects:(id)rects;
-(int)topDescending:(id)descending;
-(id)description;
-(void)dealloc;
-(id)initWithParagraph:(id)paragraph;
@end
