/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : XXUnknownSuperclass {
}
+(void)writeAlignmentInfo:(id)info toXlGraphicsInfo:(XlGraphicsInfo*)xlGraphicsInfo;
+(XlDXfAlign*)xlDXfAlignFromEDAlignmentInfo:(id)edalignmentInfo;
+(void)writeAlignmentInfo:(id)info toXlXf:(XlXf*)xlXf;
+(id)edAlignmentInfoFromXlGraphicsInfo:(XlGraphicsInfo*)xlGraphicsInfo;
+(id)edAlignmentInfoFromXlDXfAlign:(XlDXfAlign*)xlDXfAlign;
+(id)edAlignmentInfoFromXlXf:(XlXf*)xlXf;
+(int)convertEDVerticalAlignmentEnumToXl:(int)xl;
+(int)convertEDHorizontalAlignmentEnumToXl:(int)xl;
+(int)convertXlVertAlignEnumToED:(int)ed;
+(int)convertXlHorizAlignEnumToED:(int)ed;
@end
