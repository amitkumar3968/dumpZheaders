/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableArray, SUClientInterface, SUScriptObjectInvocationBatch, NSLock, NSMutableSet, WebFrame, SUWebImagePool, SUScriptNativeObject;

@interface SUScriptObject : XXUnknownSuperclass {
	NSMutableArray* _eventListeners;
	SUScriptObjectInvocationBatch* _invocationBatch;
	NSLock* _lock;
	SUScriptNativeObject* _nativeObject;
	SUScriptObject* _parentScriptObject;
	NSMutableSet* _scriptObjects;
	unsigned _checkOutWhenHidden : 1;
	unsigned _isVisible : 1;
	NSString* _className;
}
@property(readonly, assign, getter=_className) NSString* className;
@property(readonly, assign) NSMutableArray* scriptAttributeKeys;
@property(readonly, assign) WebFrame* webFrame;
@property(readonly, assign) BOOL sourceIsTrusted;
@property(assign) SUScriptObject* parentScriptObject;
@property(readonly, assign) SUClientInterface* clientInterface;
@property(readonly, assign) SUWebImagePool* imagePool;
@property(readonly, assign) OpaqueJSContext* copyJavaScriptContext;
@property(retain) SUScriptNativeObject* nativeObject;
@property(assign, getter=isVisible) BOOL visible;	// converted property
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
+(id)webScriptNameForKey:(const char*)key;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)webScript;
+(BOOL)isKeyExcludedFromWebScript:(const char*)webScript;
-(void)finalizeForWebScript;
// declared property getter: -(id)scriptAttributeKeys;
-(id)_copyListenersForName:(id)name;
-(void)_checkOutAfterVisibilityChange;
// declared property getter: -(id)_className;
-(id)stringRepresentation;
-(void)removeListenerForEventWithName:(id)name callback:(id)callback useCapture:(BOOL)capture;
-(BOOL)equals:(id)equals;
-(void)addListenerForEventWithName:(id)name callback:(id)callback useCapture:(BOOL)capture;
// declared property getter: -(id)webFrame;
-(id)viewControllerFactory;
-(void)unlock;
-(void)tearDownUserInterface;
// declared property getter: -(BOOL)sourceIsTrusted;
// converted property setter: -(void)setVisible:(BOOL)visible;
// declared property setter: -(void)setParentScriptObject:(id)object;
// declared property setter: -(void)setNativeObject:(id)object;
-(BOOL)scriptObjectIsCheckedIn:(id)anIn;
-(id)parentViewController;
// declared property getter: -(id)parentScriptObject;
-(id)newImageWithURL:(id)url scale:(float)scale;
-(id)newImageWithURL:(id)url;
// declared property getter: -(id)nativeObject;
-(void)lock;
-(void)loadImageWithURL:(id)url completionBlock:(id)block;
// converted property getter: -(BOOL)isVisible;
// declared property getter: -(id)imagePool;
-(id)DOMElementWithElement:(id)element;
-(void)dispatchEvent:(id)event forName:(id)name synchronously:(BOOL)synchronously;
-(void)dispatchEvent:(id)event forName:(id)name;
-(id)copyObjectForScriptFromPoolWithClass:(Class)aClass;
// declared property getter: -(OpaqueJSContext*)copyJavaScriptContext;
// declared property getter: -(id)clientInterface;
-(void)checkOutScriptObjects:(id)objects;
-(void)checkOutScriptObject:(id)object;
-(void)checkInScriptObjects:(id)scriptObjects;
-(void)checkInScriptObject:(id)scriptObject;
-(void)dealloc;
-(id)init;
-(void)willPerformBatchedInvocations;
-(id)webThreadMainThreadBatchProxy;
-(id)invocationBatch:(BOOL)batch;
-(void)didPerformBatchedInvocations;
-(void)checkOutBatchTarget:(id)target;
@end

