/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBCell : XXUnknownSuperclass {
}
+(void)readXlCell:(XlCell*)cell edRowInfo:(EDRowInfo**)info edRowBlock:(id)block edRowBlocks:(id)blocks state:(id)state;
+(int)convertEDErrorValueEnumToXl:(int)xl;
+(int)convertXlErrorEnumToED:(int)ed;
+(int)convertXlCellTypeToED:(int)ed;
@end
