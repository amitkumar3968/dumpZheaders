/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@protocol OAVClient
+(int)vmlSupportLevel;
+(void)readClientDataFromGroup:(xmlNode*)group toGroup:(id)group2 state:(id)state;
+(void)readClientDataFromShape:(xmlNode*)shape toGraphic:(id)graphic state:(id)state;
@end

__attribute__((visibility("hidden")))
@interface OAVClient : XXUnknownSuperclass {
}
+(BOOL)sourceDrawableIsTopLevel:(xmlNode*)level;
@end
