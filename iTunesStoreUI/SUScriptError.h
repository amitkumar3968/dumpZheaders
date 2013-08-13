/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSError, NSString;

@interface SUScriptError : SUScriptObject {
@private
	NSError* _error;
}
@property(readonly, assign) NSString* localizedRecoverySuggestion;
@property(readonly, assign) NSString* localizedFailureReason;
@property(readonly, assign) NSString* localizedDescription;
@property(readonly, assign) NSString* domain;
@property(readonly, assign) int code;
+(void)initialize;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
// declared property getter: -(id)localizedRecoverySuggestion;
// declared property getter: -(id)localizedFailureReason;
// declared property getter: -(id)localizedDescription;
// declared property getter: -(id)domain;
// declared property getter: -(int)code;
-(id)_className;
-(void)dealloc;
-(id)initWithError:(id)error;
@end
