/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBFont : XXUnknownSuperclass {
}
+(id)edFontFromXlDXfFont:(XlDXfFont*)xlDXfFont edResources:(id)resources;
+(id)edFontFromXlFont:(XlFont*)xlFont edResources:(id)resources;
+(int)convertEDUnderlineEnumToXl:(int)xl;
+(int)convertEDScriptEnumToXl:(int)xl;
+(int)convertXlUnderlineEnumToED:(int)ed;
+(int)convertXlScriptEnumToED:(int)ed;
@end

