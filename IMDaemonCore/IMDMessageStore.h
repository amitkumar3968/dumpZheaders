/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumber, NSString;

@interface IMDMessageStore : XXUnknownSuperclass {
	NSString* _modificationStamp;
	NSNumber* _cachedUnreadMessageCount;
	BOOL _databaseOpen;
	BOOL _pendingDatabaseClose;
	BOOL _suppressedUpdates;
	BOOL _pendingDBUpdatePost;
}
@property(retain) NSString* modificationStamp;	// @synthesize=_modificationStamp
+(void)_updateCacheForMessageGUID:(id)messageGUID fromMessage:(id)message toMessage:(id)message3;
+(id)sharedInstance;
// declared property setter: -(void)setModificationStamp:(id)stamp;
// declared property getter: -(id)modificationStamp;
-(void)systemDidLeaveMemoryPressure;
-(void)systemDidEnterMemoryPressure;
-(void)updateStamp;
-(void)_postDBUpdate;
-(void)__postDBUpdate;
-(void)setSuppressDatabaseUpdates:(BOOL)updates;
-(void)cleanseAttachments;
-(long long)unreadMessageCountWithRoomName:(id)roomName onService:(id)service;
-(long long)unreadMessageCountWithHandle:(id)handle onService:(id)service;
-(long long)unreadMessagesCount;
-(id)markMessagesAsReadWithRoomname:(id)roomname onService:(id)service upToGUID:(id)guid fromMe:(BOOL)me;
-(id)markMessagesAsReadWithHandle:(id)handle onService:(id)service upToGUID:(id)guid fromMe:(BOOL)me;
-(id)markMessagesAsReadWithRoomNames:(id)roomNames onServices:(id)services upToGUID:(id)guid fromMe:(BOOL)me;
-(id)markMessagesAsReadWithHandles:(id)handles onServices:(id)services upToGUID:(id)guid fromMe:(BOOL)me;
-(id)deleteMessagesWithReplaceMessageID:(int)replaceMessageID fromHandle:(id)handle onService:(id)service;
-(id)deleteMessagesWithChatIdentifiers:(id)chatIdentifiers style:(unsigned char)style onServices:(id)services;
-(id)deleteMessagesWithChatIdentifiers:(id)chatIdentifiers style:(unsigned char)style onServices:(id)services completion:(id)completion;
-(void)_deleteMessagesWithGUIDs:(id)guids chatIdentifiers:(id)identifiers style:(unsigned char)style onServices:(id)services batchNumber:(unsigned)number completion:(id)completion;
-(id)deleteMessageGUIDs:(id)guids;
-(id)deleteMessageGUIDs:(id)guids inChat:(id)chat;
-(void)resolveUnformattedRepresentationsForHandles:(id)handles onService:(id)service message:(id)message completionBlock:(id)block;
-(id)chatsForMessageGUID:(id)messageGUID;
-(id)chatsForMessage:(id)message;
-(id)chatForMessageGUID:(id)messageGUID;
-(id)chatForMessage:(id)message;
-(id)messagesWithRoomNames:(id)roomNames onServices:(id)services limit:(unsigned)limit;
-(id)messagesWithHandles:(id)handles onServices:(id)services limit:(unsigned)limit;
-(id)messageWithReplaceMessageID:(int)replaceMessageID fromHandle:(id)handle onService:(id)service;
-(void)markMessageAsDeduplicated:(id)deduplicated;
-(id)existingMessageSimilarToMessage:(id)message skipServices:(id)services skipGUIDs:(id)guids withinTimeInterval:(double)interval participants:(id)participants;
-(id)messageWithGUID:(id)guid;
-(BOOL)hasStoredMessageWithGUID:(id)guid;
-(BOOL)canStoreMessage:(id)message onService:(id)service;
-(id)messagesWithGUIDs:(id)guids;
-(void)registerTransfersWithGUIDs:(id)guids forMessageGUID:(id)messageGUID;
-(id)_messagesWithRoomNames:(id)roomNames onServices:(id)services limit:(unsigned)limit;
-(id)_messagesWithHandles:(id)handles onServices:(id)services limit:(unsigned)limit;
-(id)_messagesWithGUIDs:(id)guids;
-(BOOL)_hasMessagesWithGUIDs:(id)guids;
-(id)storeMessage:(id)message forceReplace:(BOOL)replace modifyError:(BOOL)error modifyFlags:(BOOL)flags flagMask:(unsigned long long)mask;
-(void)_storeAttachmentsForMessage:(id)message;
-(void)performBlock:(id)block waitUntilDone:(BOOL)done;
-(void)performBlock:(id)block afterDelay:(double)delay;
-(void)performBlock:(id)block;
-(BOOL)isCurrentThreadDBThread;
-(void)openDatabase;
-(void)closeDatabase;
-(void)_setDatabaseCloseTimer;
-(void)_clearDatabaseCloseTimer;
-(void)__closeDatabase;
-(void)_updateModificationDate;
-(void)dealloc;
-(void)_performInitialHousekeeping;
-(id)init;
@end

