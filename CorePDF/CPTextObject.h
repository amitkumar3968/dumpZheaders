/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPChunk.h"


@interface CPTextObject : CPChunk {
	CGPoint anchor;
	BOOL metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;
}
@property(readonly, assign) float maxFontSize;	// converted property
@property(readonly, assign) double maxFontLineHeight;	// converted property
-(void)translateObjectYBy:(float)by;
-(void)clearCachedInfo;
// converted property getter: -(double)maxFontLineHeight;
// converted property getter: -(float)maxFontSize;
-(void)calculateMetrics;
@end

