/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SSXPCCoding.h"

@class SSXPCConnection, NSDictionary, NSMutableDictionary, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface SSEntity : XXUnknownSuperclass <SSXPCCoding> {
@private
	SSXPCConnection* _connection;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSMutableDictionary* _localExternalValues;
	NSMutableDictionary* _localValues;
	long long _pid;
	NSArray* _dirtyLocalExternalProperties;
	NSArray* _dirtyLocalProperties;
}
@property(readonly, assign, getter=_isManaged) BOOL _managed;
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary* _localValues;
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary* _localExternalValues;
@property(readonly, assign) long long _persistentIdentifier;
@property(readonly, assign) BOOL exists;
+(long long)_setValuesMessage;
+(long long)_setExternalValuesMessage;
+(long long)_getValueMessage;
+(long long)_getExternalValuesMessage;
+(long long)_existsMessage;
-(id)copyXPCEncoding;
-(void)_getValues:(id*)values forProperties:(const id*)properties count:(unsigned)count message:(long long)message;
-(void)__addCachedPropertyValues:(id)values;
-(void)__addCachedExternalValues:(id)values;
// declared property setter: -(void)_setLocalValues:(id)values;
// declared property setter: -(void)_setLocalExternalValues:(id)values;
-(void)_setDirtyCachedProperties:(id)properties;
-(void)_setDirtyCachedExternalProperties:(id)properties;
-(void)_resetLocalIVars;
// declared property getter: -(long long)_persistentIdentifier;
// declared property getter: -(BOOL)_isManaged;
// declared property getter: -(id)_localValues;
// declared property getter: -(id)_localExternalValues;
-(void)_becomeManagedOnConnection:(id)connection;
-(void)_addCachedPropertyValues:(id)values;
-(void)_addCachedExternalValues:(id)values;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)description;
-(id)valueForExternalProperty:(id)externalProperty;
-(BOOL)setExternalValuesWithDictionary:(id)dictionary;
-(void)resetCachedProperties:(const id*)properties count:(unsigned)count;
-(void)resetCachedExternalProperties:(const id*)properties count:(unsigned)count;
-(void)getValues:(id*)values forExternalProperties:(const id*)externalProperties count:(unsigned)count;
-(id)valueForProperty:(id)property;
-(BOOL)setValuesWithDictionary:(id)dictionary;
-(BOOL)setValue:(id)value forProperty:(id)property;
-(void)getValues:(id*)values forProperties:(const id*)properties count:(unsigned)count;
// declared property getter: -(BOOL)exists;
-(void)dealloc;
-(id)_initWithPersistentIdentifier:(long long)persistentIdentifier;
-(id)init;
@end
