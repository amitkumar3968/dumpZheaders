/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import "VisualVoicemail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PCPersistentTimer, NSRecursiveLock, NSError, NSString;

@interface VVService : XXUnknownSuperclass {
	NSRecursiveLock* _lock;
	unsigned _capabilities;
	int _mailboxUsage;
	double _trashCompactionAge;
	unsigned _unreadCount;
	unsigned _trashedCount;
	NSError* _passwordError;
	NSError* _activationError;
	NSString* _password;
	NSString* _passwordMailboxName;
	CFArrayRef _retryIntervals;
	PCPersistentTimer* _retryTimer;
	PCPersistentTimer* _trashCompactionTimer;
	PCPersistentTimer* _notificationFallbackTimer;
	CFDateRef _notificationFallbackWakeDate;
	CFDateRef _nextRetryWakeDate;
	CFDateRef _nextTrashCompactionWakeDate;
	int _retryIntervalIndex;
	unsigned _pmNotifier;
	IONotificationPortRef _pmNotifierPort;
	unsigned _pmRootPort;
	CFRunLoopSourceRef _pmRunLoopSource;
	id _carrierParameters;
	Class _notificationInterpreter;
	struct {
		unsigned offline : 1;
		unsigned subscribed : 1;
		unsigned initialSetupRequired : 1;
		unsigned fakeInitialSetup : 1;
		unsigned launchedWithFakeInitialSetup : 1;
		unsigned mwiState : 1;
		unsigned notificationFallbackEnabled : 1;
		unsigned capabilitiesLoaded : 1;
	} _serviceFlags;
}
@property(retain) id provisionalPassword;	// converted property
@property(retain) NSString* password;	// converted property
@property(assign, getter=isMessageWaiting) BOOL messageWaiting;	// converted property
@property(assign, getter=isOnline) BOOL online;	// converted property
@property(assign) unsigned trashedCount;	// converted property
@property(assign) unsigned unreadCount;	// converted property
@property(assign) int mailboxUsage;	// converted property
@property(assign) BOOL mailboxRequiresSetup;	// converted property
@property(assign, getter=isSubscribed) BOOL subscribed;	// converted property
@property(readonly, assign) unsigned capabilities;	// converted property
@property(readonly, assign) double trashCompactionAge;	// converted property
@property(readonly, retain) NSError* activationError;	// converted property
+(void)setInsomniaEnabled:(BOOL)enabled;
+(void)_resetInsomniaState;
+(void)_suppressInsomniaState;
+(void)_setInsomniaState:(BOOL)state;
+(unsigned)_voicemailPowerAssertion;
+(BOOL)sharedServiceIsSubscribed;
+(id)sharedService;
+(void)_handleSIMChange;
+(void)initialize;
-(void)_attemptScheduledTrashCompaction;
-(void)_cancelAutomatedTrashCompaction;
-(void)cancelAutomatedTrashCompaction;
-(void)_scheduleAutomatedTrashCompaction;
-(void)scheduleAutomatedTrashCompaction;
-(void)scheduleDelayedSynchronize;
-(CFArrayRef)_retryIntervals;
-(void)_attemptDelayedSynchronize:(id)synchronize;
-(void)_attemptDelayedSynchronize;
-(void)resetDelayedSynchronizationAttemptCount;
-(void)cancelDelayedSynchronize;
-(void)_deregisterForPowerEventsIfNecessary;
-(void)_registerForPowerEventsIfNecessary;
-(void)reportError:(id)error;
-(void)moveRecordFromTrash:(void*)trash;
-(void)moveRecordToTrash:(void*)trash;
-(void)setGreetingType:(int)type withData:(id)data duration:(unsigned)duration;
-(BOOL)greetingAvailable;
-(void)retrieveGreeting;
-(void)changePassword:(id)password fromPassword:(id)password2;
-(void)clearRemoteUIDsForDetachedMessages;
-(void)retrieveDataForRecord:(void*)record;
-(void)synchronize:(BOOL)synchronize;
-(BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)progress;
-(BOOL)synchronizationPending;
-(BOOL)headerChangesPending;
-(BOOL)dataForRecordPending:(void*)recordPending progressiveLoadInProgress:(BOOL*)progress;
-(void)progressiveDataLengthsForRecord:(void*)record expected:(unsigned*)expected current:(unsigned*)current;
-(BOOL)taskOfTypeExists:(int)typeExists;
-(BOOL)shouldScheduleAutoTrashOnMailboxUsageChange;
-(BOOL)doesClientManageTrashCompaction;
-(id)carrierParameterValueForKey:(id)key;
-(int)mailboxGreetingType;
-(BOOL)passwordChangeRequiresEnteringOldPassword;
-(int)maximumPasswordLength;
-(int)minimumPasswordLength;
-(int)maximumRecordedNameDuration;
-(int)maximumGreetingDuration;
-(void)cancelPasswordRequest;
-(void)handlePasswordNotificationResponse:(CFUserNotificationRef)response flags:(unsigned long)flags;
-(void)displayPasswordRequestIfNecessary;
-(void)handlePasswordRequestCancellation;
// converted property getter: -(id)provisionalPassword;
// converted property setter: -(void)setProvisionalPassword:(id)password;
// converted property setter: -(void)setPassword:(id)password;
-(id)passwordIgnoringSubscription:(BOOL)subscription;
// converted property getter: -(id)password;
-(void)handleIndicatorNotification:(CFDictionaryRef)notification;
-(BOOL)respectsMWINotifications;
-(void)handleNotification:(id)notification isMWI:(BOOL)mwi;
-(Class)notificationInterpreterClass;
-(void)_cancelIndicatorAction;
-(void)_reactToIndicator;
// converted property setter: -(void)setMessageWaiting:(BOOL)waiting;
// converted property getter: -(BOOL)isMessageWaiting;
-(BOOL)isInSync;
-(void)_scheduleFallbackTimerIfNecessary;
-(void)_enterFallbackMode:(id)mode;
-(void)_deliverFallbackNotification;
-(void)cancelNotificationFallback;
-(void)clearActivationError;
// converted property getter: -(id)activationError;
-(void)_contextActivationSucceeded:(id)succeeded;
-(void)_contextActivationFailed:(id)failed;
-(void)_setActivationError:(id)error;
-(void)_handleCallStatusChange:(CFDictionaryRef)change;
-(void)handleDataContextDeactivated;
-(void)_updateOnlineStatusWithDataStatusDict:(CFDictionaryRef)dataStatusDict;
-(BOOL)isOfflineDueToRoaming;
-(BOOL)_isOfflineDueToRoamingWithDataStatusDict:(CFDictionaryRef)dataStatusDict;
-(CFStringRef)connectionServiceType;
// converted property setter: -(void)setOnline:(BOOL)online;
-(void)_setOnline:(BOOL)online fallbackMode:(BOOL)mode;
// converted property getter: -(BOOL)isOnline;
-(void)updateLoggingSettings;
-(void)removeAllNonDetachedRecords;
-(void)removeAllRecords;
-(void)resetCounts;
-(void)updateCountsForChangedFlags:(int)changedFlags currentRecordFlags:(int)flags;
// converted property setter: -(void)setTrashedCount:(unsigned)count;
// converted property getter: -(unsigned)trashedCount;
// converted property setter: -(void)setUnreadCount:(unsigned)count;
// converted property getter: -(unsigned)unreadCount;
// converted property setter: -(void)setMailboxUsage:(int)usage;
// converted property getter: -(int)mailboxUsage;
-(BOOL)sharedSubscriptionRequiresSetup;
// converted property setter: -(void)setMailboxRequiresSetup:(BOOL)setup;
// converted property getter: -(BOOL)mailboxRequiresSetup;
-(id)mailboxName;
-(void)kill;
// converted property setter: -(void)setSubscribed:(BOOL)subscribed;
// converted property getter: -(BOOL)isSubscribed;
// converted property getter: -(unsigned)capabilities;
-(void)dealloc;
-(id)init;
-(BOOL)doTrashCompaction;
-(BOOL)shouldTrashCompactRecord:(void*)record;
// converted property getter: -(double)trashCompactionAge;
@end

