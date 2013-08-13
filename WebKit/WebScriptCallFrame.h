/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import </libobjc.A.h>

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject {
@private
	WebScriptCallFramePrivate* _private;
	id _userInfo;
}
@property(retain) id userInfo;	// converted property
-(id)evaluateWebScript:(id)script;
-(id)exception;
-(id)functionName;
-(id)scopeChain;
-(id)caller;
// converted property getter: -(id)userInfo;
// converted property setter: -(void)setUserInfo:(id)info;
-(void)dealloc;
-(id)_convertValueToObjcValue:(JSValue)objcValue;
-(void)_clearDebuggerCallFrame;
-(void)_setDebuggerCallFrame:(const DebuggerCallFrame*)frame;
-(id)_initWithGlobalObject:(id)globalObject debugger:(WebScriptDebugger*)debugger caller:(id)caller debuggerCallFrame:(const DebuggerCallFrame*)frame;
@end

