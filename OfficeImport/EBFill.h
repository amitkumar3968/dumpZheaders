/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBFill : XXUnknownSuperclass {
}
+(id)edFillFromXlDXf:(XlDXf*)xlDXf edResources:(id)resources;
+(id)edFillFromXlXf:(XlXf*)xlXf edResources:(id)resources;
+(int)convertEDPatternFillEnumToXl:(int)xl;
+(int)convertXlFillPatternEnumToED:(int)ed;
+(bool)extractFromEDFill:(id)edfill foreColorReference:(id*)reference backColorReference:(id*)reference3 fillPatternEnum:(int*)anEnum;
@end
