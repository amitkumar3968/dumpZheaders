/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptObject.h"

@class NSArray, NSMutableSet, SUMessage, NSString;

@interface SUScriptMessage : SUScriptObject {
	NSMutableSet* _callbacks;
}
@property(copy) NSString* postURL;
@property(copy) NSArray* messageParts;
@property(retain, nonatomic) SUMessage* nativeMessage;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)webScriptNameForKeyName:(id)keyName;
-(id)scriptAttributeKeys;
-(id)attributeKeys;
-(void)_removeCallback:(id)callback;
-(id)_newTextMessagePartWithObject:(id)object;
-(id)_newPlistMessagePartWithObject:(id)object;
-(id)_newJSONMessagePartWithObject:(id)object;
-(void)_addCallback:(id)callback;
// declared property setter: -(void)setPostURL:(id)url;
// declared property setter: -(void)setMessageParts:(id)parts;
// declared property getter: -(id)postURL;
// declared property getter: -(id)messageParts;
-(id)_className;
-(id)uploadURLForAttachmentType:(id)attachmentType;
-(void)setUploadURL:(id)url forAttachmentType:(id)attachmentType;
-(void)sendWithCompletionHandler:(id)completionHandler;
-(id)makeMessagePartWithObject:(id)object mimeType:(id)type;
-(id)makeMessagePartWithMediaObject:(id)mediaObject;
// declared property setter: -(void)setNativeMessage:(id)message;
// declared property getter: -(id)nativeMessage;
-(void)dealloc;
-(id)init;
@end

