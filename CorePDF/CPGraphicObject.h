/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"

@class CPTextLine, CPParagraph;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
	unsigned clipIndex;
	CGRect renderedBounds;
	BOOL isInZoneBorder;
	int zoneGraphicType;
	CPTextLine* anchoringTextLine;
	CPParagraph* anchoringParagraph;
	CPChunk<CPGraphicUser>* user;
}
@property(retain, nonatomic) CPParagraph* anchoringParagraph;	// @synthesize
@property(assign, nonatomic) unsigned clipIndex;	// @synthesize
@property(retain) id user;	// converted property
@property(retain) CPTextLine* anchoringTextLine;	// converted property
@property(assign) int zoneGraphicType;	// converted property
@property(assign) BOOL isInZoneBorder;	// converted property
@property(readonly, assign) CGRect renderedBounds;	// converted property
// declared property setter: -(void)setAnchoringParagraph:(id)paragraph;
// declared property getter: -(id)anchoringParagraph;
// declared property setter: -(void)setClipIndex:(unsigned)index;
// declared property getter: -(unsigned)clipIndex;
// converted property getter: -(id)user;
// converted property setter: -(void)setUser:(id)user;
// converted property getter: -(id)anchoringTextLine;
// converted property setter: -(void)setAnchoringTextLine:(id)line;
// converted property setter: -(void)setZoneGraphicType:(int)type;
// converted property getter: -(int)zoneGraphicType;
// converted property setter: -(void)setIsInZoneBorder:(BOOL)zoneBorder;
// converted property getter: -(BOOL)isInZoneBorder;
-(BOOL)isIndivisible;
-(BOOL)isVisible;
-(BOOL)canBeContainer;
-(BOOL)isNarrow;
-(unsigned short)unicode;
// converted property getter: -(CGRect)renderedBounds;
-(void)dealloc;
-(id)init;
@end

