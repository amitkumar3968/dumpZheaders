/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBBulletProperties : XXUnknownSuperclass {
}
+(void)writeBulletProperties:(id)properties toBulletStyle:(PptParaProperty9*)bulletStyle state:(id)state;
+(id)readBulletProperties:(PptParaProperty9*)properties state:(id)state;
+(int)writeBulletNumberScheme:(int)scheme;
+(int)readBulletNumberSchemeFromExtended:(unsigned)extended;
+(int)readBulletNumberScheme:(int)scheme;
@end
