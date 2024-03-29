/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface VKInternedString : XXUnknownSuperclass {
@private
	NSString* original;
}
+(id)stringWithString:(id)string;
+(void)initialize;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqualToString:(id)string;
-(int)compare:(id)compare options:(unsigned)options range:(NSRange)range locale:(id)locale;
-(id)substringWithRange:(NSRange)range;
-(id)substringToIndex:(unsigned)index;
-(id)substringFromIndex:(unsigned)index;
-(void)getCharacters:(unsigned short*)characters range:(NSRange)range;
-(unsigned short)characterAtIndex:(unsigned)index;
-(unsigned)length;
-(void)dealloc;
-(id)initWithString:(id)string;
@end

