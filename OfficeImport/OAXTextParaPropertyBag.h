/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXTextParaPropertyBag : XXUnknownSuperclass {
}
+(void)readParagraphProperties:(xmlNode*)properties paragraphProperties:(id)properties2 drawingState:(id)state;
+(int)readBulletScheme:(id)scheme;
+(void)readFontAlign:(id)align paragraphProperties:(id)properties;
+(void)readAlign:(id)align paragraphProperties:(id)properties;
+(void)readTabList:(xmlNode*)list paragraphProperties:(id)properties;
+(id)readSpacing:(xmlNode*)spacing;
@end

