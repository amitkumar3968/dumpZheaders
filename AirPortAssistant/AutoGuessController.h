/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "AssistantCallbackController.h"
#import "AirPortAssistant-Structs.h"

@class NSString, NSTimer, NSMutableDictionary, NSArray, NSDictionary, NSThread;
@protocol AutoGuessUIDelegate;

__attribute__((visibility("hidden")))
@interface AutoGuessController : AssistantCallbackController {
	int _lastAutoGuessUISelector;
@private
	int _currentAutoGuessUISelector;
	NSString* _lastParamString;
@protected
	NSString* _currentParamString;
	BOOL _onShortTimer;
	ACPBrowserSessionRef _acpBrowserSession;
	AutoGuessContext* _guessContext;
	NSDictionary* _lastInstrumentation;
	NSTimer* _browseReadyTimer;
	int _wifiScanStatus;
	int _bonjourBrowseStatus;
	BOOL _autoJoinState;
	BOOL _updatedTargetInfo;
	NSString* _targetMACAddress;
	NSDictionary* _targetScanRecord;
	NSDictionary* _targetBrowseRecord;
	NSMutableDictionary* _browsedBases;
	NSArray* _wifiScanInfos;
	id _delegate;
	NSDictionary* unconfiguredDeviceThatIsBeingSetup;
	NSDictionary* _guessCompletionDict;
	NSThread* _autoGuessThread;
}
@property(retain, nonatomic) NSDictionary* guessCompletionDict;	// @synthesize=_guessCompletionDict
@property(retain) NSDictionary* lastInstrumentation;	// @synthesize=_lastInstrumentation
@property(retain) NSDictionary* unconfiguredDeviceThatIsBeingSetup;	// @synthesize
@property(retain) NSString* currentParamString;	// @synthesize=_currentParamString
@property(retain) NSString* lastParamString;	// @synthesize=_lastParamString
@property(assign) int currentAutoGuessUISelector;	// @synthesize=_currentAutoGuessUISelector
@property(assign) int lastAutoGuessUISelector;	// @synthesize=_lastAutoGuessUISelector
@property(assign) id<AutoGuessUIDelegate> delegate;	// @synthesize=_delegate
@property(retain) NSArray* _wifiScanInfos;	// @synthesize
@property(retain) NSMutableDictionary* _browsedBases;	// @synthesize
@property(retain) NSDictionary* targetBrowseRecord;	// @synthesize=_targetBrowseRecord
@property(retain) NSDictionary* targetScanRecord;	// @synthesize=_targetScanRecord
@property(retain) NSString* targetMACAddress;	// @synthesize=_targetMACAddress
@property(retain) NSTimer* _browseReadyTimer;	// @synthesize
@property(assign) int bonjourBrowseStatus;	// converted property
@property(readonly, assign) int wifiScanStatus;	// converted property
+(id)fullAutoGuessDictionaryFromCompletionDict:(id)completionDict;
+(id)restoreRecommendationDictionaryFromCompletionDict:(id)completionDict;
+(id)primaryRecommendationDictionaryFromCompletionDict:(id)completionDict;
+(id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)completionDict;
+(id)recommendationStringFromCompletionDict:(id)completionDict;
+(id)restoreOfferFromCompletionDict:(id)completionDict;
+(BOOL)shouldShowPasswordUIForRecommendation:(id)recommendation;
+(id)unconfiguredBaseStationFromRecommendation:(id)recommendation;
+(id)unconfiguredBaseStationFromGuessCompleteDict:(id)guessCompleteDict;
+(id)sourceNetworkFromRecommendation:(id)recommendation;
+(id)sourceBaseStationFromRecommendation:(id)recommendation;
+(id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)autoGuessResults;
+(id)shortProductNameFromBaseStationDictionary:(id)baseStationDictionary;
+(BOOL)isRestoreAnOptionForTheRecommendations:(id)theRecommendations;
+(id)recommendationToActionChoice:(id)actionChoice;
// declared property setter: -(void)setGuessCompletionDict:(id)dict;
// declared property getter: -(id)guessCompletionDict;
// declared property setter: -(void)setLastInstrumentation:(id)instrumentation;
// declared property getter: -(id)lastInstrumentation;
// declared property setter: -(void)setUnconfiguredDeviceThatIsBeingSetup:(id)setup;
// declared property getter: -(id)unconfiguredDeviceThatIsBeingSetup;
// declared property setter: -(void)setCurrentAutoGuessUISelector:(int)selector;
// declared property getter: -(int)currentAutoGuessUISelector;
// declared property setter: -(void)setLastAutoGuessUISelector:(int)selector;
// declared property getter: -(int)lastAutoGuessUISelector;
// declared property setter: -(void)setCurrentParamString:(id)string;
// declared property getter: -(id)currentParamString;
// declared property setter: -(void)setLastParamString:(id)string;
// declared property getter: -(id)lastParamString;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)set_wifiScanInfos:(id)infos;
// declared property getter: -(id)_wifiScanInfos;
// declared property setter: -(void)set_browsedBases:(id)bases;
// declared property getter: -(id)_browsedBases;
// declared property setter: -(void)set_browseReadyTimer:(id)timer;
// declared property getter: -(id)_browseReadyTimer;
// declared property setter: -(void)setTargetBrowseRecord:(id)record;
// declared property getter: -(id)targetBrowseRecord;
// declared property setter: -(void)setTargetScanRecord:(id)record;
// declared property getter: -(id)targetScanRecord;
// declared property setter: -(void)setTargetMACAddress:(id)address;
// declared property getter: -(id)targetMACAddress;
-(long)cancelAutoGuess;
-(long)runAutoGuessWithWifiScanInfos:(id)wifiScanInfos;
-(long)startWiFiScanner;
-(void)dealloc;
-(id)init;
-(void)runAutoGuessThread:(id)thread;
-(void)bonjourTXTRemoved:(id)removed;
-(void)bonjourTXTUpdated:(id)updated;
-(void)browseReadyTimerCallback:(id)callback;
-(void)stopWiFiScanner;
-(void)cancelWiFiScanner;
-(void)wirelessScanDone:(id)done;
-(void)stopBonjourBrowser;
-(void)cancelBonjourBrowser;
-(long)startBonjourBrowser;
// converted property getter: -(int)bonjourBrowseStatus;
// converted property setter: -(void)setBonjourBrowseStatus:(int)status;
// converted property getter: -(int)wifiScanStatus;
-(void)setWiFiScanStatus:(int)status;
-(BOOL)okToSwitchToShortBonjourTimeout:(id)shortBonjourTimeout;
-(id)targetInfo;
-(void)autoGuessEngineComplete;
-(void)startAutoGuessIfReady;
-(long)startAutoGuessForUnconfiguredMACAddress:(id)unconfiguredMACAddress withWifiScanInfos:(id)wifiScanInfos;
-(id)createCompletionDictFromAutoGuessResults:(id)autoGuessResults;
@end

