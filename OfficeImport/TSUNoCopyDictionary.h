/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface TSUNoCopyDictionary : XXUnknownSuperclass {
@private
	CFDictionaryRef mDictionary;
}
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)keyEnumerator;
-(id)allKeys;
-(id)objectEnumerator;
-(id)allValues;
-(id)objectForKey:(id)key;
-(void)getObjects:(id*)objects andKeys:(id*)keys;
-(unsigned)count;
-(void)setObject:(id)object forKey:(id)key;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)key;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithCapacity:(unsigned)capacity;
-(id)initWithCFDictionary:(CFDictionaryRef)cfdictionary;
-(id)init;
@end

