/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface OADVector3D : XXUnknownSuperclass <NSCopying> {
@private
	float mDx;
	float mDy;
	float mDz;
}
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(float)dz;
-(float)dy;
-(float)dx;
-(id)initWithDx:(float)dx dy:(float)dy dz:(float)dz;
@end

