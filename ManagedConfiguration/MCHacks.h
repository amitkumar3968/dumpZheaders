/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MCHacks : XXUnknownSuperclass {
}
+(void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)domain;
+(void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)domain;
+(void)_checkCarrierBundleRelatedSettings;
+(id)_deviceSpecificDefaultSettings;
+(void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)effectiveUserSettings;
+(void)_applyImpliedSettingsToSettingsDictionary:(id)settingsDictionary;
+(BOOL)_applyHeuristicsToRestrictions:(id)restrictions forProfile:(id)profile outError:(id*)error;
+(id)_selectLargestNumberFromSortedArray:(id)sortedArray equalToOrLessThanNumber:(id)orLessThanNumber;
+(id)_permittedAutoLockNumbers;
+(id)_permittedGracePeriodNumbers;
+(void)_applyServerSideChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;
+(void)_applyChangesWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions oldEffectiveUserSettings:(id)settings newEffectiveUserSettings:(id)settings4;
@end

