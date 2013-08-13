/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXScene3D : XXUnknownSuperclass {
}
+(id)readScene3DFromXmlNode:(xmlNode*)xmlNode packagePart:(id)part;
+(id)readBackdropFromXmlNode:(xmlNode*)xmlNode;
+(id)readLightRigFromXmlNode:(xmlNode*)xmlNode;
+(id)readCameraFromXmlNode:(xmlNode*)xmlNode;
+(id)lightRigDirectionEnumMap;
+(id)lightRigTypeEnumMap;
+(id)cameraTypeEnumMap;
@end

