/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBNameTable : XXUnknownSuperclass {
}
+(XlNameTable*)createXlNameTableFromNamesCollection:(id)namesCollection state:(id)state;
+(void)readFromState:(id)state;
+(XlName*)xlNameFromEDName:(id)edname state:(id)state;
+(id)edNameFromXlName:(XlName*)xlName name:(OcText)name state:(id)state;
@end

