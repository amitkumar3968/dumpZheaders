/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CPVisitor.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface CPGenericVisitor : XXUnknownSuperclass <CPVisitor> {
}
-(void)visitShapeRegion:(id)region;
-(void)visitImageRegion:(id)region;
-(void)visitTextBox:(id)box;
-(void)visitColumn:(id)column;
-(void)visitLayoutArea:(id)area;
-(void)visitParagraph:(id)paragraph;
-(void)visitBody:(id)body;
-(void)visitRotation:(id)rotation;
-(void)visitZone:(id)zone;
-(void)visitTextLine:(id)line;
-(void)visitRegion:(id)region;
-(void)visitPage:(id)page;
-(void)visitCompoundGraphic:(id)graphic;
-(void)visitImage:(id)image;
-(void)visitShape:(id)shape;
-(void)visitChunk:(id)chunk;
@end

