/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, NSMutableDictionary, NSArray;

@interface CKDraftManager : XXUnknownSuperclass {
	NSMutableDictionary* _cachedDrafts;
	NSMutableSet* _dirtyDraftIDs;
	NSArray* _pendingRecipients;
}
+(void)_createDraftSavePath;
+(id)_draftSavePath;
+(id)_pendingRecipientFile;
+(void)_createPendingRecipientPath;
+(id)sharedInstance;
-(id)_pendingRecipients;
-(void)_setPendingRecipients:(id)recipients;
-(void)_setDraft:(id)draft forKey:(id)key;
-(id)_draftForKey:(id)key;
-(void)save:(BOOL)save;
-(void)clearDraftForPendingConversation;
-(void)setDraftForPendingConversation:(id)pendingConversation withRecipients:(id)recipients;
-(id)draftForPendingConversationWithRecipients:(id*)recipients;
-(void)setDraft:(id)draft forConversation:(id)conversation;
-(id)draftForConversation:(id)conversation;
-(void)_clearDraftForConversation:(id)conversation;
-(void)dealloc;
-(id)init;
@end

