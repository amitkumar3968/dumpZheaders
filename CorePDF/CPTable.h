/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "CPGraphicUser.h"
#import "CPChunk.h"


@interface CPTable : CPChunk <CPDisposable, CPGraphicUser> {
	CGRect tableBounds;
	unsigned rowCount;
	float* rowY;
	unsigned columnCount;
	float* columnX;
	CGColorRef backgroundColor;
	unsigned backgroundGraphicCount;
	id* backgroundGraphics;
	unsigned usedGraphicCount;
	BOOL disposed;
}
@property(readonly, assign, nonatomic) unsigned backgroundGraphicCount;	// @synthesize
@property(readonly, assign, nonatomic) float* columnX;	// @synthesize
@property(assign, nonatomic) unsigned columnCount;
@property(readonly, assign, nonatomic) float* rowY;	// @synthesize
@property(assign, nonatomic) unsigned rowCount;
@property(readonly, assign, nonatomic) CGRect tableBounds;	// @synthesize
@property(readonly, assign) CGColorRef backgroundColor;	// converted property
@property(readonly, assign) unsigned usedGraphicCount;	// converted property
// declared property getter: -(unsigned)backgroundGraphicCount;
// declared property getter: -(float*)columnX;
// declared property getter: -(float*)rowY;
// declared property getter: -(CGRect)tableBounds;
// converted property getter: -(unsigned)usedGraphicCount;
-(void)incrementUsedGraphicCount;
-(id)backgroundGraphicAtIndex:(unsigned)index;
-(void)setBackgroundGraphics:(id)graphics;
// converted property getter: -(CGColorRef)backgroundColor;
// declared property getter: -(unsigned)columnCount;
// declared property setter: -(void)setColumnCount:(unsigned)count;
// declared property getter: -(unsigned)rowCount;
// declared property setter: -(void)setRowCount:(unsigned)count;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initWithBounds:(CGRect)bounds;
@end
