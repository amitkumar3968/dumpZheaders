/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDFill : XXUnknownSuperclass <NSCopying> {
@private
	EDResources* mResources;
}
+(id)fillWithResources:(id)resources;
-(bool)isEmpty;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithResources:(id)resources;
@end

