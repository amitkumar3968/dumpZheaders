/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import "IMCore-Structs.h"
#import "IMSystemMonitorListener.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, IMHandle, IMPeople, NSString, IMServiceImpl, NSMutableDictionary, NSDictionary, NSData, NSArray, NSDate;

@interface IMAccount : XXUnknownSuperclass <IMSystemMonitorListener> {
	IMServiceImpl* _service;
	IMPeople* _buddyList;
	NSMutableDictionary* _imHandles;
	NSMutableDictionary* _inlineTransfers;
	IMHandle* _loginIMHandle;
	NSArray* _cachedAllowList;
	NSArray* _cachedBlockList;
	NSString* _loginID;
	NSString* _displayName;
	NSString* _uniqueID;
	int _accountType;
	NSDictionary* _data;
	NSMutableDictionary* _dataChanges;
	NSDictionary* _profile;
	NSMutableDictionary* _profileChanges;
	NSString* _countryCode;
	int _profileStatus;
	NSDictionary* _accountPreferences;
	NSMutableDictionary* _accountPreferencesChanges;
	NSDictionary* _accountPersistentProperties;
	NSMutableDictionary* _accountPersistentPropertiesChanges;
	NSArray* _groups;
	NSMutableDictionary* _sortOrders;
	NSDictionary* _members;
	NSMutableDictionary* _coalescedChanges;
	NSArray* _targetGroupState;
	NSArray* _lastReceivedGroupState;
	NSDictionary* _subtypeInfo;
	unsigned _myStatus;
	NSMutableDictionary* _currentAccountStatus;
	NSString* _myStatusMessage;
	NSDictionary* _myNowPlaying;
	NSDate* _myIdleSince;
	NSData* _myPictureData;
	NSData* _accountImageData;
	unsigned long long _capabilities;
	unsigned long long _defaultHandleCapabilities;
	BOOL _hasCheckedDefaultHandleCapabilities;
	NSAttributedString* _myProfile;
	int _registrationStatus;
	int _registrationFailureReason;
	NSDictionary* _registrationAlertInfo;
	unsigned _loginStatus;
	BOOL _isActive;
	BOOL _hasPostedOfflineNotification;
	BOOL _justLoggedIn;
	BOOL _useMeCardName;
	unsigned _cachedBlockingMode;
	BOOL _blockIdleStatus;
	BOOL _syncedWithRemoteBuddyList;
	BOOL _hasReceivedSync;
	int _numHolding;
	int _coalesceCount;
	BOOL _needToCheckForWatchedIMHandles;
	BOOL _iconChecked;
	BOOL _hasBeenRemoved;
	id _smallImage;
	id _accountImage;
	BOOL _asleep;
}
@property(readonly, assign, nonatomic) NSDictionary* _persistentProperties;
@property(readonly, assign, nonatomic) BOOL hasSyncedWithRemoteBuddies;
@property(readonly, assign, nonatomic) BOOL hasTargetGroupStateBeenMet;
@property(readonly, assign, nonatomic) BOOL isAwaitingTargetGroupState;
@property(readonly, assign, nonatomic) BOOL _isUsableForSending;
@property(readonly, assign, nonatomic) BOOL isAsleep;
@property(readonly, assign, nonatomic) id loginIMHandle;	// @synthesize=_loginIMHandle
@property(readonly, assign, nonatomic) NSArray* arrayOfAllIMHandles;
@property(readonly, assign, nonatomic) NSDictionary* accountPreferences;
@property(assign, nonatomic) BOOL blockOtherAddresses;
@property(assign, nonatomic) BOOL blockIdleStatus;	// @synthesize=_blockIdleStatus
@property(assign, nonatomic) unsigned blockingMode;	// @synthesize=_cachedBlockingMode
@property(retain, nonatomic) NSArray* allowList;
@property(retain, nonatomic) NSArray* blockList;
@property(readonly, assign, nonatomic) BOOL makingChanges;
@property(readonly, assign, nonatomic) IMPeople* buddyList;	// @synthesize=_buddyList
@property(readonly, assign, nonatomic) NSArray* groupList;
@property(readonly, assign, nonatomic) NSString* temporaryPassword;
@property(readonly, assign, nonatomic) NSString* password;
@property(readonly, assign, nonatomic) int invalidSettings;
@property(readonly, assign, nonatomic) BOOL validServer;
@property(readonly, assign, nonatomic) BOOL validPort;
@property(readonly, assign, nonatomic) BOOL validLogin;
@property(readonly, assign, nonatomic) BOOL handlesChatInvites;
@property(readonly, assign, nonatomic) unsigned long long capabilities;	// @synthesize=_capabilities
@property(readonly, assign, nonatomic) BOOL canActivate;
@property(readonly, assign, nonatomic) BOOL isActive;	// @synthesize=_isActive
@property(assign, nonatomic, getter=isInvisible) BOOL invisible;
@property(readonly, assign, nonatomic) BOOL justLoggedIn;	// @synthesize=_justLoggedIn
@property(readonly, assign, nonatomic) BOOL isConnected;
@property(readonly, assign, nonatomic) BOOL isConnecting;
@property(assign, nonatomic) BOOL allowsVCRelay;
@property(assign, nonatomic) BOOL goIdle;
@property(readonly, assign, nonatomic) BOOL useSSL;
@property(readonly, assign, nonatomic) int port;
@property(readonly, assign, nonatomic) NSString* server;
@property(retain, nonatomic) NSString* login;	// @synthesize=_loginID
@property(assign, nonatomic) BOOL autoLogin;
@property(readonly, assign, nonatomic) BOOL isManaged;
@property(readonly, assign, nonatomic) NSAttributedString* myProfile;	// @synthesize=_myProfile
@property(readonly, assign, nonatomic) NSString* myNowPlayingString;
@property(readonly, assign, nonatomic) NSData* myPictureData;	// @synthesize=_myPictureData
@property(readonly, assign, nonatomic) NSDate* myIdleSince;	// @synthesize=_myIdleSince
@property(readonly, assign, nonatomic) NSDictionary* myStatusDictionary;	// @synthesize=_currentAccountStatus
@property(readonly, assign, nonatomic) NSString* myStatusMessage;	// @synthesize=_myStatusMessage
@property(readonly, assign, nonatomic) unsigned myStatus;	// @synthesize=_myStatus
@property(readonly, assign, nonatomic) NSString* loginStatusMessage;
@property(readonly, assign, nonatomic) unsigned loginStatus;	// @synthesize=_loginStatus
@property(retain, nonatomic) NSString* accountDescription;
@property(readonly, assign, nonatomic) BOOL hasCustomDescription;
@property(readonly, assign, nonatomic) int accountType;
@property(copy, nonatomic) NSString* displayName;
@property(readonly, assign, nonatomic) NSArray* vettedAliases;
@property(readonly, assign, nonatomic) NSArray* aliases;
@property(readonly, assign, nonatomic) NSString* countryCode;
@property(readonly, assign, nonatomic) NSDictionary* profileInfo;
@property(readonly, assign, nonatomic) NSString* authorizationToken;
@property(readonly, assign, nonatomic) NSString* authorizationID;
@property(readonly, assign, nonatomic) BOOL supportsAuthorization;
@property(readonly, assign, nonatomic) BOOL isOperational;
@property(readonly, assign, nonatomic) BOOL isRegistered;
@property(readonly, assign, nonatomic) NSDictionary* registrationFailureAlertInfo;
@property(readonly, assign, nonatomic) int registrationFailureReason;
@property(readonly, assign, nonatomic) int registrationStatus;
@property(readonly, assign, nonatomic) BOOL supportsRegistration;
@property(readonly, assign, nonatomic) NSDictionary* accountSubtypeInfo;	// @synthesize=_subtypeInfo
@property(readonly, assign, nonatomic) NSArray* addressBookProperties;
@property(readonly, assign, nonatomic) NSString* addressBookProperty;
@property(readonly, assign, nonatomic) NSData* accountImageData;
@property(readonly, assign, nonatomic) NSArray* emailDomains;
@property(readonly, assign, nonatomic) NSString* internalName;
@property(readonly, assign, nonatomic) NSString* serviceName;
@property(readonly, assign, nonatomic) NSString* shortName;
@property(readonly, assign, nonatomic) NSString* name;
@property(readonly, assign, nonatomic) NSString* uniqueID;
@property(readonly, assign, nonatomic) NSDictionary* dictionary;
@property(readonly, assign, nonatomic) IMServiceImpl* service;	// @synthesize=_service
@property(readonly, assign) unsigned long long defaultHandleCapabilities;	// converted property
+(id)allBuddyListIMHandles;
+(id)arrayOfAllIMHandles;
+(id)nameOfLoginStatus:(unsigned)loginStatus;
+(id)_groupSummaryFromGroupList:(id)groupList;
+(void)removeTemporaryPasswordForAccount:(id)account forServiceName:(id)serviceName;
+(void)setTemporaryPassword:(id)password forAccount:(id)account forServiceName:(id)serviceName;
+(id)temporaryPasswordForAccount:(id)account forServiceName:(id)serviceName;
+(void)removePasswordForAccount:(id)account forServiceName:(id)serviceName;
+(void)setPassword:(id)password forAccount:(id)account forServiceName:(id)serviceName;
+(id)passwordForAccount:(id)account forServiceName:(id)serviceName;
// declared property getter: -(BOOL)justLoggedIn;
// declared property getter: -(id)buddyList;
// declared property getter: -(id)loginIMHandle;
// declared property getter: -(id)accountSubtypeInfo;
// declared property getter: -(BOOL)isActive;
// declared property getter: -(unsigned)blockingMode;
// declared property getter: -(BOOL)blockIdleStatus;
// declared property getter: -(unsigned)loginStatus;
// declared property getter: -(unsigned long long)capabilities;
// declared property getter: -(id)myIdleSince;
// declared property getter: -(id)myPictureData;
// declared property getter: -(id)myStatusMessage;
// declared property getter: -(unsigned)myStatus;
// declared property getter: -(id)myProfile;
// declared property getter: -(id)myStatusDictionary;
// declared property getter: -(id)service;
// declared property getter: -(id)login;
-(void)_handleIncomingCommand:(id)command withProperties:(id)properties fromBuddyInfo:(id)buddyInfo;
-(void)_handleDeliveredCommand:(id)command withProperties:(id)properties fromBuddyInfo:(id)buddyInfo;
-(void)_handleIncomingData:(id)data fromBuddyInfo:(id)buddyInfo;
-(BOOL)_updateDisplayName:(id)name;
// declared property setter: -(void)setDisplayName:(id)name;
// declared property getter: -(id)displayName;
-(void)setInteger:(int)integer forPreferenceKey:(id)preferenceKey;
-(int)integerForPreferenceKey:(id)preferenceKey;
-(void)setBool:(BOOL)aBool forPreferenceKey:(id)preferenceKey;
-(BOOL)boolForPreferenceKey:(id)preferenceKey;
-(void)setString:(id)string forPreferenceKey:(id)preferenceKey;
-(id)stringForPreferenceKey:(id)preferenceKey;
-(id)dictionaryDataForPreferenceKey:(id)preferenceKey;
-(void)setDictionaryData:(id)data forPreferenceKey:(id)preferenceKey;
-(void)removeObjectForPreferenceKey:(id)preferenceKey;
-(void)setObject:(id)object forPreferenceKey:(id)preferenceKey;
-(id)objectForPreferenceKey:(id)preferenceKey;
// declared property getter: -(id)accountPreferences;
-(void)_removePersistentPropertyForKey:(id)key;
-(void)_setPersistentPropertyObject:(id)object forKey:(id)key;
-(id)_persistentPropertyForKey:(id)key;
// declared property getter: -(id)_persistentProperties;
// declared property getter: -(BOOL)isAsleep;
-(void)systemWillSleep;
-(void)systemDidWake;
-(void)setInteger:(int)integer forKey:(id)key;
-(int)integerForKey:(id)key;
-(void)setBool:(BOOL)aBool forKey:(id)key;
-(BOOL)boolForKey:(id)key;
-(void)setString:(id)string forKey:(id)key;
-(id)stringForKey:(id)key;
-(id)dictionaryDataForKey:(id)key;
-(void)setDictionaryData:(id)data forKey:(id)key;
-(void)removeObjectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)objectForKey:(id)key;
-(int)validationErrorReasonForAlias:(id)alias type:(int)type;
-(int)validationErrorReasonForAlias:(id)alias;
-(int)validationStatusForAlias:(id)alias type:(int)type;
-(int)validationStatusForAlias:(id)alias;
-(BOOL)validateAlias:(id)alias type:(int)type;
-(BOOL)validateAliases:(id)aliases;
-(BOOL)validateAlias:(id)alias;
-(BOOL)unvalidateAliases:(id)aliases;
-(BOOL)unvalidateAlias:(id)alias;
-(int)typeForAlias:(id)alias;
-(BOOL)removeAlias:(id)alias type:(int)type;
-(BOOL)removeAliases:(id)aliases;
-(BOOL)removeAlias:(id)alias;
-(BOOL)addAlias:(id)alias type:(int)type;
-(BOOL)addAliases:(id)aliases;
-(BOOL)addAlias:(id)alias;
-(id)aliasesForType:(int)type;
-(BOOL)hasAlias:(id)alias type:(int)type;
-(BOOL)hasAlias:(id)alias;
// declared property getter: -(id)aliases;
-(id)_statuses;
-(id)_aliasInfoForAlias:(id)alias;
-(BOOL)refreshVettedAliases;
-(id)_aliases;
// declared property getter: -(id)vettedAliases;
-(void)_updateProfileInfo:(id)info;
-(int)profileValidationErrorReason;
-(int)profileValidationStatus;
-(BOOL)validateProfile;
-(BOOL)setProfileString:(id)string forKey:(id)key;
-(BOOL)setProfileValue:(id)value forKey:(id)key;
-(BOOL)removeProfileValueForKey:(id)key;
-(id)profileStringForKey:(id)key;
-(id)profileValueForKey:(id)key;
// declared property getter: -(id)profileInfo;
// declared property getter: -(id)countryCode;
-(BOOL)updateAuthorizationCredentials:(id)credentials token:(id)token;
-(BOOL)authenticateAccount;
-(BOOL)requestNewAuthorizationCredentials;
// declared property getter: -(id)authorizationToken;
// declared property getter: -(id)authorizationID;
// declared property getter: -(BOOL)supportsAuthorization;
-(FZChatRoomValidity)validityOfChatRoomName:(id)chatRoomName;
-(id)defaultChatSuffix;
-(id)chatIDForRoomName:(id)roomName;
-(void)nowLoggedOut;
-(void)nowLoggedIn;
-(void)handleSubscriptionRequestFrom:(id)from withMessage:(id)message;
-(void)imHandle:(id)handle buddyStatusChanged:(BOOL)changed;
-(void)disconnectAllIMHandles;
-(void)unregisterIMHandle:(id)handle;
-(void)registerIMHandle:(id)handle;
-(void)_refreshLoginIMHandle;
-(void)forgetAllWatches;
-(void)stopWatchingIMHandle:(id)handle;
-(void)startWatchingIMHandle:(id)handle;
-(void)watchBuddiesIfNecessary;
-(void)_watchBuddiesIfNecessary;
-(BOOL)removeIMHandle:(id)handle fromIMPerson:(id)imperson;
-(BOOL)addIMHandle:(id)handle toIMPerson:(id)imperson;
-(id)imHandlesForIMPerson:(id)imperson;
-(void)requestBuddyListAuthorizationFromIMHandle:(id)imhandle;
-(void)setBuddyListAuthorization:(BOOL)authorization forIMHandle:(id)imhandle;
-(unsigned)sortOrderForIMHandle:(id)imhandle inGroup:(id)group;
-(id)personSibsForIMHandle:(id)imhandle;
-(id)personForIMHandle:(id)imhandle identifier:(int*)identifier;
-(id)personForIMHandle:(id)imhandle;
-(id)imHandleWithID:(id)anId;
-(id)existingIMHandleWithID:(id)anId countryCode:(id)code;
-(id)imHandleWithID:(id)anId countryCode:(id)code;
-(id)imHandleWithID:(id)anId alreadyCanonical:(BOOL)canonical;
// converted property getter: -(unsigned long long)defaultHandleCapabilities;
-(id)existingIMHandleWithID:(id)anId;
-(id)existingIMHandleWithID:(id)anId alreadyCanonical:(BOOL)canonical;
-(id)existingIMHandleWithInfo:(id)info alreadyCanonical:(BOOL)canonical;
-(id)imHandleWithInfo:(id)info alreadyCanonical:(BOOL)canonical;
-(id)existingIMHandleWithInfo:(id)info;
-(id)imHandleWithInfo:(id)info;
-(Class)imHandleClass;
// declared property getter: -(id)arrayOfAllIMHandles;
-(void)recalculateSubtypeInfo;
-(void)_clearImageCache;
-(id)recalculatedSubtypeInfo;
-(int)compareNames:(id)names;
-(void)groupsChanged:(id)changed error:(id)error;
-(void)_syncWithRemoteBuddies;
-(void)setIMAccountLoginStatus:(unsigned)status errorMessage:(id)message reason:(int)reason;
-(void)setIMAccountLoginStatus:(unsigned)status errorMessage:(id)message;
-(void)setIMAccountLoginStatus:(unsigned)status;
-(void)setIsActive:(BOOL)active;
// declared property getter: -(BOOL)isConnected;
// declared property getter: -(BOOL)isConnecting;
// declared property getter: -(id)loginStatusMessage;
-(void)_notJustLoggedIn;
-(BOOL)unregisterAccount;
-(BOOL)registerAccount;
// declared property getter: -(int)registrationFailureReason;
// declared property getter: -(int)registrationStatus;
-(void)_updateRegistrationStatus:(int)status error:(int)error info:(id)info;
// declared property getter: -(BOOL)supportsRegistration;
// declared property getter: -(id)registrationFailureAlertInfo;
// declared property getter: -(BOOL)isOperational;
// declared property getter: -(BOOL)isRegistered;
// declared property getter: -(BOOL)_isUsableForSending;
-(void)accountDidDeactivate;
-(void)accountDidBecomeActive;
-(void)accountWillBeRemoved;
-(void)_serviceDidDisconnect:(id)_service;
-(void)_serviceDidReconnect:(id)_service;
-(void)_serviceDidConnect:(id)_service;
-(void)_registrationStatusChanged:(id)changed;
-(void)setBuddyProperties:(id)properties buddyPictures:(id)pictures;
-(void)buddyPictureChanged:(id)changed imageData:(id)data imageHash:(id)hash;
-(void)buddyPropertiesChanged:(id)changed;
-(void)resumeBuddyUpdates;
-(void)_resumeBuddyUpdatesNow;
-(void)holdBuddyUpdates;
// declared property getter: -(BOOL)makingChanges;
-(void)endChanges;
-(id)memberGroups:(id)groups;
// declared property getter: -(id)groupList;
-(id)groupMembers:(id)members;
-(id)propertiesForGroup:(id)group;
-(void)reorderGroups:(id)groups;
-(void)reorderGroup:(id)group order:(id)order;
-(void)renameGroup:(id)group to:(id)to;
-(void)changeBuddyList:(id)list add:(BOOL)add groups:(id)groups atLocation:(int)location;
-(void)addBuddyToBuddyList:(id)buddyList;
-(BOOL)removeIMHandle:(id)handle fromGroups:(id)groups;
-(BOOL)addIMHandle:(id)handle toGroups:(id)groups atLocation:(int)location;
-(BOOL)removePeople:(id)people fromGroups:(id)groups;
-(BOOL)addPeople:(id)people toGroups:(id)groups atLocation:(int)location;
-(void)_ensureGroupsExists:(id)exists;
-(void)syncWithRemoteBuddies;
-(void)_markHasSyncedWithRemoteBuddies;
// declared property getter: -(BOOL)hasSyncedWithRemoteBuddies;
-(void)requestGroups;
-(void)hookupToDaemon;
-(void)beginChanges;
-(void)_applyChangesToTemporaryCache:(id)temporaryCache;
-(void)setTargetGroupsState:(id)state;
-(void)updateWithTargetGroups;
-(void)setWaitForTargetState;
-(void)targetGroupStateTimeout;
// declared property getter: -(BOOL)hasTargetGroupStateBeenMet;
// declared property getter: -(BOOL)isAwaitingTargetGroupState;
-(void)clearTargetState;
// declared property setter: -(void)setBlockOtherAddresses:(BOOL)addresses;
// declared property getter: -(BOOL)blockOtherAddresses;
// declared property setter: -(void)setBlockIdleStatus:(BOOL)status;
// declared property setter: -(void)setBlockingMode:(unsigned)mode;
// declared property getter: -(id)allowList;
// declared property setter: -(void)setAllowList:(id)list;
// declared property getter: -(id)blockList;
// declared property setter: -(void)setBlockList:(id)list;
-(void)blockMessages:(BOOL)messages fromID:(id)anId;
-(void)setCachedBlockIdleStatus:(BOOL)status;
-(void)setCachedBlockingMode:(unsigned)mode;
-(void)setCachedBlockList:(id)list;
-(void)setCachedAllowList:(id)list;
// declared property getter: -(id)emailDomains;
// declared property getter: -(id)addressBookProperty;
// declared property getter: -(id)addressBookProperties;
// declared property getter: -(id)dictionary;
-(void)loadFromDictionary:(id)dictionary;
-(void)_loadFromDictionary:(id)dictionary force:(BOOL)force;
-(void)setValue:(id)value ofExtraProperty:(id)extraProperty ofIMHandle:(id)imhandle;
-(void)requestProperty:(id)property ofIMHandle:(id)imhandle;
// declared property getter: -(int)invalidSettings;
// declared property getter: -(BOOL)isManaged;
// declared property getter: -(BOOL)validServer;
// declared property getter: -(BOOL)validPort;
// declared property getter: -(BOOL)validLogin;
// declared property getter: -(BOOL)canActivate;
// declared property setter: -(void)setAllowsVCRelay:(BOOL)relay;
// declared property getter: -(BOOL)allowsVCRelay;
// declared property setter: -(void)setGoIdle:(BOOL)idle;
// declared property getter: -(BOOL)goIdle;
// declared property getter: -(int)port;
// declared property getter: -(id)server;
-(id)_serverWithSSL:(BOOL)ssl;
-(id)description;
// declared property getter: -(BOOL)useSSL;
// declared property setter: -(void)setAutoLogin:(BOOL)login;
// declared property getter: -(BOOL)autoLogin;
// declared property getter: -(BOOL)hasCustomDescription;
// declared property setter: -(void)setAccountDescription:(id)description;
// declared property getter: -(id)accountDescription;
// declared property setter: -(void)setInvisible:(BOOL)invisible;
// declared property getter: -(BOOL)isInvisible;
-(void)removeTemporaryPassword;
-(void)setTemporaryPassword:(id)password;
// declared property getter: -(id)temporaryPassword;
-(void)removePassword;
-(void)setPassword:(id)password;
// declared property getter: -(id)password;
// declared property getter: -(BOOL)handlesChatInvites;
-(void)updateCapabilities:(unsigned long long)capabilities;
-(BOOL)hasCapability:(unsigned long long)capability;
-(int)compareServices:(id)services;
-(int)compareIDs:(id)ids;
-(int)compareStatus:(id)status;
-(int)compareAccountNames:(id)names;
-(int)compareLoginStatus:(id)status;
-(BOOL)emailAddressIsID:(id)anId;
-(void)resetToDefaults;
-(void)writeSettings;
-(BOOL)equalID:(id)anId andID:(id)anId2;
-(id)canonicalFormOfID:(id)anId countryCode:(id)code;
-(id)canonicalFormOfID:(id)anId;
// declared property getter: -(id)accountImageData;
// declared property getter: -(id)serviceName;
// declared property getter: -(id)name;
// declared property getter: -(id)internalName;
// declared property getter: -(id)shortName;
-(void)setUniqueID:(id)anId;
// declared property getter: -(id)uniqueID;
// declared property getter: -(id)myNowPlayingString;
-(void)setCurrentAccountStatus:(id)status;
-(void)_updateMyStatus:(unsigned)status message:(id)message;
// declared property getter: -(int)accountType;
// declared property setter: -(void)setLogin:(id)login;
-(void)_updateLogin:(id)login;
-(void)loginStatusChanged:(unsigned)changed message:(id)message reason:(int)reason properties:(id)properties;
-(void)logoutAccount;
-(void)loginAccount;
-(void)autoLoginAccount;
-(void)_loginWithAutoLogin:(BOOL)autoLogin;
-(id)initWithUniqueID:(id)uniqueID service:(id)service;
-(id)initWithService:(id)service;
-(void)clearServiceCaches;
-(void)dealloc;
-(void)finalize;
@end

