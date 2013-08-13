/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MCPasscodeManager : XXUnknownSuperclass {
}
+(id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;
+(id)characteristicsDictionaryFromPasscode:(id)passcode;
+(BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;
+(BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id*)error;
+(BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id*)error;
+(id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;
+(int)unlockScreenTypeForRestrictions:(id)restrictions;
+(int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;
+(id)generateSalt;
+(id)sharedManager;
-(void)passcodeExpiryDateCompletionBlock:(id)block;
-(id)passcodeExpiryDateOutError:(id*)error;
-(BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id*)error;
-(BOOL)isCurrentPasscodeCompliantOutError:(id*)error;
-(BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id*)error;
-(BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id*)error;
-(id)localizedDescriptionOfPasscodePolicy;
-(int)newPasscodeEntryScreenType;
-(int)currentUnlockScreenType;
-(id)_passcodeCharacteristics;
-(BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id*)error;
-(BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id*)error;
-(void)_sendPasscodeChangedNotification;
-(BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id*)error;
-(id)_wrongPasscodeError;
-(BOOL)isDeviceLocked;
-(void)lockDevice;
-(BOOL)isPasscodeSet;
-(void)_setPrivatePasscodeDict:(id)dict;
-(id)_privatePasscodeDict;
-(id)_publicPasscodeDict;
-(id)_init;
@end

