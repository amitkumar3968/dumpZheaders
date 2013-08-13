/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CPDistributedNotificationCenter;
@protocol AOSNotifySessionDelegate;

@interface AOSNotifySession : XXUnknownSuperclass {
	id<AOSNotifySessionDelegate> _delegate;
	CPDistributedNotificationCenter* _center;
}
@property(assign, nonatomic) id<AOSNotifySessionDelegate> delegate;	// @synthesize=_delegate
+(id)copyLostModeParams;
+(void)disableLostMode;
+(BOOL)lostModeIsActive;
+(id)copyStoreAccount;
+(id)sharedInstance;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)dumpDebugInfo:(id)info;
-(void)stopListeningOnTopic:(id)topic;
-(void)startListeningOnTopic:(id)topic;
-(id)cancelEmailVet;
-(id)vetEmailAccount:(id)account;
-(void)_vetFinished:(id)finished;
-(void)_stopVettingNotifications;
-(void)_vetResultReceived:(id)received;
-(id)iCloudAccount;
-(id)fmipAccount;
-(id)retrieveAllAccounts:(id*)accounts;
-(id)retrieveCurrentAccountForService:(id)service returningAccount:(id*)account;
-(id)removeAccount:(id)account;
-(id)addAccount:(id)account;
-(id)retrieveFMFAccount:(id*)account;
-(id)removeFMFAccountWithUsername:(id)username;
-(id)addFMFAccount:(id)account;
-(id)_errorForCode:(int)code message:(id)message;
-(void)dealloc;
-(id)init;
-(id)initWithDelegate:(id)delegate;
@end
