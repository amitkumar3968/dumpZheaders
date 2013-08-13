/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHParagraphStyle.h"


__attribute__((visibility("hidden")))
@interface GQHTextBox : GQHParagraphStyle {
}
+(int)outputInnerSandbagsForFrame:(CGRect)frame drawable:(id)drawable state:(id)state;
+(BOOL)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state isPageFrame:(BOOL)frame5;
+(int)outputWrapSandbagsForFrame:(CGRect)frame columnCount:(int)count drawable:(id)drawable state:(id)state;
+(void)createExternalWrapSandbagStyles:(id)styles;
+(void)mapScaledImageFill:(id)fill style:(id)style size:(CGSize)size;
+(BOOL)styleNeedsImageFillMapping:(id)mapping;
+(void)mapLayout:(id)layout style:(id)style state:(id)state;
+(const char*)name;
+(int)handleLayoutStorage:(id)storage state:(id)state;
+(int)handleShapeText:(id)text boundsRect:(CGRect)rect floating:(BOOL)floating state:(id)state;
+(void)mapStyle:(id)style style:(id)style2 state:(id)state;
+(int)outputWrapSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;
+(int)outputInnerSandbagsForShape:(id)shape layoutStyle:(id)style state:(id)state;
+(void)outputSandbag:(id)sandbag state:(id)state;
@end
