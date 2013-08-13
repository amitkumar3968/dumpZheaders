/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

#import "XPCObjects-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSObject, NSString;
@protocol OS_xpc_object;

@interface XPCDecoder : XXUnknownSuperclass {
	NSObject<OS_xpc_object>* _encoding;
	NSObject<OS_xpc_object>* _currentObject;
	CFDictionaryRef _decodedObjects;
	CFSetRef _requestedDecodedObjects;
	NSArray* _allowedClasses;
	NSString* _errorDescription;
}
@property(copy, nonatomic) NSString* errorDescription;	// @synthesize=_errorDescription
+(id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes errorDescription:(id)description;
+(id)rootObjectForEncoding:(id)encoding allowedClasses:(id)classes;
+(id)rootObjectForEncoding:(id)encoding;
// declared property setter: -(void)setErrorDescription:(id)description;
// declared property getter: -(id)errorDescription;
-(BOOL)_classIsAllowed:(Class)allowed;
-(int)versionForClassName:(id)className;
-(unsigned)decodeMachSendRightForKey:(id)key;
-(id)decodeEndpointForKey:(id)key;
-(const char*)decodeBytesForKey:(id)key returnedLength:(unsigned*)length;
-(double)decodeDoubleForKey:(id)key;
-(float)decodeFloatForKey:(id)key;
-(long long)decodeInt64ForKey:(id)key;
-(int)decodeInt32ForKey:(id)key;
-(int)decodeIntegerForKey:(id)key;
-(int)decodeIntForKey:(id)key;
-(BOOL)decodeBoolForKey:(id)key;
-(id)decodeObjectForKey:(id)key;
-(BOOL)containsValueForKey:(id)key;
-(void)_verifyCurrentObject;
-(BOOL)allowsKeyedCoding;
-(id)decodeObject;
-(void)dealloc;
-(id)initWithEncoding:(id)encoding;
@end

