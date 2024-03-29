/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "XPCProxyTarget.h"
#import "ABPredicateDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject, NSArray, NSDate, ABFavoritesList, NSMutableDictionary, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_source, BBPushDataProviderFactory;

@interface BBServer : XXUnknownSuperclass <ABPredicateDelegate, XPCProxyTarget> {
@private
	NSMutableSet* _observers;
	NSMutableSet* _listObservers;
	NSMutableSet* _modalAlertObservers;
	NSMutableSet* _bannerObservers;
	NSMutableSet* _lockscreenObservers;
	NSMutableSet* _soundObservers;
	NSMutableSet* _settingsObservers;
	NSMutableSet* _settingsGateways;
	NSMutableArray* _sortedSectionIDs;
	NSMutableArray* _sortedPreviousSectionIDs;
	unsigned _sectionOrderRule;
	NSMutableDictionary* _sectionInfoByID;
	NSMutableDictionary* _sectionParametersByID;
	NSMutableDictionary* _sectionSortDescriptorsByID;
	NSMutableDictionary* _bulletinsByID;
	NSMutableDictionary* _bulletinIDsBySectionID;
	NSMutableDictionary* _transactionsByObserver;
	NSMutableDictionary* _listBulletinIDsBySectionID;
	NSArray* _behaviorOverrides;
	int _behaviorOverrideStatus;
	NSDate* _behaviorOverrideStatusEffectiveTime;
	NSObject<OS_dispatch_source>* _behaviorOverridesTimer;
	NSDate* _behaviorOverridesWakeTime;
	unsigned _activeBehaviorOverrides;
	NSMutableArray* _behaviorOverrideStatusChangeClients;
	NSMutableArray* _activeBehaviorOverrideTypesChangeSettingsGateways;
	NSMutableArray* _activeBehaviorOverrideTypesChangeClients;
	unsigned _privilegedSenderTypes;
	int _privilegedAddressBookGroupRecordID;
	NSString* _privilegedAddressBookGroupName;
	NSMutableDictionary* _lastContactTimeForSender;
	NSMutableArray* _privilegedSenderFilteringStateChangeClients;
	BOOL _privilegedSenderFilteringNecessary;
	NSMutableArray* _interruptingBulletinIDs;
	NSMutableArray* _expiringBulletinIDs;
	NSObject<OS_dispatch_source>* _expirationTimer;
	NSMutableArray* _eventBasedExpiringBulletinIDs;
	NSDate* _nextScheduledExpirationTimerFireDate;
	NSMutableDictionary* _dataProvidersBySection;
	NSMutableSet* _pushDataProviders;
	NSMutableDictionary* _clearedSections;
	id<BBPushDataProviderFactory> _pushDataProviderFactory;
	NSMutableDictionary* _dataProviderFactoriesBySection;
	int _demo_lockscreen_token;
	unsigned _currentSystemState;
@protected
	NSMutableDictionary* _bulletinRequestsByID;
@private
	void* _addressBook;
	ABFavoritesList* _favoritesList;
	BOOL _entryFound;
}
+(void)initialize;
-(void)demo_lockscreen:(unsigned long long)lockscreen;
-(id)_defaultSectionInfoForSection:(id)section;
-(void)_writeBehaviorOverrides;
-(void)_loadBehaviorOverrides;
-(void)_writeSectionInfo;
-(void)_writeSectionOrder;
-(void)_loadSavedSectionInfo;
-(void)_readSavedSectionOrder:(id*)order andRule:(unsigned*)rule;
-(id)_behaviorOverridesPath;
-(id)_sectionInfoPath;
-(id)_sectionOrderPath;
-(void)_writeClearedSections;
-(void)_loadClearedSections;
-(id)_clearedSectionsPath;
-(void)_ensureDataDirectoryExists;
-(id)_dataDirectoryPath;
-(void)_weeApp:(id)app setHiddenFromUser:(BOOL)user;
-(BOOL)_weeAppIsHiddenFromUser:(id)user callback:(id)callback;
-(void)_loadAllWeeAppSections;
-(id)_copyDefaultEnabledWeeAppIDs;
-(void)_removeDataProvider:(id)provider forFactory:(id)factory;
-(void)_removePushDataProvider:(id)provider;
-(void)_updatePushSettingsForPushDataProvider:(id)pushDataProvider;
-(void)_noteUserEnabledPushDeliveryForDataProvider:(id)dataProvider;
-(void)_addPushDataProvider:(id)provider sortNowAndNotifyObservers:(BOOL)observers;
-(void)_addDataProvider:(id)provider forFactory:(id)factory sortNowAndNotifyObservers:(BOOL)observers;
-(void)_addDataProvider:(id)provider sortSectionsNow:(BOOL)now;
-(void)_addSortedSectionID:(id)anId sortNow:(BOOL)now;
-(id)_configureSectionInfoForDataProvider:(id)dataProvider;
-(void)_updateSectionInfo:(id)info withDefaultInfo:(id)defaultInfo;
-(void)_updateSectionInfo:(id)info withSectionDisplayProperties:(id)sectionDisplayProperties;
-(void)_loadDataProviderPluginBundle:(id)bundle;
-(void)_loadAllDataProviderPluginBundles;
-(void)_setClearedInfo:(id)info forSectionID:(id)sectionID;
-(id)_clearedInfoForSectionID:(id)sectionID;
-(unsigned)_filtersForSectionID:(id)sectionID;
-(void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;
-(void)_publishBulletinRequest:(id)request forDataProvider:(id)dataProvider forDestinations:(int)destinations;
-(void)_updateSectionInfoForDataProvider:(id)dataProvider;
-(void)_updateSectionParametersForDataProvider:(id)dataProvider;
-(void)_updateBulletinsForDataProvider:(id)dataProvider;
-(void)_updateBulletinsForDataProvider:(id)dataProvider enabledSectionIDs:(id)ids;
-(void)_updateBulletinsForDataProviderIfSectionIsEnabled:(id)dataProviderIfSectionIsEnabled;
-(id)_enabledSectionIDsForDataProvider:(id)dataProvider;
-(BOOL)_verifyBulletinRequest:(id)request forDataProvider:(id)dataProvider;
-(void)_publishBulletinsForAllDataProviders;
-(void)_loadDataProvidersAndSettings;
-(id)_migrateSavedSectionOrder:(id)order;
-(void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;
-(void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)enabled forClient:(id)client;
-(void)getShouldPresentNotificationFromSenderWithDestinationID:(id)get handler:(id)handler;
-(void)settingsGateway:(id)gateway setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)enabled;
-(void)settingsGateway:(id)gateway setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)enabled;
-(void)settingsGateway:(id)gateway setPrivilegedSenderAddressBookGroupRecordID:(int)anId name:(id)name;
-(void)settingsGateway:(id)gateway setPrivilegedSenderTypes:(unsigned)types;
-(void)settingsGateway:(id)gateway setBehaviorOverrideStatus:(int)status;
-(void)settingsGateway:(id)gateway setBehaviorOverrides:(id)overrides;
-(void)_clearBehaviorOverridesTimer;
-(void)_updateBehaviorOverrides;
-(void)_checkPrivilegedSenderFilteringState;
-(void)_behaviorOverrideStatusChanged;
-(void)_behaviorOverridesChanged;
-(unsigned)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)state;
-(void)_noteSystemStateChanged;
-(unsigned)_adjustedBehaviorOverrideTypes:(unsigned)types basedOnSystemState:(unsigned)state;
-(void)_setBehaviorOverridesTimer;
-(void)settingsGateway:(id)gateway setSectionInfo:(id)info forSectionID:(id)sectionID;
-(void)settingsGateway:(id)gateway setOrderedSectionIDs:(id)ids;
-(void)settingsGateway:(id)gateway setSectionOrderRule:(unsigned)rule;
-(void)settingsGateway:(id)gateway getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)handler;
-(void)settingsGateway:(id)gateway getPrivilegedSenderTypesWithHandler:(id)handler;
-(void)settingsGateway:(id)gateway getBehaviorOverridesEnabledWithHandler:(id)handler;
-(void)settingsGateway:(id)gateway getBehaviorOverridesWithHandler:(id)handler;
-(void)settingsGateway:(id)gateway getSectionInfoWithHandler:(id)handler;
-(void)observer:(id)observer getActiveAlertBehaviorOverridesWithHandler:(id)handler;
-(void)observer:(id)observer getRecentUnacknowledgedBulletinsForFeeds:(unsigned)feeds withHandler:(id)handler;
-(void)observer:(id)observer requestListBulletinsForSectionID:(id)sectionID;
-(id)_updatesForObserver:(id)observer bulletinIDs:(id)ids;
-(void)observer:(id)observer getSectionInfoWithHandler:(id)handler;
-(void)observer:(id)observer clearBulletinIDs:(id)ids inSection:(id)section;
-(void)observer:(id)observer clearSection:(id)section;
-(void)observer:(id)observer finishedWithBulletinID:(id)bulletinID transactionID:(unsigned)anId;
-(void)observer:(id)observer handleResponse:(id)response;
-(void)observer:(id)observer setObserverFeed:(unsigned)feed;
-(void)getAttachmentAspectRatioForBulletinID:(id)bulletinID withHandler:(id)handler;
-(void)getAttachmentPNGDataForBulletinID:(id)bulletinID sizeConstraints:(id)constraints withHandler:(id)handler;
-(void)getSectionParametersForSectionID:(id)sectionID withHandler:(id)handler;
-(void)getSortDescriptorsForSectionID:(id)sectionID withHandler:(id)handler;
-(void)getSectionOrderRuleWithHandler:(id)handler;
-(id)_interruptingBulletinIDsForFeeds:(unsigned)feeds;
-(void)_expireInterruptions;
-(void)_addInterruptingBulletin:(id)bulletin;
-(void)_scheduleExpirationForBulletin:(id)bulletin;
-(void)_expireBulletins;
-(void)_expireBulletinsDueToSystemEvent:(unsigned)systemEvent;
-(unsigned)_indexForNewDate:(id)newDate inBulletinIDArray:(id)bulletinIDArray sortedAscendingByDateForKey:(id)key;
-(id)_bulletinIDsInSortedArray:(id)sortedArray withDateForKey:(id)key beforeCutoff:(id)cutoff;
-(void)_expireBulletinsAndInterruptionsAndRescheduleTimerIfNecessary;
-(id)_nextExpireInterruptionsDate;
-(id)_nextExpireBulletinsDate;
-(void)_scheduleTimerForDate:(id)date;
-(void)_clearExpirationTimer;
-(void)_handleSignificantTimeChange;
-(void)_handleSystemWake;
-(void)_handleSystemSleep;
-(void)_setSectionInfo:(id)info forSectionID:(id)sectionID;
-(void)_clearBulletinIDIfPossible:(id)possible rescheduleExpirationTimer:(BOOL)timer;
-(id)_sectionInfoArray:(BOOL)array;
-(id)_sectionInfoForSectionID:(id)sectionID effective:(BOOL)effective;
-(id)_effectiveSectionInfoForSectionInfo:(id)sectionInfo;
-(void)_sortSectionIDsUsingGuideArray:(id)array;
-(void)_sortSectionIDs:(id)ids usingGuideArray:(id)array;
-(void)_sortSectionIDsUsingDefaultOrder;
-(id)_defaultSectionOrder;
-(id)_allBulletinsForSectionID:(id)sectionID;
-(id)_listBulletinsForSectionID:(id)sectionID;
-(id)_bulletinsForIDs:(id)ids;
-(unsigned)_incrementedTransactionIDForObserver:(id)observer bulletinID:(id)anId;
-(id)_currentTransactionForObserver:(id)observer bulletinID:(id)anId;
-(unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;
-(unsigned)_feedsForBulletin:(id)bulletin destinations:(int)destinations;
-(void)_removeSection:(id)section;
-(void)_clearSection:(id)section;
-(void)_clearBulletins:(id)bulletins forSectionID:(id)sectionID;
-(void)_removeBulletin:(id)bulletin;
-(void)_removeBulletin:(id)bulletin rescheduleTimerIfAffected:(BOOL)affected;
-(void)_modifyBulletin:(id)bulletin;
-(void)_addBulletin:(id)bulletin;
-(void)_sendRemoveBulletin:(id)bulletin toFeeds:(unsigned)feeds;
-(void)_sendModifyBulletin:(id)bulletin toFeeds:(unsigned)feeds;
-(void)_sendAddBulletin:(id)bulletin toFeeds:(unsigned)feeds;
-(id)_observersForFeeds:(unsigned)feeds;
-(void)_sendUpdateSectionOrderRule;
-(void)_sendUpdateSectionOrder;
-(void)_handleSystemStateConnection:(id)connection;
-(void)_handleUtilitiesConnection:(id)connection;
-(void)_sendUpdateSectionInfo:(id)info;
-(void)_removeSettingsGateway:(id)gateway;
-(void)_addSettingsGatewayWithConnection:(id)connection;
-(void)_removeObserver:(id)observer;
-(void)_addObserverWithConnection:(id)connection;
-(id)sortDescriptorsForSectionID:(id)sectionID;
-(unsigned)listBulletinCapForSectionID:(id)sectionID;
-(id)allBulletinIDsForSectionID:(id)sectionID;
-(id)listBulletinIDsForSectionID:(id)sectionID;
-(void)removeBulletinID:(id)anId fromListSection:(id)listSection;
-(void)withdrawBulletinID:(id)anId;
-(void)publishBulletin:(id)bulletin destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;
-(id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;
-(void)dealloc;
-(id)init;
-(void)withdrawBulletinRequestsWithPublisherBulletinID:(id)publisherBulletinID forSectionID:(id)sectionID;
-(void)withdrawBulletinRequestsWithRecordID:(id)recordID forSectionID:(id)sectionID;
-(void)updateListSection:(id)section withBulletinRequests:(id)bulletinRequests;
-(void)publishBulletinRequest:(id)request destinations:(int)destinations alwaysToLockScreen:(BOOL)lockScreen;
-(void)publishBulletinRequest:(id)request destinations:(int)destinations;
-(void)deliverResponse:(id)response;
-(void)noteFinishedWithBulletinID:(id)bulletinID;
-(id)_removalsForListSection:(id)listSection addition:(id)addition keepAddition:(BOOL*)addition3;
-(void)_assignIDToBulletinRequest:(id)bulletinRequest checkAgainstBulletins:(id)bulletins;
-(void)_assignIDToBulletinRequest:(id)bulletinRequest;
-(id)_bulletinRequestsForIDs:(id)ids;
-(BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void*)record;
-(BOOL)predicateShouldContinue:(id)predicate;
-(BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned)activeBehaviorOverrides privilegedSenderTypes:(unsigned)types;
-(BOOL)shouldPresentNotificationFromSenderWithDestinationID:(id)destinationID;
-(BOOL)_doesAddressBookContainDestinationID:(id)anId;
-(BOOL)_doesFavoritesListContainDestinationID:(id)anId;
-(BOOL)_checkPersistentSenderStatusForDestinationID:(id)destinationID;
-(BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)anId;
-(BOOL)_isDestinationID:(id)anId inAddressBookGroupWithRecordID:(int)recordID;
-(id)_addressBookPredicateForDestinationID:(id)destinationID;
-(id)_favoritesList;
-(void*)_addressBook;
-(void)noteOccurrenceOfEvent:(unsigned)event;
-(void)noteChangeOfState:(unsigned)state newValue:(BOOL)value;
@end

