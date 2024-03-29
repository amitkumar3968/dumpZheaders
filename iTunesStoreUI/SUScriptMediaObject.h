/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSMutableArray, SUMediaObject, NSString;

@interface SUScriptMediaObject : SUScriptObject {
	NSMutableArray* _scriptFunctions;
	unsigned _thumbnailOffset;
}
@property(readonly, assign) NSString* mediaType;
@property(readonly, assign) SUMediaObject* nativeMediaObject;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(void)_removeScriptFunction:(id)function;
-(void)_addScriptFunction:(id)function;
// declared property getter: -(id)mediaType;
-(id)_className;
-(id)valueForProperty:(id)property;
-(id)thumbnailWithMaximumSize:(int)maximumSize;
-(void)saveToLibraryWithCompletionHandler:(id)completionHandler;
-(void)loadLibraryThumbnailWithCompletionHandler:(id)completionHandler;
-(void)generateThumbnailWithMaximumSize:(int)maximumSize completionHandler:(id)handler;
// declared property getter: -(id)nativeMediaObject;
-(void)dealloc;
-(id)initWithNativeMediaObject:(id)nativeMediaObject;
-(id)init;
@end

