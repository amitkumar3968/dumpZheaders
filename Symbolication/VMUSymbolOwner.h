/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "Symbolication-Structs.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : XXUnknownSuperclass <NSCopying> {
	NSString* _name;
	NSDictionary* _signature;
	id<VMUMemory> _textMemory;
	NSArray* _regions;
	NSArray* _symbols;
	NSArray* _sourceInfos;
	unsigned _flags;
	unsigned _currentVersion;
	unsigned _compatibilityVersion;
}
@property(readonly, retain) NSString* name;	// converted property
@property(readonly, retain) NSDictionary* signature;	// converted property
@property(readonly, retain) NSArray* regions;	// converted property
@property(readonly, retain) NSArray* symbols;	// converted property
@property(readonly, retain) NSArray* sourceInfos;	// converted property
@property(readonly, assign) unsigned flags;	// converted property
@property(readonly, assign) unsigned currentVersion;	// converted property
@property(readonly, assign) unsigned compatibilityVersion;	// converted property
+(id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)description;
-(int)compare:(id)compare;
-(BOOL)isEqualToSymbolOwner:(id)symbolOwner;
-(BOOL)isDsym;
-(BOOL)isBundle;
-(BOOL)isDyld;
-(BOOL)isDylib;
-(BOOL)isAOut;
-(BOOL)isCommpage;
-(BOOL)isPEF;
-(BOOL)isProtected;
-(BOOL)isMachO;
// converted property getter: -(unsigned)compatibilityVersion;
// converted property getter: -(unsigned)currentVersion;
// converted property getter: -(unsigned)flags;
-(id)sourceInfosInAddressRange:(VMURange)addressRange;
-(id)symbolsInAddressRange:(VMURange)addressRange;
// converted property getter: -(id)sourceInfos;
// converted property getter: -(id)symbols;
-(id)sourceInfoForAddress:(unsigned long long)address;
-(id)symbolsForMangledName:(id)mangledName;
-(id)symbolForName:(id)name;
-(id)symbolsForName:(id)name;
-(id)symbolForAddress:(unsigned long long)address;
-(id)regionForAddress:(unsigned long long)address;
-(id)regionsForName:(id)name;
// converted property getter: -(id)regions;
-(BOOL)containsAddress:(unsigned long long)address;
-(id)architecture;
-(id)path;
// converted property getter: -(id)signature;
// converted property getter: -(id)name;
-(id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;
-(BOOL)validate;
-(unsigned long long)size;
-(id)programTextForAddressRange:(VMURange)addressRange;
-(id)programTextForAddress:(unsigned long long)address;
-(void)slideToSegmentAddresses:(id)segmentAddresses;
-(id)symbolOwnerByAddingContentsOfOwner:(id)owner;
-(BOOL)isLazy;
@end
