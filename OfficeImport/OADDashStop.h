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
@interface OADDashStop : XXUnknownSuperclass <NSCopying> {
@private
	float mDash;
	float mSpace;
}
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(float)space;
-(float)dash;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithDash:(float)dash space:(float)space;
@end

