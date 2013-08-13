/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

@interface XPCEncoder : XXUnknownSuperclass {
	NSObject<OS_xpc_object>* _encoding;
	NSObject<OS_xpc_object>* _currentObject;
	CFDictionaryRef _encodedObjects;
	CFDictionaryRef _conditionalObjects;
	unsigned _nextConditionalObjectID;
	CFDictionaryRef _replacementObjects;
}
+(id)copyEncodingForRootObject:(id)rootObject;
-(void)_fixUpConditionalObjects;
-(id)_replacementObjectForObject:(id)object;
-(int)versionForClassName:(id)className;
-(void)encodeMachSendRight:(unsigned)right forKey:(id)key;
-(void)encodeEndpoint:(id)endpoint forKey:(id)key;
-(void)encodeBytes:(const char*)bytes length:(unsigned)length forKey:(id)key;
-(void)encodeDouble:(double)aDouble forKey:(id)key;
-(void)encodeFloat:(float)aFloat forKey:(id)key;
-(void)encodeInt64:(long long)a64 forKey:(id)key;
-(void)encodeInteger:(int)integer forKey:(id)key;
-(void)encodeInt32:(int)a32 forKey:(id)key;
-(void)encodeInt:(int)int forKey:(id)key;
-(void)encodeBool:(BOOL)aBool forKey:(id)key;
-(void)encodeConditionalObject:(id)object forKey:(id)key;
-(void)encodeObject:(id)object forKey:(id)key;
-(void)_verifyCurrentObject;
-(void)encodeRootObject:(id)object;
-(BOOL)allowsKeyedCoding;
-(id)encoding;
-(void)dealloc;
-(id)init;
@end

