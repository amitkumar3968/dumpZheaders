/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ESDObjectFactory : XXUnknownSuperclass {
}
+(void)setEshFactory:(EshObjectFactory*)factory;
+(void)restoreHostEshFactory;
+(void)replaceHostEshFactoryWith:(EshObjectFactory*)with;
+(void)initialize;
+(EshObject*)createObjectWithType:(unsigned short)type version:(unsigned short)version;
+(EshObject*)createObjectWithType:(unsigned short)type;
@end
