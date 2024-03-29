/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OABShapeGeometry : XXUnknownSuperclass {
}
+(void)writeFromShape:(id)shape toShape:(EshShape*)shape2;
+(void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath*)path;
+(void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath*)path;
+(void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath*)path;
+(void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable*)pathParams;
+(void)writeLimoFromGeometry:(id)geometry toPath:(EshPath*)path;
+(void)writeCoordSpaceFromGeometry:(id)geometry toShape:(EshShape*)shape;
+(void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties*)shapeProperties;
+(EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;
+(void)readFromLimo:(CsPoint<long>)limo toGeometry:(id)geometry;
+(void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect>*)textBoxRects toGeometry:(id)geometry;
+(void)readFromFormulas:(const EshTablePropVal<EshFormula>*)formulas toGeometry:(id)geometry;
+(void)readFromPathCommands:(const EshTablePropVal<EshPathCommand>*)pathCommands pathParams:(const EshPathParamTable*)params toGeometry:(id)geometry;
+(void)readFromShape:(EshShape*)shape toShape:(id)shape2;
+(int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;
+(void)readLimoFromPath:(const EshPath*)path toGeometry:(id)geometry;
+(void)readPathCommandsAndParamsFromPath:(const EshPath*)path toGeometry:(id)geometry;
+(OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;
+(void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties*)shapeProperties toGeometry:(id)geometry;
+(void)readAdjustValuesFromShapeProperties:(const EshShapeProperties*)shapeProperties toGeometry:(id)geometry;
@end

