/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderClient.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderClient : XXUnknownSuperclass <OABReaderClient> {
}
+(BOOL)tablesAreAllowed;
+(BOOL)escherIsFullySupported;
+(void)readClientDataFromTableCell:(id)tableCell toTableCell:(id)tableCell2 state:(id)state;
+(void)readClientDataFromGroup:(id)group toGroup:(id)group2 state:(id)state;
+(void)readClientDataFromShape:(id)shape toGraphic:(id)graphic state:(id)state;
+(double)wrapDistanceBottom:(EshContentProperties*)bottom;
+(double)wrapDistanceRight:(EshContentProperties*)right;
+(double)wrapDistanceTop:(EshContentProperties*)top;
+(double)wrapDistanceLeft:(EshContentProperties*)left;
+(int)relativeVerticalPosition:(EshContentProperties*)position;
+(int)verticalPosition:(EshContentProperties*)position;
+(int)relativeHorizontalPosition:(EshContentProperties*)position;
+(int)horizontalPosition:(EshContentProperties*)position;
+(bool)allowOverlap:(EshContentProperties*)overlap;
+(bool)behindText:(EshContentProperties*)text;
+(void)readFrom:(EshContentProperties*)from to:(id)to;
@end

