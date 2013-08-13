/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class MZKeyValueStoreTransaction;

__attribute__((visibility("hidden")))
@interface MZKeyValueStoreError : XXUnknownSuperclass {
@private
	MZKeyValueStoreTransaction* _transaction;
}
@property(retain, nonatomic) MZKeyValueStoreTransaction* transaction;	// @synthesize=_transaction
+(id)serverClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;
+(id)userClampErrorWithTransaction:(id)transaction retrySeconds:(double)seconds underlyingError:(id)error;
+(id)delegateCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)transactionCancelledErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)transactionTimeoutErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)transactionCancelledErrorWithTransaction:(id)transaction code:(int)code underlyingError:(id)error;
+(id)transactionMissingURLErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)transactionMissingDomainErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)storeAccountSessionExpiredWithTransaction:(id)transaction underlyingError:(id)error;
+(id)noStoreAccountErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)userCancelledSignInErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)storeValidationErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)storeGenericErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)previousStoreAccountText currentStoreAccontText:(id)text transaction:(id)transaction underlyingError:(id)error;
+(id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)previousStoreAccountText transaction:(id)transaction underlyingError:(id)error;
+(id)killSwitchErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)networkingBlockedErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)keyValueStoreDisabledErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)unknownErrorWithTransaction:(id)transaction underlyingError:(id)error;
+(id)keyValueStoreErrorWithCode:(int)code localizedDescription:(id)description transaction:(id)transaction underlyingError:(id)error;
// declared property setter: -(void)setTransaction:(id)transaction;
// declared property getter: -(id)transaction;
-(id)copyWithZone:(NSZone*)zone;
-(double)retrySeconds;
-(id)currentStoreAccountKey;
-(id)previousStoreAccountKey;
-(BOOL)isTransactionMissingInformationError;
-(BOOL)isTransactionCancelledError;
-(BOOL)isClampError;
-(BOOL)isRecoverableError;
-(BOOL)isAccountsChangedError;
-(BOOL)isAuthenticationError;
-(id)description;
-(void)dealloc;
@end

