/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WBOfficeArt : XXUnknownSuperclass {
}
+(void)setShapeAddress:(const WrdFileShapeAddress*)address toDrawable:(id)drawable;
+(void)writeCharacterProperties:(id)properties to:(id)to;
+(void)writeText:(id)text to:(id)to;
+(void)readFrom:(id)from at:(long)at textRun:(WrdCharacterTextRun*)run paragraph:(id)paragraph to:(id)to;
@end

