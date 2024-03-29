/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "IMSystemMonitorListener.h"

@class FTCConnectionHandler, NSSet, IMServiceImpl, NSMutableDictionary, NSArray, NSString, NSDictionary, NSTimer, IMAccount;

@interface CNFRegController : XXUnknownSuperclass <IMSystemMonitorListener> {
@private
	NSArray* _services;
	NSArray* _accounts;
	NSMutableDictionary* _accountFilterCache;
	id _accountRegistrationBlock;
	id _callerIdChangedBlock;
	id _accountAddedBlock;
	id _accountRemovedBlock;
	id _aliasStatusChangedBlock;
	id _aliasRemovedBlock;
	id _aliasAddedBlock;
	id _vettedAliasesChangedBlock;
	id _profileChangedBlock;
	id _profileStatusChangedBlock;
	id _accountAuthorizationChangedBlock;
	id _accountActivationChangedBlock;
	id _willLaunchURLBlock;
	id _resetBlock;
	id _serviceDidBecomeUnsupportedBlock;
	int _serviceType;
	FTCConnectionHandler* _connectionHandler;
	id _alertHandler;
	NSTimer* _wifiAlertWatchTimer;
	int _requiredWifiCount;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	BOOL _originalUsesBackgroundNetwork;
	NSDictionary* _cachedCallerIDMap;
	NSString* _logName;
	unsigned _logIndent;
	int _systemAccountType;
	IMAccount* _systemAccount;
	struct {
		unsigned listeningForAccountChanges : 1;
		unsigned listeningForCallerIDChanges : 1;
		unsigned listeningForAccountActivation : 1;
		unsigned preventingIdleSleep : 1;
		unsigned expectingWiFiPicker : 1;
		unsigned showedWifiFirstRunAlert : 1;
		unsigned ignoringAccountChanges : 1;
		unsigned activatingAccounts : 1;
	} _controllerFlags;
}
@property(readonly, assign, nonatomic) NSDictionary* cachedCallerIDMap;	// @synthesize=_cachedCallerIDMap
@property(readonly, assign, nonatomic) IMServiceImpl* firstService;	// @dynamic
@property(readonly, assign, nonatomic) NSSet* serviceNames;	// @dynamic
@property(copy, nonatomic) id alertHandler;	// @synthesize=_alertHandler
@property(copy, nonatomic) NSArray* services;	// @synthesize=_services
@property(readonly, assign, nonatomic, getter=isServiceSupported) BOOL serviceSupported;
@property(assign, nonatomic, getter=isServiceEnabled) BOOL serviceEnabled;
@property(readonly, assign, nonatomic) NSArray* emailAliases;
@property(readonly, assign, nonatomic) NSArray* useableAliases;
@property(readonly, assign, nonatomic) NSArray* allAvailableAliases;
@property(readonly, assign, nonatomic) NSArray* vettedAliases;
@property(readonly, assign, nonatomic) NSArray* aliases;
@property(readonly, assign, nonatomic) NSArray* accounts;
@property(copy, nonatomic) id willLaunchURLBlock;	// @synthesize=_willLaunchURLBlock
@property(copy, nonatomic) id accountActivationChangedBlock;	// @synthesize=_accountActivationChangedBlock
@property(copy, nonatomic) id accountAuthorizationChangedBlock;	// @synthesize=_accountAuthorizationChangedBlock
@property(copy, nonatomic) id profileStatusChangedBlock;	// @synthesize=_profileStatusChangedBlock
@property(copy, nonatomic) id profileChangedBlock;	// @synthesize=_profileChangedBlock
@property(copy, nonatomic) id serviceDidBecomeUnsupportedBlock;	// @synthesize=_serviceDidBecomeUnsupportedBlock
@property(copy, nonatomic) id resetBlock;	// @synthesize=_resetBlock
@property(copy, nonatomic) id vettedAliasesChangedBlock;	// @synthesize=_vettedAliasesChangedBlock
@property(copy, nonatomic) id aliasRemovedBlock;	// @synthesize=_aliasRemovedBlock
@property(copy, nonatomic) id aliasAddedBlock;	// @synthesize=_aliasAddedBlock
@property(copy, nonatomic) id aliasStatusChangedBlock;	// @synthesize=_aliasStatusChangedBlock
@property(copy, nonatomic) id callerIdChangedBlock;	// @synthesize=_callerIdChangedBlock
@property(copy, nonatomic) id accountRemovedBlock;	// @synthesize=_accountRemovedBlock
@property(copy, nonatomic) id accountAddedBlock;	// @synthesize=_accountAddedBlock
@property(copy, nonatomic) id accountRegistrationBlock;	// @synthesize=_accountRegistrationBlock
@property(assign, nonatomic) int serviceType;	// @synthesize=_serviceType
@property(readonly, assign, nonatomic) int systemAccountType;
@property(readonly, assign, nonatomic) IMAccount* systemAccount;
@property(readonly, assign, nonatomic) NSArray* failedAccounts;
@property(readonly, assign, nonatomic) NSArray* phoneAccounts;
@property(readonly, assign, nonatomic) NSArray* appleIDAccounts;
+(id)controllerForServiceType:(int)serviceType;
// declared property getter: -(id)cachedCallerIDMap;
// declared property setter: -(void)setWillLaunchURLBlock:(id)launchURLBlock;
// declared property getter: -(id)willLaunchURLBlock;
// declared property setter: -(void)setAccountActivationChangedBlock:(id)block;
// declared property getter: -(id)accountActivationChangedBlock;
// declared property setter: -(void)setServiceType:(int)type;
// declared property getter: -(int)serviceType;
// declared property setter: -(void)setServices:(id)services;
// declared property getter: -(id)services;
// declared property setter: -(void)setAccountAuthorizationChangedBlock:(id)block;
// declared property getter: -(id)accountAuthorizationChangedBlock;
// declared property setter: -(void)setProfileStatusChangedBlock:(id)block;
// declared property getter: -(id)profileStatusChangedBlock;
// declared property setter: -(void)setProfileChangedBlock:(id)block;
// declared property getter: -(id)profileChangedBlock;
// declared property setter: -(void)setAlertHandler:(id)handler;
// declared property getter: -(id)alertHandler;
// declared property setter: -(void)setServiceDidBecomeUnsupportedBlock:(id)becomeUnsupportedBlock;
// declared property getter: -(id)serviceDidBecomeUnsupportedBlock;
// declared property setter: -(void)setResetBlock:(id)block;
// declared property getter: -(id)resetBlock;
// declared property setter: -(void)setVettedAliasesChangedBlock:(id)block;
// declared property getter: -(id)vettedAliasesChangedBlock;
// declared property setter: -(void)setAliasRemovedBlock:(id)block;
// declared property getter: -(id)aliasRemovedBlock;
// declared property setter: -(void)setAliasAddedBlock:(id)block;
// declared property getter: -(id)aliasAddedBlock;
// declared property setter: -(void)setAliasStatusChangedBlock:(id)block;
// declared property getter: -(id)aliasStatusChangedBlock;
// declared property setter: -(void)setCallerIdChangedBlock:(id)block;
// declared property getter: -(id)callerIdChangedBlock;
// declared property setter: -(void)setAccountRemovedBlock:(id)block;
// declared property getter: -(id)accountRemovedBlock;
// declared property setter: -(void)setAccountAddedBlock:(id)block;
// declared property getter: -(id)accountAddedBlock;
// declared property setter: -(void)setAccountRegistrationBlock:(id)block;
// declared property getter: -(id)accountRegistrationBlock;
-(void)_decrementLogIndent;
-(void)_incrementLogIndent;
-(id)_logSpace;
-(id)_logName;
-(BOOL)setDisplayAlias:(id)alias;
-(id)displayAlias;
-(id)displayAccount;
-(void)_stopListeningForCallerIDChanges;
-(void)_startListeningForCallerIDChanges;
-(void)nukeAllCallerIDSettings;
-(void)_handleCallerIDChanged;
-(void)_handleCallerIDChangedForResume:(id)resume;
-(void)_nukeCallerIDCache;
-(void)_postCallerIDChanged;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)setCellularDataEnabled:(BOOL)enabled withCompletion:(id)completion;
-(BOOL)cellularDataEnabled;
-(void)deviceCapabilityChanged:(id)changed;
-(void)connect;
-(void)connect:(BOOL)connect;
-(BOOL)isConnected;
// declared property getter: -(BOOL)isServiceSupported;
// declared property getter: -(BOOL)isServiceEnabled;
// declared property setter: -(void)setServiceEnabled:(BOOL)enabled;
-(void)removeAllHandlers;
-(void)vettedAliasesChanged:(id)changed;
-(void)aliasesChanged:(id)changed;
-(void)handleAliasRemoved:(id)removed;
-(void)handleAliasAdded:(id)added;
-(void)aliasStatusChanged:(id)changed;
-(void)accountActivationStateChanged:(id)changed;
-(void)authorizationCredentialsChanged:(id)changed;
-(void)profileValidationStateChanged:(id)changed;
-(void)profileChanged:(id)changed;
-(void)callerIdChanged:(id)changed;
-(void)accountRegistrationChanged:(id)changed;
-(void)accountRemoved:(id)removed;
-(void)accountAdded:(id)added;
-(BOOL)shouldHandleAccountNotification:(id)notification;
-(void)stopListeningForAccountChanges;
-(void)startListeningForAccountChanges;
-(BOOL)shouldShowAlertForError:(id)error;
-(BOOL)hasFailedLoginDueToBadLogin;
-(BOOL)hasFailedLogin;
-(unsigned)accountState;
-(unsigned)accountStateForAccount:(id)account;
-(unsigned)accountState:(id)state;
-(BOOL)_accountHasValidatedLocale:(id)locale;
-(BOOL)_accountIsAuthenticated:(id)authenticated;
-(BOOL)_accountIsSignedOut:(id)anOut;
-(id)aliasSummaryString:(BOOL*)string;
-(BOOL)unvalidateAlias:(id)alias;
-(BOOL)validateAlias:(id)alias;
-(BOOL)setAliases:(id)aliases onAccount:(id)account;
-(BOOL)canRemoveAlias:(id)alias;
-(BOOL)removeAlias:(id)alias fromAccount:(id)account;
-(BOOL)addAlias:(id)alias;
-(BOOL)addAlias:(id)alias toAccount:(id)account;
-(BOOL)_addAliases:(id)aliases toAccount:(id)account validate:(BOOL)validate;
-(id)aliasNamed:(id)named;
-(BOOL)hasAlias:(id)alias;
-(BOOL)hasAliasNamed:(id)named;
// declared property getter: -(id)emailAliases;
// declared property getter: -(id)useableAliases;
// declared property getter: -(id)allAvailableAliases;
// declared property getter: -(id)vettedAliases;
// declared property getter: -(id)aliases;
-(id)useableAliasesForAccounts:(id)accounts;
-(id)allAvailableAliasesForAccounts:(id)accounts;
-(id)vettedAliasesForAccounts:(id)accounts;
-(id)aliasesForAccounts:(id)accounts;
-(id)_aliasComparator;
-(id)_aliasesPassingTest:(id)test;
-(id)_aliasesFromAccounts:(id)accounts passingTest:(id)test;
-(id)_allAvailableAliasesForAccount:(id)account;
-(id)_vettedAliasesForAccount:(id)account;
-(id)_aliasesForAccount:(id)account;
-(BOOL)_shouldFilterOutAlias:(id)alias onAccount:(id)account;
-(id)localPhoneNumberSentinelAlias;
-(BOOL)_aliasIsDevicePhoneNumber:(id)number;
-(id)accountForAlias:(id)alias;
-(id)_accountForAlias:(id)alias accounts:(id)accounts;
-(void)deactivateAccounts;
-(void)activateAccounts;
-(void)activateAccountsExcludingAccounts:(id)accounts;
-(void)clearAllCaches;
-(void)_clearAccountCache;
-(id)loginForAccount:(id)account;
-(void)signoutAccount:(id)account;
-(void)_signOutAccount:(id)account delete:(BOOL)aDelete;
-(id)beginAccountSetupWithAccount:(id)account;
-(id)beginAccountSetupWithLogin:(id)login password:(id)password foundExisting:(BOOL*)existing;
-(id)beginAccountSetupWithLogin:(id)login authID:(id)anId authToken:(id)token regionInfo:(id)info foundExisting:(BOOL*)existing;
-(id)_createAccountWithLogin:(id)login foundExisting:(BOOL*)existing;
-(BOOL)__ensureSingleAppleIDAccountExistsWithLogin:(id)login;
-(id)accountWithLogin:(id)login;
-(id)firstAccount;
// declared property getter: -(id)accounts;
-(void)systemApplicationDidEnterBackground;
-(void)dealloc;
// declared property getter: -(id)serviceNames;
// declared property getter: -(id)firstService;
-(id)initWithServiceType:(int)serviceType;
-(id)init;
-(void)showSetupFaceTimeOverCellularAlertWithCompletion:(id)completion;
// declared property getter: -(id)failedAccounts;
-(id)activeAccounts;
// declared property getter: -(id)appleIDAccounts;
// declared property getter: -(id)phoneAccounts;
-(id)_predicatesWithFilter:(int)filter;
-(id)_accountsPassingTests:(id)tests message:(id)message;
-(id)accountsWithFilter:(int)filter;
-(id)accountsWithFilter:(int)filter message:(id)message;
-(void)_clearFilterCache;
-(id)__filter_signedInPredicate;
-(id)__filter_validatedProfilePredicate;
-(id)__filter_signInCompletePredicate;
-(id)__filter_validatedAliasPredicate;
-(id)__filter_failedAccountsPredicate;
-(id)__filter_inactiveAccountsPredicate;
-(id)__filter_activeAccountsPredicate;
-(id)__filter_phoneAccountPredicate;
-(id)__filter_appleIDAccountPredicate;
-(id)guessedDisplayAlias;
-(id)_guessedDisplayAliasFromAccounts:(id)accounts;
-(BOOL)_isValidCallerIDAlias:(id)alias forAccount:(id)account;
-(id)guessedAlias;
-(id)guessedAccountName;
-(void)stopRequiringWifi;
-(void)startRequiringWifi;
-(void)_stopWiFiAlertWatchTimer;
-(void)_startWiFiAlertWatchTimer;
-(void)_wifiAlertWatchTimerFired:(id)fired;
-(void)resetNetworkFirstRunAlert;
-(void)showNetworkFirstRunAlert;
-(void)showNetworkAlertIfNecessary;
-(void)showNetworkAlert;
-(void)_showNetworkAlertWithMessage:(id)message;
-(id)networkSettingsURLAllowingCellular:(BOOL)cellular;
-(BOOL)deviceCanTakeNetworkAction;
-(BOOL)deviceHasNetworkEnabled;
-(BOOL)deviceHasSaneNetworkConnection;
-(void)openURL:(id)url;
-(void)refreshSystemAccount;
// declared property getter: -(int)systemAccountType;
// declared property getter: -(id)systemAccount;
-(BOOL)hasSystemAccount;
-(void)__updateSystemAccount;
@end

