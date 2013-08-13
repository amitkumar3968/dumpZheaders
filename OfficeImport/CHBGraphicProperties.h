/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : XXUnknownSuperclass {
}
+(id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle*)xlMarkerStyle complex:(bool)complex state:(id)state;
+(id)oadStrokeFrom:(const XlChartLineStyle*)from;
+(id)oadGraphicPropertiesFromState:(id)state xlLineStyle:(const XlChartLineStyle*)style xlFillStyle:(const XlChartFillStyle*)style3;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat*)xlChartSeriesFormat state:(id)state;
+(id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType*)xlChartFrameType state:(id)state;
+(int)lineWeightEnumFromWidth:(float)width;
+(int)presetLinePatternEnumFromDash:(id)dash;
+(float)widthFromLineWeightEnum:(int)lineWeightEnum;
+(int)oaPresetDashTypeFromLinePatternEnum:(int)linePatternEnum;
+(id)mapAssociatedEscherObjectstate:(id)objectstate;
+(id)mapFillStyleForMarker:(const XlChartMarkerStyle*)marker complex:(bool)complex state:(id)state;
+(id)mapFillStyle:(const XlChartFillStyle*)style xlPictureFormat:(const XlChartPicF*)format state:(id)state;
+(id)mapPresetDashFromPattern:(int)pattern;
@end

