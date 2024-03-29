/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXColor : XXUnknownSuperclass {
}
+(id)readSystemColorFromAttribute:(id)attribute;
+(id)readPresetColorFromAttribute:(id)attribute;
+(id)readColorFromNode:(xmlNode*)node;
+(id)readColorFromParentXmlNode:(xmlNode*)parentXmlNode;
+(id)schemeColorEnumMap;
+(id)systemColorEnumMap;
+(id)presetColorEnumMap;
+(id)readSchemeColorFromXmlNode:(xmlNode*)xmlNode;
+(id)readSystemColorFromXmlNode:(xmlNode*)xmlNode;
+(id)readPresetColorFromXmlNode:(xmlNode*)xmlNode;
+(id)readHslColorFromXmlNode:(xmlNode*)xmlNode;
+(id)readSRgbColorFromXmlNode:(xmlNode*)xmlNode attribute:(const char*)attribute;
+(id)readScRgbColorFromXmlNode:(xmlNode*)xmlNode;
@end

