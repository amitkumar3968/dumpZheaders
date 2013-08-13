/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPZone, CPTextLine;

@interface CPHighlighter : XXUnknownSuperclass {
	CPZone* boundingZone;
	CPTextLine* textLine;
	CGColorRef color;
	CPPDFStyle* style;
	CPPDFStyle* highlightedStyle;
}
@property(assign, nonatomic) CPPDFStyle* highlightedStyle;	// @synthesize
@property(assign, nonatomic) CPPDFStyle* style;	// @synthesize
@property(readonly, assign, nonatomic) CGColorRef color;	// @synthesize
+(BOOL)reconstructHighlightFor:(id)aFor;
// declared property setter: -(void)setHighlightedStyle:(CPPDFStyle*)style;
// declared property getter: -(CPPDFStyle*)highlightedStyle;
// declared property setter: -(void)setStyle:(CPPDFStyle*)style;
// declared property getter: -(CPPDFStyle*)style;
// declared property getter: -(CGColorRef)color;
-(void)highlight;
-(id)initWithTextLine:(id)textLine inZone:(id)zone ofColor:(CGColorRef)color;
@end

