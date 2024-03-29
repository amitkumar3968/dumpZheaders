/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUDateFormat : XXUnknownSuperclass <NSCopying, TSUDataFormat> {
@private
	NSString* mFormat;
	NSString* mName;
}
@property(retain) id formatName;	// converted property
+(id)formatWithFormat:(id)format name:(id)name;
// converted property setter: -(void)setFormatName:(id)name;
// converted property getter: -(id)formatName;
-(id)format;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithFormat:(id)format name:(id)name;
@end

