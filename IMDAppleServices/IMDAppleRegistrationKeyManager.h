/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMDAppleServices-Structs.h"

@class NSString, IMTimer, NSRecursiveLock;

@interface IMDAppleRegistrationKeyManager : XXUnknownSuperclass {
	SecMPFullIdentity* _identity;
	SecKey* _privateKey;
	SecKey* _publicKey;
	NSString* _signature;
	BOOL _isMigratedSignature;
	BOOL _loaded;
	BOOL _identityLoaded;
	NSRecursiveLock* _lock;
	id _purgeCancelBlock;
	id _purgeEnqueueBlock;
	IMTimer* _purgeTimer;
}
+(BOOL)setupKeys;
+(id)sharedInstance;
-(BOOL)isMigratedKeyPairSignature;
-(id)keyPairSignature;
-(SecKey*)identityPublicKey;
-(SecKey*)identityPrivateKey;
-(void)purgeMessageProtectionIdentity;
-(id)publicMessageProtectionData;
-(SecMPFullIdentity*)copyMessageProtectionIdentity;
-(id)generateCSRForUserID:(id)userID;
-(void)dealloc;
-(id)init;
-(void)_loadIfNeeded:(BOOL)needed;
-(void)_save;
-(void)_setPurgeTimer;
-(void)_purgeMap;
@end

