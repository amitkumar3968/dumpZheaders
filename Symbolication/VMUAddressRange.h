/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCoding.h"


@interface VMUAddressRange : XXUnknownSuperclass <NSCoding> {
	VMURange _addressRange;
}
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(void)setAddressRange:(VMURange)range;
@end

