/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EXCellFormatTable : XXUnknownSuperclass {
}
+(void)readFromCellStylesElement:(xmlNode*)cellStylesElement state:(id)state;
+(void)readFromCellStyleXfsElement:(xmlNode*)cellStyleXfsElement state:(id)state;
+(void)readFromCellXfsElement:(xmlNode*)cellXfsElement state:(id)state;
+(void)readCellFormatsFrom:(xmlNode*)from cellStyleXfsOffset:(unsigned)offset isStyle:(bool)style state:(id)state;
@end

