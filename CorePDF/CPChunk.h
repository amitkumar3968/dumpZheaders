/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPObject.h"


@interface CPChunk : CPObject {
	CGRect bounds;
	BOOL shrinksWithChildren;
	BOOL dirtyBounds;
	unsigned position;
	long insertionOrder;
}
@property(assign) unsigned chunkPosition;	// converted property
@property(assign) BOOL shrinksWithChildren;	// converted property
@property(assign) long insertionOrder;	// converted property
@property(assign) CGPoint anchor;	// converted property
@property(assign) CGRect bounds;	// converted property
+(float)chooseReferenceFontSizeFrom:(float)from and:(float)anAnd;
-(float)rotationAngle;
// converted property setter: -(void)setChunkPosition:(unsigned)position;
// converted property getter: -(unsigned)chunkPosition;
-(void)translateObjectYBy:(float)by;
-(BOOL)intersectsChild:(CGRect)child;
// converted property setter: -(void)setShrinksWithChildren:(BOOL)children;
// converted property getter: -(BOOL)shrinksWithChildren;
-(BOOL)boundsEqualsRect:(CGRect)rect accuracy:(float)accuracy;
-(BOOL)geometricallyContains:(id)contains;
-(BOOL)overlapsVerticallyWith:(id)with;
-(BOOL)overlapsHorizontallyWith:(id)with;
-(void)orderedInsert:(id)insert usingSelector:(SEL)selector;
-(int)clusterLevelHint;
-(CGSize)advance;
-(float)fontSize;
-(float)bottom;
-(float)top;
-(float)center;
-(float)right;
-(float)left;
-(int)compareChunkPosition:(id)position;
-(int)compareYDescendingX:(id)x;
-(int)compareYDescending:(id)descending;
-(int)compareTopDescending:(id)descending;
-(int)compareYBounds:(id)bounds;
-(int)compareY:(id)y;
-(int)compareLinearBounds:(id)bounds;
-(int)compareXBounds:(id)bounds;
-(int)compareZDescending:(id)descending;
-(int)compareZ:(id)z;
-(int)compareInsertionOrder:(id)order;
-(int)compareX:(id)x;
-(int)compareAnchorYDescending:(id)descending;
-(int)compareAnchorX:(id)x;
-(int)compareAnchorY:(id)y;
-(void)sortUsingSelector:(SEL)selector;
// converted property getter: -(long)insertionOrder;
// converted property setter: -(void)setInsertionOrder:(long)order;
-(void)resizeWith:(id)with;
-(void)fitBoundsToChildren;
-(float)referenceAdvanceWidth;
-(float)absoluteGapTo:(id)to;
-(float)advanceDeltaAfterSpace;
-(float)clusterGapTo:(id)to;
// converted property getter: -(CGPoint)anchor;
// converted property setter: -(void)setAnchor:(CGPoint)anchor;
-(id)describeBounds;
-(CGRect)renderedBounds;
-(CGRect)adjustToPointBoundary:(CGRect)pointBoundary;
// converted property getter: -(CGRect)bounds;
// converted property setter: -(void)setBounds:(CGRect)bounds;
-(void)setChildren:(id)children;
-(id)newTakeChildrenAmong:(id)among;
-(id)newTakeChildren;
-(void)removeAll;
-(void)remove:(id)remove;
-(void)addChildrenOf:(id)of;
-(void)add:(id)add atIndex:(unsigned)index;
-(void)add:(id)add;
-(float)opticalLeading;
-(void)accept:(id)accept;
-(id)copyAndSplitChildrenAtIndex:(unsigned)index;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end

