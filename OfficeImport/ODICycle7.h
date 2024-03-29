/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "ODICycle.h"


__attribute__((visibility("hidden")))
@interface ODICycle7 : ODICycle {
}
+(BOOL)map2NodeWithState:(id)state;
+(BOOL)map1NodeWithState:(id)state;
+(void)mapTransition:(id)transition index:(unsigned)index state:(id)state;
+(void)addShapeForTransition:(id)transition relativeBounds:(CGRect)bounds rotation:(float)rotation state:(id)state;
+(void)mapNode:(id)node index:(unsigned)index state:(id)state;
+(void)addShapeForNode:(id)node relativeBounds:(CGRect)bounds state:(id)state;
+(CGRect)mapGSpaceWithState:(id)state;
+(CGSize)nodeSizeWithState:(id)state;
@end

