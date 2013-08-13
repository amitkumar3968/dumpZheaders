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
@interface OADRotation3D : XXUnknownSuperclass <NSCopying> {
@private
	float mLatitude;
	float mLongitude;
	float mRevolution;
}
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(float)revolution;
-(float)longitude;
-(float)latitude;
-(id)initWithLatitude:(float)latitude longitude:(float)longitude revolution:(float)revolution;
@end
