/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XPCDetailedSignature : XXUnknownSuperclass {
	unsigned _argumentCount;
	Class* _classes;
}
+(id)signatureWithoutArguments;
+(id)signatureWithArgumentCount:(unsigned)argumentCount classes:(Class)classes;
-(Class)argumentClassAtIndex:(unsigned)index;
-(void)setClass:(Class)aClass forArgumentAtIndex:(unsigned)index;
-(void)dealloc;
-(id)initWithArgumentCount:(unsigned)argumentCount;
@end

