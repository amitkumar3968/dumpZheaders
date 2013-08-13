/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : XXUnknownSuperclass {
	int _handlerType;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _setDictionary;
	NSMutableDictionary* _getDictionary;
	NSMutableArray* _actions;
	BOOL _readOnly;
}
@property(retain) id claimDictionary;	// converted property
@property(retain) id mainDictionary;	// converted property
@property(readonly, assign) int handlerType;	// converted property
+(id)brailleEvent;
-(void)performWithHandler:(id)handler trusted:(BOOL)trusted;
// converted property getter: -(id)claimDictionary;
// converted property setter: -(void)setClaimDictionary:(id)dictionary;
// converted property getter: -(id)mainDictionary;
// converted property setter: -(void)setMainDictionary:(id)dictionary;
-(id)claimValueForKey:(int)key;
-(void)requestPerformActionForKey:(int)key;
-(void)requestValueForKey:(int)key;
-(void)requestSetValue:(id)value forKey:(int)key;
-(void)requestRegisterCallbackForKey:(int)key;
// converted property getter: -(int)handlerType;
-(void)dealloc;
-(id)initForHandlerType:(int)handlerType;
@end

