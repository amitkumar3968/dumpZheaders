/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, MFError, NSString, NSLock, NSSet, MailAccount, NSObject, NSMutableSet;
@protocol MFSecureMIMECompositionManagerDelegate, OS_dispatch_queue;

@interface MFSecureMIMECompositionManager : XXUnknownSuperclass {
	id<MFSecureMIMECompositionManagerDelegate> _delegate;
	NSLock* _lock;
	NSObject<OS_dispatch_queue>* _queue;
	MailAccount* _sendingAccount;
	NSString* _sendingAddress;
	SecIdentity* _signingIdentity;
	MFError* _signingIdentityError;
	SecIdentity* _encryptionIdentity;
	MFError* _encryptionIdentityError;
	NSMutableSet* _recipients;
	NSMutableDictionary* _errorsByRecipient;
	NSMutableDictionary* _certificatesByRecipient;
	int _signingPolicy;
	int _encryptionPolicy;
	int _signingStatus;
	int _encryptionStatus;
	unsigned _encryptionStatusSemaphore;
	unsigned _signingStatusSemaphore;
	BOOL _invalidated;
}
@property(readonly, assign) NSSet* recipients;
@property(readonly, assign) int encryptionStatus;
@property(readonly, assign) int signingStatus;
@property(readonly, assign) int encryptionPolicy;
@property(readonly, assign) int signingPolicy;
@property(readonly, assign) MailAccount* sendingAccount;
@property(copy) NSString* sendingAddress;
@property(assign) id<MFSecureMIMECompositionManagerDelegate> delegate;
+(id)copyEncryptionCertificatesForAccount:(id)account recipientAddress:(id)address error:(id*)error;
+(SecIdentity*)copyEncryptionIdentityForAccount:(id)account sendingAddress:(id)address error:(id*)error;
+(SecIdentity*)copySigningIdentityForAccount:(id)account sendingAddress:(id)address error:(id*)error;
-(BOOL)_shouldAllowSend_nts;
-(BOOL)_shouldEncrypt_nts;
-(BOOL)_shouldSign_nts;
-(BOOL)shouldAllowSend;
-(id)compositionSpecification;
// declared property getter: -(id)recipients;
// declared property getter: -(int)encryptionStatus;
-(void)_notifyDelegateEncryptionStatusDidChange:(int)_notifyDelegateEncryptionStatus certsByRecipient:(id)recipient errorsByRecipient:(id)recipient3 identity:(SecIdentity*)identity error:(id)error;
-(void)_setEncryptionIdentityError_nts:(id)nts;
-(BOOL)_updateEncryptionStatus_nts;
-(void)_determineEncryptionStatusWithNewRecipients:(id)newRecipients;
-(void)_determineEncryptionStatusWithSendingAddress:(id)sendingAddress;
// declared property getter: -(int)signingStatus;
-(void)_setSigningIdentityError_nts:(id)nts;
-(BOOL)_updateSigningStatus_nts;
-(void)_notifyDelegateSigningStatusDidChange:(int)_notifyDelegateSigningStatus identity:(SecIdentity*)identity error:(id)error;
-(void)_determineSigningStatusWithSendingAddress:(id)sendingAddress;
// declared property getter: -(int)encryptionPolicy;
// declared property getter: -(int)signingPolicy;
// declared property getter: -(id)sendingAccount;
// declared property getter: -(id)sendingAddress;
// declared property setter: -(void)setSendingAddress:(id)address;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)invalidate;
-(void)removeRecipients:(id)recipients;
-(void)addRecipients:(id)recipients;
-(void)dealloc;
-(id)initWithSendingAccount:(id)sendingAccount signingPolicy:(int)policy encryptionPolicy:(int)policy3;
-(id)initWithSigningPolicy:(int)signingPolicy encryptionPolicy:(int)policy;
-(id)init;
@end
