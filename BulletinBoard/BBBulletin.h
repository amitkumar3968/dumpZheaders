/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BulletinBoard-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSMutableArray, NSData, BBAction, BBSound, BBAttachments, NSString, NSArray, NSSet, BBContent, NSDate, NSTimeZone, BBObserver, NSMutableDictionary;

@interface BBBulletin : XXUnknownSuperclass <NSCopying, NSCoding> {
@private
	NSString* _sectionID;
	NSSet* _subsectionIDs;
	NSString* _publisherRecordID;
	NSString* _publisherBulletinID;
	int _addressBookRecordID;
	int _sectionSubtype;
	BBContent* _content;
	BBContent* _modalAlertContent;
	NSDate* _date;
	NSDate* _endDate;
	NSDate* _recencyDate;
	int _dateFormatStyle;
	BOOL _dateIsAllDay;
	NSTimeZone* _timeZone;
	int _accessoryStyle;
	BOOL _clearable;
	BBSound* _sound;
	BBAttachments* _attachments;
	NSString* _unlockActionLabelOverride;
	NSMutableDictionary* _actions;
	NSArray* _buttons;
	BOOL _expiresOnPublisherDeath;
	NSDictionary* _context;
	NSDate* _expirationDate;
	unsigned _expirationEvents;
	NSSet* _alertSuppressionContexts;
	NSString* _bulletinID;
	NSDate* _lastInterruptDate;
	BOOL _showsMessagePreview;
	NSString* _bulletinVersionID;
	NSMutableArray* _lifeAssertions;
	BBObserver* _observer;
	unsigned realertCount_deprecated;
	NSSet* alertSuppressionAppIDs_deprecated;
}
@property(retain, nonatomic) NSMutableArray* lifeAssertions;	// @synthesize=_lifeAssertions
@property(copy, nonatomic) NSSet* alertSuppressionAppIDs_deprecated;	// @synthesize
@property(assign, nonatomic) unsigned realertCount_deprecated;	// @synthesize
@property(retain, nonatomic) BBObserver* observer;	// @synthesize=_observer
@property(copy, nonatomic) BBAction* expireAction;
@property(assign, nonatomic) unsigned expirationEvents;	// @synthesize=_expirationEvents
@property(retain, nonatomic) NSDate* expirationDate;	// @synthesize=_expirationDate
@property(copy, nonatomic) NSString* bulletinVersionID;	// @synthesize=_bulletinVersionID
@property(assign, nonatomic) BOOL showsMessagePreview;	// @synthesize=_showsMessagePreview
@property(retain, nonatomic) NSMutableDictionary* actions;	// @synthesize=_actions
@property(copy, nonatomic) NSString* unlockActionLabelOverride;	// @synthesize=_unlockActionLabelOverride
@property(retain, nonatomic) BBAttachments* attachments;	// @synthesize=_attachments
@property(retain, nonatomic) BBContent* content;	// @synthesize=_content
@property(retain, nonatomic) NSDate* lastInterruptDate;	// @synthesize=_lastInterruptDate
@property(retain, nonatomic) NSDictionary* context;	// @synthesize=_context
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @synthesize=_expiresOnPublisherDeath
@property(copy, nonatomic) NSSet* alertSuppressionContexts;	// @synthesize=_alertSuppressionContexts
@property(copy, nonatomic) NSArray* buttons;	// @synthesize=_buttons
@property(copy, nonatomic) BBAction* acknowledgeAction;
@property(copy, nonatomic) BBAction* alternateAction;
@property(copy, nonatomic) BBAction* defaultAction;
@property(readonly, assign, nonatomic) int primaryAttachmentType;
@property(retain, nonatomic) BBSound* sound;	// @synthesize=_sound
@property(assign, nonatomic) BOOL clearable;	// @synthesize=_clearable
@property(assign, nonatomic) int accessoryStyle;	// @synthesize=_accessoryStyle
@property(retain, nonatomic) NSTimeZone* timeZone;	// @synthesize=_timeZone
@property(assign, nonatomic) BOOL dateIsAllDay;	// @synthesize=_dateIsAllDay
@property(assign, nonatomic) int dateFormatStyle;	// @synthesize=_dateFormatStyle
@property(retain, nonatomic) NSDate* recencyDate;	// @synthesize=_recencyDate
@property(retain, nonatomic) NSDate* endDate;	// @synthesize=_endDate
@property(retain, nonatomic) NSDate* date;	// @synthesize=_date
@property(retain, nonatomic) BBContent* modalAlertContent;	// @synthesize=_modalAlertContent
@property(copy, nonatomic) NSString* message;
@property(copy, nonatomic) NSString* subtitle;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) int sectionSubtype;	// @synthesize=_sectionSubtype
@property(assign, nonatomic) int addressBookRecordID;	// @synthesize=_addressBookRecordID
@property(copy, nonatomic) NSString* publisherBulletinID;	// @synthesize=_publisherBulletinID
@property(copy, nonatomic) NSString* recordID;	// @synthesize=_publisherRecordID
@property(copy, nonatomic) NSSet* subsectionIDs;	// @synthesize=_subsectionIDs
@property(copy, nonatomic) NSString* sectionID;	// @synthesize=_sectionID
@property(copy, nonatomic) NSString* section;
@property(copy, nonatomic) NSString* bulletinID;	// @synthesize=_bulletinID
@property(readonly, assign, nonatomic) int iPodOutAlertType;
@property(readonly, assign, nonatomic) unsigned subtypePriority;
@property(readonly, assign, nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;
@property(readonly, assign, nonatomic) BOOL bannerShowsSubtitle;
@property(readonly, assign, nonatomic) BOOL preservesUnlockActionCase;
@property(readonly, assign, nonatomic) BOOL inertWhenLocked;
@property(readonly, assign, nonatomic) unsigned realertCount;
@property(readonly, assign, nonatomic) BOOL suppressesMessageForPrivacy;
@property(readonly, assign, nonatomic) BOOL coalescesWhenLocked;
@property(readonly, assign, nonatomic) NSSet* alertSuppressionAppIDs;
@property(readonly, assign, nonatomic) NSString* unlockActionLabel;
@property(readonly, assign, nonatomic) NSString* fullUnlockActionLabel;
@property(readonly, assign, nonatomic) NSString* missedBannerDescriptionFormat;
@property(readonly, assign, nonatomic) NSString* topic;
@property(readonly, assign, nonatomic) BOOL showsDateInFloatingLockScreenAlert;
@property(readonly, assign, nonatomic) BOOL orderSectionUsingRecencyDate;
@property(readonly, assign, nonatomic) BOOL usesVariableLayout;
@property(readonly, assign, nonatomic) unsigned messageNumberOfLines;
@property(readonly, assign, nonatomic) BOOL showsSubtitle;
@property(readonly, assign, nonatomic) BOOL sectionDisplaysCriticalBulletins;
@property(readonly, assign, nonatomic) NSData* sectionIconData;
@property(readonly, assign, nonatomic) NSString* sectionDisplayName;
+(id)copyCachedBulletinWithBulletinID:(id)bulletinID;
+(void)removeBulletinFromCache:(id)cache;
+(void)addBulletinToCache:(id)cache;
+(id)bulletinWithBulletin:(id)bulletin;
// declared property setter: -(void)setAlertSuppressionAppIDs_deprecated:(id)deprecated;
// declared property getter: -(id)alertSuppressionAppIDs_deprecated;
// declared property setter: -(void)setRealertCount_deprecated:(unsigned)deprecated;
// declared property getter: -(unsigned)realertCount_deprecated;
// declared property setter: -(void)setObserver:(id)observer;
// declared property getter: -(id)observer;
// declared property setter: -(void)setLifeAssertions:(id)assertions;
// declared property getter: -(id)lifeAssertions;
// declared property setter: -(void)setBulletinVersionID:(id)anId;
// declared property getter: -(id)bulletinVersionID;
// declared property setter: -(void)setShowsMessagePreview:(BOOL)preview;
// declared property getter: -(BOOL)showsMessagePreview;
// declared property setter: -(void)setLastInterruptDate:(id)date;
// declared property getter: -(id)lastInterruptDate;
// declared property setter: -(void)setBulletinID:(id)anId;
// declared property getter: -(id)bulletinID;
// declared property getter: -(id)alertSuppressionContexts;
// declared property setter: -(void)setExpirationEvents:(unsigned)events;
// declared property getter: -(unsigned)expirationEvents;
// declared property setter: -(void)setExpirationDate:(id)date;
// declared property getter: -(id)expirationDate;
// declared property setter: -(void)setContext:(id)context;
// declared property getter: -(id)context;
// declared property setter: -(void)setExpiresOnPublisherDeath:(BOOL)death;
// declared property getter: -(BOOL)expiresOnPublisherDeath;
// declared property getter: -(id)buttons;
// declared property setter: -(void)setActions:(id)actions;
// declared property getter: -(id)actions;
// declared property setter: -(void)setUnlockActionLabelOverride:(id)override;
// declared property getter: -(id)unlockActionLabelOverride;
// declared property setter: -(void)setAttachments:(id)attachments;
// declared property setter: -(void)setSound:(id)sound;
// declared property getter: -(id)sound;
// declared property setter: -(void)setClearable:(BOOL)clearable;
// declared property getter: -(BOOL)clearable;
// declared property setter: -(void)setAccessoryStyle:(int)style;
// declared property getter: -(int)accessoryStyle;
// declared property setter: -(void)setTimeZone:(id)zone;
// declared property getter: -(id)timeZone;
// declared property setter: -(void)setDateIsAllDay:(BOOL)day;
// declared property getter: -(BOOL)dateIsAllDay;
// declared property setter: -(void)setDateFormatStyle:(int)style;
// declared property getter: -(int)dateFormatStyle;
// declared property setter: -(void)setRecencyDate:(id)date;
// declared property getter: -(id)recencyDate;
// declared property setter: -(void)setEndDate:(id)date;
// declared property getter: -(id)endDate;
// declared property setter: -(void)setDate:(id)date;
// declared property getter: -(id)date;
// declared property setter: -(void)setModalAlertContent:(id)content;
// declared property getter: -(id)modalAlertContent;
// declared property setter: -(void)setContent:(id)content;
// declared property setter: -(void)setSectionSubtype:(int)subtype;
// declared property getter: -(int)sectionSubtype;
// declared property setter: -(void)setAddressBookRecordID:(int)anId;
// declared property getter: -(int)addressBookRecordID;
// declared property setter: -(void)setPublisherBulletinID:(id)anId;
// declared property getter: -(id)publisherBulletinID;
// declared property setter: -(void)setRecordID:(id)anId;
// declared property getter: -(id)recordID;
// declared property setter: -(void)setSubsectionIDs:(id)ids;
// declared property getter: -(id)subsectionIDs;
// declared property setter: -(void)setSectionID:(id)anId;
// declared property getter: -(id)sectionID;
-(id)description;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)copyWithZone:(NSZone*)zone;
-(void)addLifeAssertion:(id)assertion;
-(void)_fillOutCopy:(id)copy withZone:(NSZone*)zone;
-(void)deliverResponse:(id)response;
-(id)responseSendBlock;
-(id)responseForExpireAction;
-(id)responseForButtonActionAtIndex:(unsigned)index;
-(id)responseForAcknowledgeAction;
-(id)responseForDefaultAction;
-(id)_responseForActionKey:(id)actionKey;
// declared property setter: -(void)setButtons:(id)buttons;
-(id)_actionKeyForButtonIndex:(unsigned)buttonIndex;
// declared property setter: -(void)setExpireAction:(id)action;
// declared property getter: -(id)expireAction;
// declared property setter: -(void)setAcknowledgeAction:(id)action;
// declared property getter: -(id)acknowledgeAction;
// declared property setter: -(void)setAlternateAction:(id)action;
// declared property getter: -(id)alternateAction;
// declared property setter: -(void)setDefaultAction:(id)action;
// declared property getter: -(id)defaultAction;
-(id)attachmentsCreatingIfNecessary:(BOOL)necessary;
// declared property getter: -(id)attachments;
-(unsigned)numberOfAdditionalAttachmentsOfType:(int)type;
-(unsigned)numberOfAdditionalAttachments;
// declared property getter: -(int)primaryAttachmentType;
// declared property setter: -(void)setAlertSuppressionContexts:(id)contexts;
// declared property getter: -(id)content;
// declared property setter: -(void)setSection:(id)section;
// declared property setter: -(void)setMessage:(id)message;
// declared property setter: -(void)setSubtitle:(id)subtitle;
// declared property setter: -(void)setTitle:(id)title;
// declared property getter: -(id)section;
// declared property getter: -(id)message;
// declared property getter: -(id)subtitle;
// declared property getter: -(id)title;
-(void)dealloc;
-(id)init;
// declared property getter: -(int)iPodOutAlertType;
// declared property getter: -(unsigned)subtypePriority;
// declared property getter: -(BOOL)visuallyIndicatesWhenDateIsInFuture;
// declared property getter: -(BOOL)bannerShowsSubtitle;
// declared property getter: -(BOOL)preservesUnlockActionCase;
// declared property getter: -(BOOL)inertWhenLocked;
// declared property getter: -(unsigned)realertCount;
// declared property getter: -(BOOL)suppressesMessageForPrivacy;
// declared property getter: -(BOOL)coalescesWhenLocked;
// declared property getter: -(id)alertSuppressionAppIDs;
// declared property getter: -(id)unlockActionLabel;
// declared property getter: -(id)fullUnlockActionLabel;
// declared property getter: -(id)missedBannerDescriptionFormat;
// declared property getter: -(id)topic;
// declared property getter: -(BOOL)showsDateInFloatingLockScreenAlert;
// declared property getter: -(BOOL)orderSectionUsingRecencyDate;
// declared property getter: -(BOOL)usesVariableLayout;
// declared property getter: -(unsigned)messageNumberOfLines;
// declared property getter: -(BOOL)showsSubtitle;
// declared property getter: -(BOOL)sectionDisplaysCriticalBulletins;
// declared property getter: -(id)sectionIconData;
// declared property getter: -(id)sectionDisplayName;
-(CGSize)composedAttachmentImageSizeForKey:(id)key;
-(id)composedAttachmentImageForKey:(id)key;
-(CGSize)composedAttachmentImageSize;
-(id)composedAttachmentImage;
-(CGSize)composedAttachmentImageSizeForKey:(id)key withObserver:(id)observer;
-(id)composedAttachmentImageForKey:(id)key withObserver:(id)observer;
-(CGSize)composedAttachmentImageSizeWithObserver:(id)observer;
-(id)composedAttachmentImageWithObserver:(id)observer;
@end
