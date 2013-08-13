/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVStroke : XXUnknownSuperclass {
}
+(id)readFromManager:(id)manager;
+(void)readFillStyleFromManager:(id)manager toStroke:(id)stroke;
+(id)targetFgColorWithManager:(id)manager;
+(void)readJoinStyleFromManager:(id)manager toStroke:(id)stroke;
+(void)readDashStyleFromManager:(id)manager toStroke:(id)stroke;
+(void)readLineEnd:(id)end type:(id)type width:(id)width length:(id)length;
+(int)readCapStyle:(id)style;
+(int)readLineEndLength:(id)length;
+(int)readLineEndWidth:(id)width;
+(int)readLineEndType:(id)type;
+(int)readPresetDashStyle:(id)style;
+(int)readCompoundType:(id)type;
@end
