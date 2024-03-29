/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCRestrictionManager : XXUnknownSuperclass {
@private
	NSMutableDictionary* _defaultRestrictions;
	NSMutableDictionary* _restrictions;
	NSMutableDictionary* _profileRestrictions;
	NSMutableDictionary* _clientRestrictions;
	NSDictionary* _userSettings;
	NSDictionary* _effectiveUserSettings;
	NSDictionary* _clientTypeLoaders;
	CFDictionaryRef _clientTypeToLoaderClass;
	CFDictionaryRef _clientTypeToLoaderSelector;
	CFDictionaryRef _clientTypeToRecomputeComplianceSelector;
	NSObject<OS_dispatch_queue>* _syncQueue;
	NSObject<OS_dispatch_queue>* _nagMetaQueue;
	int _senderPID;
}
@property(assign, nonatomic) int senderPID;	// @synthesize=_senderPID
@property(readonly, retain) NSMutableDictionary* profileRestrictions;	// converted property
@property(readonly, retain) NSMutableDictionary* clientRestrictions;	// converted property
@property(readonly, retain) NSDictionary* userSettings;	// converted property
@property(readonly, retain) NSDictionary* effectiveUserSettings;	// converted property
+(BOOL)_isDictionary:(id)dictionary differentFromDictionary:(id)dictionary2;
+(BOOL)valueSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;
+(BOOL)boolSetting:(id)setting valueChangedBetweenOldSettings:(id)settings andNewSettings:(id)settings3;
+(id)valueSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;
+(int)boolSettingForFeature:(id)feature withUserSettingDictionary:(id)userSettingDictionary;
+(id)defaultValueForSetting:(id)setting;
+(int)defaultBoolValueForSetting:(id)setting;
+(id)defaultParametersForValueSetting:(id)valueSetting;
+(id)defaultParametersForBoolSetting:(id)boolSetting;
+(id)defaultSettingsDict;
+(BOOL)restrictedValue:(id)value changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;
+(BOOL)restrictedBool:(id)aBool changedBetweenOldRestrictions:(id)restrictions andNewRestrictions:(id)restrictions3;
+(id)objectForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;
+(id)valueForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;
+(int)restrictedBoolForFeature:(id)feature withRestrictionsDictionary:(id)restrictionsDictionary;
+(id)filterRestrictionDictionaryForPublicUse:(id)publicUse;
+(id)restrictionsWithCurrentRestrictions:(id)currentRestrictions defaultRestrictions:(id)restrictions profileRestrictions:(id)restrictions3 clientRestrictions:(id)restrictions4 outRestrictionsChanged:(BOOL*)changed outError:(id*)error;
+(id)restrictionsAfterApplyingRestrictionsDictionary:(id)dictionary toRestrictionsDictionary:(id)restrictionsDictionary outChangeDetected:(BOOL*)detected outError:(id*)error;
+(id)sharedManager;
+(void)_setPathsRestrictionsFilePath:(id)path defaultRestrictionsFilePath:(id)path2 clientTypeLoadersFilePath:(id)path3 profileRestrictionsFilePath:(id)path4 clientRestrictionsFilePath:(id)path5 userSettingsFilePath:(id)path6 effectiveUserSettingsFilePath:(id)path7;
// declared property setter: -(void)setSenderPID:(int)pid;
// declared property getter: -(int)senderPID;
-(void).cxx_destruct;
-(void)resetAllSettingsToDefaults;
-(void)removeValueSetting:(id)setting;
-(void)removeBoolSetting:(id)setting;
-(BOOL)isValueSettingLockedDownByRestrictions:(id)restrictions;
-(BOOL)isBoolSettingLockedDownByRestrictions:(id)restrictions;
-(id)effectiveValueForSetting:(id)setting;
-(int)effectiveRestrictedBoolForSetting:(id)setting;
-(id)effectiveParametersForValueSetting:(id)valueSetting;
-(id)effectiveParametersForBoolSetting:(id)boolSetting;
-(BOOL)setParametersForSettingsByType:(id)settingsByType;
-(BOOL)_recomputeEffectiveUserSettings;
-(BOOL)_setEffectiveUserSettings:(id)settings;
-(void)setBoolValue:(BOOL)value forSetting:(id)setting;
// converted property getter: -(id)effectiveUserSettings;
-(id)_effectiveUserSettings;
-(BOOL)_setUserSettings:(id)settings;
// converted property getter: -(id)userSettings;
-(id)_userSettings;
-(id)objectForFeature:(id)feature;
-(id)valueForFeature:(id)feature;
-(int)restrictedBoolForFeature:(id)feature;
-(id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)dictionary outChangeDetected:(BOOL*)detected outError:(id*)error;
-(void)dealloc;
-(id)description;
-(id)_init;
-(void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)lastLockDate;
-(void)setShowNagMessage;
-(BOOL)recomputeNagMetadata;
-(BOOL)removeOrphanedClientRestrictions;
-(void)notifyClientsToRecomputeCompliance;
-(id)_liveClientUUIDsForClientType:(id)clientType;
-(id)_loadClientLoaders;
-(BOOL)setClientRestrictions:(id)restrictions clientType:(id)type clientUUID:(id)uuid localizedClientDescription:(id)description localizedWarning:(id)warning outRestrictionsChanged:(BOOL*)changed outEffectiveSettingsChanged:(BOOL*)changed7 outRecomputedNag:(BOOL*)nag outError:(id*)error;
-(BOOL)setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL*)changed outEffectiveSettingsChanged:(BOOL*)changed3 outRecomputedNag:(BOOL*)nag outError:(id*)error;
-(void)setUserInfo:(id)info forClientUUID:(id)clientUUID;
-(BOOL)_setAllClientRestrictions:(id)restrictions outRestrictionsChanged:(BOOL*)changed outEffectiveSettingsChanged:(BOOL*)changed3 outError:(id*)error;
-(void)_setClientRestrictionsWithoutNotifications:(id)notifications;
-(id)allClientUUIDsForClientType:(id)clientType;
-(id)userInfoForClientUUID:(id)clientUUID;
-(id)_userInfoForClientUUID:(id)clientUUID;
-(id)clientRestrictionsForClientUUID:(id)clientUUID;
-(id)_clientTypeForClientUUID:(id)clientUUID;
-(id)_clientRestrictionsForClientUUID:(id)clientUUID;
// converted property getter: -(id)clientRestrictions;
-(id)_clientRestrictions;
-(BOOL)setProfileRestrictions:(id)restrictions outRestrictionsChanged:(BOOL*)changed outEffectiveSettingsChanged:(BOOL*)changed3 outRecomputedNag:(BOOL*)nag outError:(id*)error;
-(id)combinedProfileRestrictions;
// converted property getter: -(id)profileRestrictions;
-(id)_profileRestrictions;
-(void)_setRestrictions:(id)restrictions;
-(id)currentRestrictionsDictionary;
-(id)_currentRestrictionsDictionary;
-(id)_defaultSettingsDictionary;
-(id)defaultRestrictionsDictionary;
-(id)_defaultRestrictionsDictionary;
-(void)invalidateSettings;
-(void)invalidateRestrictions;
@end

