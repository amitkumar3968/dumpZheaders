/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBWorkbook : XXUnknownSuperclass {
}
+(ChVector<OcText>*)createSheetNamesFromWorkbook:(id)workbook;
+(id)readWithState:(id)state reader:(id)reader;
+(int)xlSheetTypeEnumFromEDSheet:(id)edsheet;
+(void)setupProcessors:(id)processors;
+(void)readDocumentPresentation:(id)presentation state:(id)state;
+(void)readDocumentProperties:(id)properties state:(id)state;
@end

