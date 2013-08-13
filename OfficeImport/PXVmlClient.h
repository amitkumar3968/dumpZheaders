/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OAVClient.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXVmlClient : XXUnknownSuperclass <OAVClient> {
}
+(int)vmlSupportLevel;
+(void)readClientDataFromGroup:(xmlNode*)group toGroup:(id)group2 state:(id)state;
+(void)readClientDataFromShape:(xmlNode*)shape toGraphic:(id)graphic state:(id)state;
+(id)colorWithRecolorInfoColorString:(id)recolorInfoColorString;
@end
