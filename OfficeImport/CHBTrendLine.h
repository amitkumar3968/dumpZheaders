/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHBTrendLine : XXUnknownSuperclass {
}
+(void)readFrom:(XlChartTrendLine*)from toSeries:(id)series state:(id)state;
+(id)readTrendlineGraphicProperties:(const XlChartSeriesFormat*)properties forStyleIndex:(int)styleIndex state:(id)state;
+(int)xlTrendLineRegressionTypeFrom:(int)from;
+(int)edTrendLineTypeFrom:(int)from order:(int)order;
@end

