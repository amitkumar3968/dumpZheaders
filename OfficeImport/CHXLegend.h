/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHXLegend : XXUnknownSuperclass {
}
+(id)chdLegendFromXmlLegendElement:(xmlNode*)xmlLegendElement state:(id)state;
+(int)chdLegendPositionFromXmlLegendPositionElement:(xmlNode*)xmlLegendPositionElement;
+(id)chdLegendEntryFromXmlLegendEntryElement:(xmlNode*)xmlLegendEntryElement defaultFont:(id)font state:(id)state;
+(void)setDefaultLegendBounds:(id)bounds legendPosition:(int)position;
@end

