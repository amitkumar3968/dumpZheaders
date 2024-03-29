/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class FTCConnectionHandler, CKConversation, NSMutableArray;

@interface CKConversationList : XXUnknownSuperclass {
	NSMutableArray* _trackedConversations;
	CKConversation* _pendingConversation;
	FTCConnectionHandler* _connectionHandler;
	BOOL _loadingConversations;
	BOOL _loadedConversations;
}
@property(readonly, assign, nonatomic) FTCConnectionHandler* connectionHandler;	// @synthesize=_connectionHandler
@property(readonly, assign, nonatomic) CKConversation* firstUnreadFilteredConversation;
@property(readonly, assign, nonatomic) CKConversation* firstUnreadConversation;
@property(readonly, assign, nonatomic) BOOL loadingConversations;	// @synthesize=_loadingConversations
@property(readonly, retain) CKConversation* pendingConversation;	// converted property
+(id)sharedConversationList;
// declared property getter: -(id)connectionHandler;
// declared property getter: -(BOOL)loadingConversations;
-(void)_handleMemoryWarning:(id)warning;
-(id)_chatIdentifierForEntities:(id)entities createIfNecessary:(BOOL)necessary;
-(id)pendingConversationCreatingIfNecessary;
-(void)_abChanged:(id)changed;
-(void)deleteConversationAtIndex:(int)index;
-(int)unreadFilteredConversationCount;
-(int)unreadConversationCount;
-(int)_unreadConversationCount:(BOOL)count;
-(int)unreadCount;
// converted property getter: -(id)pendingConversation;
-(void)unpendConversation;
-(void)beginTrackingConversation:(id)conversation forChat:(id)chat;
-(void)_postConversationListChangedNotification;
-(void)resort;
-(id)conversations;
-(BOOL)reloadStaleConversations;
-(BOOL)hasActiveConversations;
-(id)activeConversations;
// declared property getter: -(id)firstUnreadFilteredConversation;
// declared property getter: -(id)firstUnreadConversation;
-(id)_firstUnreadConversationWithFiltering:(BOOL)filtering;
-(BOOL)_shouldFilterForParticipants:(id)participants;
-(void)resetCaches;
-(id)conversationForExistingChatWithAddresses:(id)addresses;
-(id)conversationForRecipients:(id)recipients create:(BOOL)create;
-(id)conversationForHandles:(id)handles create:(BOOL)create;
-(id)_copyEntitiesForAddressStrings:(id)addressStrings;
-(void)_handleRegistryWillUnregisterChatNotification:(id)_handleRegistry;
-(void)_handleRegistryDidRegisterChatNotification:(id)_handleRegistry;
-(void)_handleRegistryDidLoadChatNotification:(id)_handleRegistry;
-(void)_beginTrackingAllExistingChatsIfNeeded;
-(void)stopTrackingConversation:(id)conversation;
-(id)conversationForExistingChatWithGUID:(id)guid;
-(id)conversationForExistingChatWithGroupID:(id)groupID;
-(id)_conversationForChat:(id)chat;
-(id)_beginTrackingConversationWithChat:(id)chat;
-(id)_alreadyTrackedConversationForChat:(id)chat;
-(void)dealloc;
-(id)init;
@end

