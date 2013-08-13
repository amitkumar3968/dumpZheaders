/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADIndexedColor : OADColor {
@private
	int mIndex;
}
+(id)indexedColorWithIndex:(int)index;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)colorFromPalette:(id)palette;
-(int)index;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithIndex:(int)index;
@end
