/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class VMUSymbolOwner, NSString;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString* _name;
	NSString* _mangledName;
	VMUSymbolOwner* _owner;
	unsigned _flags;
}
@property(retain) VMUSymbolOwner* owner;	// converted property
@property(readonly, retain) NSString* name;	// converted property
@property(readonly, retain) NSString* mangledName;	// converted property
@property(readonly, assign) unsigned flags;	// converted property
+(id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(BOOL)isEqualToSymbol:(id)symbol;
-(int)compare:(id)compare;
-(BOOL)isThumb;
-(BOOL)isArm;
-(BOOL)isDwarf;
-(BOOL)isStab;
-(BOOL)isExternal;
-(BOOL)isDyldStub;
-(BOOL)isJavaMethod;
-(BOOL)isObjcMethod;
-(BOOL)isFunction;
// converted property getter: -(unsigned)flags;
-(id)text;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(id)sourceInfoForAddress:(unsigned long long)address;
-(id)sourceInfos;
// converted property getter: -(id)owner;
-(VMURange)addressRange;
// converted property getter: -(id)mangledName;
// converted property getter: -(id)name;
-(id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;
// converted property setter: -(void)setOwner:(id)owner;
@end

