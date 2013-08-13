/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {
@private
	WebScriptObjectPrivate* _private;
}
+(id)_convertValueToObjcValue:(JSValue)objcValue originRootObject:(RootObject*)object rootObject:(RootObject*)object3;
+(BOOL)throwException:(id)exception;
+(id)scriptObjectForJSObject:(OpaqueJSValue*)jsobject originRootObject:(RootObject*)object rootObject:(RootObject*)object3;
+(void)initialize;
-(OpaqueJSValue*)JSObject;
-(void)setException:(id)exception;
-(void)setWebScriptValueAtIndex:(unsigned)index value:(id)value;
-(id)webScriptValueAtIndex:(unsigned)index;
-(id)stringRepresentation;
-(BOOL)hasWebScriptKey:(id)key;
-(void)removeWebScriptKey:(id)key;
-(id)valueForKey:(id)key;
-(void)setValue:(id)value forKey:(id)key;
-(id)evaluateWebScript:(id)script;
-(id)callWebScriptMethod:(id)method withArguments:(id)arguments;
-(void)finalize;
-(void)dealloc;
-(oneway void)release;
-(BOOL)_isSafeScript;
-(RootObject*)_originRootObject;
-(RootObject*)_rootObject;
-(BOOL)_hasImp;
-(JSObject*)_imp;
-(id)_initWithJSObject:(JSObject*)jsobject originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;
-(void)_setOriginRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object andRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object2;
-(void)_setImp:(JSObject*)imp originRootObject:(PassRefPtr<JSC::Bindings::RootObject>)object rootObject:(PassRefPtr<JSC::Bindings::RootObject>)object3;
-(void)_initializeScriptDOMNodeImp;
-(id)_init;
-(id)objectAtIndex:(unsigned)index;
@end
