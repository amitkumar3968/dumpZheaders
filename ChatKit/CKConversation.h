/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CKMessageComposition, IMMessage, IMChat, NSString, NSMutableArray, NSMutableDictionary, NSTimer, IMService, CKIMMessage, NSArray, CKEntity;
@protocol CKMessage;

@interface CKConversation : XXUnknownSuperclass {
@private
	NSTimer* _recalculateDowngradeStateTimer;
	int _downgradeState;
	BOOL _ignoreDowngradeStatusUpdates;
	NSArray* _recipients;
	NSString* _name;
	NSMutableDictionary* _groupMessages;
	NSMutableArray* _messages;
	NSMutableArray* _pendingMessages;
	BOOL _isStale;
	int _bulkMessageAddStack;
	BOOL _updatesDisabled;
	BOOL _needsPostAfterUpdate;
	BOOL _wantsAnimatedPost;
	BOOL _ignoringTypingUpdates;
	id<CKMessage> _placeholderMessage;
	BOOL _hasPlaceholder;
	BOOL _moreMessagesToLoad;
	int _limitToLoad;
	IMChat* _chat;
	BOOL _blockingForHistoryQuery;
	IMMessage* _incomingTypingMessage;
	IMMessage* _outgoingTypingMessage;
	IMService* _cachedPreferredService;
	int _cachedPreferredServiceError;
	NSArray* _pendingRecipients;
	NSArray* _pendingHandles;
	NSArray* _failedMessages;
}
@property(copy, nonatomic) NSArray* pendingHandles;	// @synthesize=_pendingHandles
@property(retain, nonatomic) IMMessage* outgoingTypingMessage;	// @synthesize=_outgoingTypingMessage
@property(retain, nonatomic) IMMessage* incomingTypingMessage;	// @synthesize=_incomingTypingMessage
@property(assign, nonatomic, getter=isIgnoringTypingUpdates) BOOL ignoringTypingUpdates;	// @synthesize=_ignoringTypingUpdates
@property(readonly, assign, nonatomic) int disclosureAtomStyle;	// @dynamic
@property(readonly, assign, nonatomic) NSArray* handles;	// @dynamic
@property(readonly, assign, nonatomic) NSArray* pendingEntities;	// @dynamic
@property(copy, nonatomic) NSArray* pendingRecipients;	// @synthesize=_pendingRecipients
@property(readonly, assign, nonatomic, getter=isPending) BOOL pending;
@property(readonly, assign, nonatomic) BOOL shouldShowCharacterCount;
@property(assign, nonatomic) int limitToLoad;	// @synthesize=_limitToLoad
@property(readonly, assign, nonatomic) IMService* preferredService;
@property(readonly, assign, nonatomic) NSString* groupID;	// @dynamic
@property(readonly, assign, nonatomic) CKIMMessage* outgoingTypingCKMessage;
@property(readonly, assign, nonatomic) CKIMMessage* incomingTypingCKMessage;
@property(retain, nonatomic) NSString* rememberedKeyboard;
@property(assign, nonatomic) BOOL updatesDisabled;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasUnreadiMessages;	// @dynamic
@property(readonly, assign, nonatomic) BOOL hasUnreadMessages;	// @dynamic
@property(readonly, assign, nonatomic) unsigned unreadCount;	// @dynamic
@property(retain, nonatomic) CKMessageComposition* unsentComposition;	// @dynamic
@property(readonly, assign, nonatomic) NSString* previewText;
@property(readonly, assign, nonatomic) int buttonColor;
@property(readonly, assign, nonatomic) NSString* serviceDisplayName;
@property(readonly, assign, nonatomic) int identifier;	// @dynamic
@property(readonly, assign, nonatomic) int propertyType;	// @dynamic
@property(readonly, assign, nonatomic) void* abRecord;	// @dynamic
@property(readonly, assign, nonatomic) NSString* name;	// @dynamic
@property(readonly, assign, nonatomic) unsigned recipientCount;
@property(readonly, assign, nonatomic) NSArray* recipientStrings;
@property(readonly, assign, nonatomic) CKEntity* recipient;	// @dynamic
@property(retain, nonatomic) NSArray* recipients;	// @synthesize=_recipients
@property(readonly, assign, nonatomic) NSArray* failedMessages;	// @synthesize=_failedMessages
@property(readonly, assign, nonatomic) NSArray* messages;	// @synthesize=_messages
@property(readonly, assign, nonatomic) NSArray* pendingMessages;	// @synthesize=_pendingMessages
@property(retain, nonatomic) IMChat* chat;	// @synthesize=_chat
@property(readonly, assign, nonatomic) BOOL isEmpty;
@property(readonly, assign, nonatomic) BOOL isStale;	// @synthesize=_isStale
@property(assign) BOOL moreMessagesToLoad;	// converted property
+(void)_postNotification:(id)notification forMessage:(id)message;
+(BOOL)_contentChangedFromOldMessage:(id)oldMessage toNewMessage:(id)newMessage;
+(double)_iMessage_maxTrimDurationForMediaType:(int)mediaType;
+(unsigned)_iMessage_maxTransferFileSizeForWiFi:(BOOL)wiFi;
+(id)_iMessage_localizedErrorForReason:(int)reason;
+(BOOL)_iMessage_canSendMessageWithParts:(id)parts subject:(id)subject error:(id*)error;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)mediaObjectTypes;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)mediaObjectTypes errorCode:(int*)code;
+(int)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects;
+(BOOL)_iMessage_canAcceptMediaObject:(id)object givenMediaObjects:(id)objects;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)check;
+(double)_sms_maxTrimDurationForMediaType:(int)mediaType;
+(id)_sms_localizedErrorForReason:(int)reason;
+(BOOL)_sms_canSendMessageWithParts:(id)parts subject:(id)subject error:(id*)error;
+(BOOL)_sms_canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)mediaObjectTypes;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)mediaObjectTypes errorCode:(int*)code;
+(int)_sms_maxAttachmentCount;
+(BOOL)_sms_canAcceptMediaObject:(id)object givenMediaObjects:(id)objects;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)restriction;
// declared property getter: -(id)failedMessages;
// declared property setter: -(void)setIgnoringTypingUpdates:(BOOL)updates;
// declared property getter: -(BOOL)isIgnoringTypingUpdates;
// declared property getter: -(int)limitToLoad;
// declared property getter: -(BOOL)isStale;
// declared property setter: -(void)setOutgoingTypingMessage:(id)message;
// declared property getter: -(id)outgoingTypingMessage;
// declared property setter: -(void)setIncomingTypingMessage:(id)message;
// declared property getter: -(id)incomingTypingMessage;
// declared property setter: -(void)setChat:(id)chat;
// declared property getter: -(id)chat;
// declared property setter: -(void)setRecipients:(id)recipients;
// declared property setter: -(void)setPendingHandles:(id)handles;
// declared property getter: -(id)pendingHandles;
// declared property getter: -(id)pendingRecipients;
// declared property getter: -(id)pendingMessages;
// declared property getter: -(id)messages;
-(void)sendDowngradePingForMessage:(id)message manualDowngrade:(BOOL)downgrade;
-(id)__copyEntities;
-(id)displayNameForMediaObjects:(id)mediaObjects subject:(id)subject;
-(id)_headerTitleForPendingMediaObjects:(id)pendingMediaObjects subject:(id)subject onService:(id)service;
-(id)_headerTitleForService:(id)service;
-(id)_nameForHandle:(id)handle;
// declared property getter: -(id)serviceDisplayName;
-(int)outgoingBubbleColor;
// declared property getter: -(int)buttonColor;
// declared property getter: -(id)previewText;
// declared property getter: -(id)name;
// declared property getter: -(int)disclosureAtomStyle;
// declared property getter: -(BOOL)shouldShowCharacterCount;
-(void)_clearTypingIndicatorsIfNecessary;
-(void)_updateTypingIndicatorForComposition:(id)composition;
-(void)__rescindTypingIndicatorIfNecessary;
-(void)__sendTypingIndicatorIfNecessary;
-(void)clearTypingIndicator;
// declared property getter: -(id)outgoingTypingCKMessage;
// declared property getter: -(id)incomingTypingCKMessage;
-(BOOL)_chatSupportsTypingIndicators;
-(void)sendMessage:(id)message newComposition:(BOOL)composition;
-(void)sendMessage:(id)message onService:(id)service newComposition:(BOOL)composition;
-(void)_recordRecentContact;
-(void)_targetChatToPreferredService:(id)preferredService newComposition:(BOOL)composition;
-(void)_targetChat:(id)chat toService:(id)service newComposition:(BOOL)composition;
-(BOOL)_chatHasValidAccount:(id)account forService:(id)service;
-(BOOL)_accountIsOperational:(id)operational forService:(id)service;
-(void)newMessageContentChangedWithComposition:(id)composition;
-(id)newMessageWithComposition:(id)composition addToConversation:(BOOL)conversation;
-(id)newMessageWithComposition:(id)composition guid:(id)guid addToConversation:(BOOL)conversation;
-(id)newMessageWithComposition:(id)composition;
-(double)maxTrimDurationForMediaType:(int)mediaType;
-(BOOL)canSendMessageComposition:(id)composition error:(id*)error;
-(BOOL)canSendToRecipients:(id)recipients withAttachments:(id)attachments alertIfUnable:(BOOL)unable;
-(BOOL)canSendMessageWithParts:(id)parts subject:(id)subject error:(id*)error;
-(BOOL)canSendMessageWithParts:(id)parts subject:(id)subject onService:(id)service error:(id*)error;
-(BOOL)canSendMessageWithMediaObjectTypes:(int*)mediaObjectTypes;
-(BOOL)canAcceptMediaObjectType:(int)type givenMediaObjects:(id)objects;
-(BOOL)canAcceptMediaObject:(id)object givenMediaObjects:(id)objects;
-(BOOL)restrictMediaObjects;
// declared property getter: -(BOOL)isPending;
// declared property getter: -(id)recipientStrings;
// declared property getter: -(id)pendingEntities;
-(id)__copyEntityForMFComposeRecipient:(id)mfcomposeRecipient;
-(id)copyEntityForAddressString:(id)addressString;
// declared property setter: -(void)setPendingRecipients:(id)recipients;
-(int)compareBySequenceNumberAndDateDescending:(id)descending;
-(void)downgradeStateDidChange;
-(void)invalidatePreferredServiceCache;
-(id)shortDescription;
-(id)description;
-(void)addPlaceholderMessageIfNeededWithDate:(id)date;
-(BOOL)isPlaceholder;
-(void)markAllMessagesAsRead;
-(BOOL)isFromFilteredSender;
-(id)latestIncomingMessage;
-(id)latestMessage;
-(void)addMessage:(id)message;
-(id)placeholderMessage;
-(void)_setPlaceholderMessage:(id)message;
// converted property setter: -(void)setMoreMessagesToLoad:(BOOL)load;
// converted property getter: -(BOOL)moreMessagesToLoad;
// declared property setter: -(void)setLimitToLoad:(int)load;
-(void)loadMoreMessages;
-(void)loadAllMessages;
-(void)setLoadedMessages:(id)messages;
-(void)deleteMessage:(id)message;
-(void)deleteMessages:(id)messages;
-(void)deleteAllMessagesAndRemoveGroup;
-(void)deleteAllMessages;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)group;
-(void)removeAllMessages;
-(void)updateMessage:(id)message;
-(void)removeMessage:(id)message;
-(void)removeMessage:(id)message postUpdate:(BOOL)update;
-(id)date;
// declared property getter: -(id)recipients;
// declared property getter: -(unsigned)recipientCount;
// declared property getter: -(BOOL)isEmpty;
// declared property getter: -(int)identifier;
// declared property getter: -(int)propertyType;
// declared property getter: -(void*)abRecord;
-(id)uniqueIdentifier;
// declared property getter: -(id)groupID;
// declared property getter: -(BOOL)updatesDisabled;
// declared property setter: -(void)setUpdatesDisabled:(BOOL)disabled;
-(void)setUpdatesDisabled:(BOOL)disabled quietly:(BOOL)quietly;
-(void)postChangedUpdate:(BOOL)update;
-(void)_postChangeUpdate:(BOOL)update;
-(void)_refreshMoreToLoadFlag;
-(void)_calculateDowngradeState;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)downgrades;
-(void)_calculateDowngradeStateTimerFired;
-(void)_updateDowngradeState:(int)state checkAgainInterval:(double)interval;
-(void)_invalidateDowngradeState;
-(void)_handlePreferredServiceChangedNotification:(id)notification;
-(BOOL)_handleIsForThisConversation:(id)thisConversation;
-(void)requestRecipientStatuses;
// declared property getter: -(id)preferredService;
-(id)preferredServiceWithCanSend:(BOOL*)canSend error:(int*)error;
-(BOOL)canSendWithError:(int*)error;
-(id)_preferredServiceCheckWithServer:(BOOL)server canSend:(BOOL*)send error:(int*)error;
-(BOOL)isDowngraded;
-(void)_setupPreferredServiceChangeHandlers;
-(void)markAsStale;
-(BOOL)reloadIfStale;
-(int)endBulkMessageAddForcePost:(BOOL)post;
-(void)beginBulkMessageAdd;
-(void)_endBatchUpdates;
-(void)_beginBatchUpdates;
// declared property getter: -(id)rememberedKeyboard;
// declared property setter: -(void)setRememberedKeyboard:(id)keyboard;
// declared property getter: -(id)unsentComposition;
// declared property setter: -(void)setUnsentComposition:(id)composition;
-(void)_handleChatPropertiesChangedNotification:(id)notification;
-(void)_handleItemsDidChangeNotification:(id)_handleItems;
-(BOOL)_handleRemovedMessage:(id)message;
-(BOOL)_handleChangedMessage:(id)message forQuery:(id)query;
-(BOOL)_handleTypingIndicationMessage:(id)message;
-(id)_messagesFromChat:(id)chat;
-(id)_addCKMessageFromIMMessage:(id)immessage;
-(id)_existingMadridMessageForIMMessage:(id)immessage;
-(id)_IMMessageWithMessageParts:(id)messageParts subject:(id)subject date:(id)date isFinished:(BOOL)finished messageGUID:(id)guid needsDataDetection:(BOOL)detection;
-(id)_CKMessageFromIMMessage:(id)immessage;
// declared property getter: -(id)recipient;
// declared property getter: -(id)handles;
// declared property getter: -(BOOL)hasUnreadiMessages;
// declared property getter: -(BOOL)hasUnreadMessages;
// declared property getter: -(unsigned)unreadCount;
-(void)resetCaches;
-(void)resetPendingMessages;
-(void)dealloc;
-(void)_cleanupMessages;
-(id)initWithChat:(id)chat updatesDisabled:(BOOL)disabled;
-(id)init;
-(BOOL)_iMessage_canSendToRecipients:(id)recipients withAttachments:(id)attachments alertIfUnable:(BOOL)unable;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)addresses;
-(BOOL)_sms_canSendToRecipients:(id)recipients withAttachments:(id)attachments alertIfUnable:(BOOL)unable;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)addresses;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)addresses;
@end

