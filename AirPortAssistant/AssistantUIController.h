/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "SetupConnectionDelegate.h"
#import "StepByStepUIDelegate.h"
#import "AssistantUIDelegateResult.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AutoGuessUIDelegate.h"
#import "SetupUIDelegate.h"

@class AUSetupController, NSMutableDictionary, StepByStepController, NSDictionary, AutoGuessController, NSString;

__attribute__((visibility("hidden")))
@interface AssistantUIController : XXUnknownSuperclass <AutoGuessUIDelegate, SetupUIDelegate, SetupConnectionDelegate, StepByStepUIDelegate, AssistantUIDelegateResult> {
	id _delegate;
	NSMutableDictionary* _setupOptions;
	int _state;
	AutoGuessController* _autoGuessController;
	AUSetupController* _setupController;
	StepByStepController* _stepByStepController;
	NSDictionary* _guessCompleteDict;
	int _connectionStatusSelectorAwaitingResolution;
	NSDictionary* _lastAssociatedInfo;
	NSDictionary* _lastAutoguessInstrumentation;
	NSDictionary* _lastSetupInstrumentation;
	NSDictionary* _lastStepByStepInstrumentation;
	NSString* _targetMACAddress;
	NSDictionary* _targetScanRecord;
	NSDictionary* _targetBrowseRecord;
}
@property(retain) NSDictionary* lastStepByStepInstrumentation;	// @synthesize=_lastStepByStepInstrumentation
@property(retain) NSDictionary* lastSetupInstrumentation;	// @synthesize=_lastSetupInstrumentation
@property(retain) NSDictionary* lastAutoguessInstrumentation;	// @synthesize=_lastAutoguessInstrumentation
@property(retain) NSDictionary* lastAssociatedInfo;	// @synthesize=_lastAssociatedInfo
@property(readonly, assign) int connectionStatusSelectorAwaitingResolution;	// @synthesize=_connectionStatusSelectorAwaitingResolution
@property(retain) NSDictionary* guessCompleteDict;	// @synthesize=_guessCompleteDict
@property(retain) StepByStepController* stepByStepController;	// @synthesize=_stepByStepController
@property(retain) AUSetupController* setupController;	// @synthesize=_setupController
@property(retain) AutoGuessController* autoGuessController;	// @synthesize=_autoGuessController
@property(readonly, assign) int state;	// @synthesize=_state
@property(retain) NSMutableDictionary* setupOptions;	// @synthesize=_setupOptions
@property(assign) id delegate;	// @synthesize=_delegate
@property(retain) NSDictionary* targetBrowseRecord;	// @synthesize=_targetBrowseRecord
@property(retain) NSDictionary* targetScanRecord;	// @synthesize=_targetScanRecord
@property(retain) NSString* targetMACAddress;	// @synthesize=_targetMACAddress
// declared property setter: -(void)setLastStepByStepInstrumentation:(id)instrumentation;
// declared property getter: -(id)lastStepByStepInstrumentation;
// declared property setter: -(void)setLastSetupInstrumentation:(id)instrumentation;
// declared property getter: -(id)lastSetupInstrumentation;
// declared property setter: -(void)setLastAutoguessInstrumentation:(id)instrumentation;
// declared property getter: -(id)lastAutoguessInstrumentation;
// declared property setter: -(void)setLastAssociatedInfo:(id)info;
// declared property getter: -(id)lastAssociatedInfo;
// declared property getter: -(int)connectionStatusSelectorAwaitingResolution;
// declared property setter: -(void)setGuessCompleteDict:(id)dict;
// declared property getter: -(id)guessCompleteDict;
// declared property setter: -(void)setStepByStepController:(id)controller;
// declared property getter: -(id)stepByStepController;
// declared property setter: -(void)setSetupController:(id)controller;
// declared property getter: -(id)setupController;
// declared property setter: -(void)setAutoGuessController:(id)controller;
// declared property getter: -(id)autoGuessController;
// declared property getter: -(int)state;
// declared property setter: -(void)setSetupOptions:(id)options;
// declared property getter: -(id)setupOptions;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
// declared property setter: -(void)setTargetBrowseRecord:(id)record;
// declared property getter: -(id)targetBrowseRecord;
// declared property setter: -(void)setTargetScanRecord:(id)record;
// declared property getter: -(id)targetScanRecord;
// declared property setter: -(void)setTargetMACAddress:(id)address;
// declared property getter: -(id)targetMACAddress;
-(void)stepByStepNextStep:(int)step paramDict:(id)dict;
-(void)stepByStepCompleteWithResult:(long)result paramDict:(id)dict;
-(void)stepByStepProgressUpdated:(int)updated status:(long)status paramString:(id)string;
-(void)setupConnectionStatusUpdated:(int)updated status:(long)status paramDict:(id)dict forController:(id)controller;
-(void)setupCompleteWithResult:(long)result baseStationInfo:(id)info forController:(id)controller;
-(void)setupProgressUpdated:(int)updated status:(long)status paramDict:(id)dict forController:(id)controller;
-(void)autoguessProgressComplete:(id)complete;
-(void)autoguessProgressUpdated:(int)updated paramString:(id)string;
-(void)autoguessUpdateTargetInfo:(id)info;
-(void)presentUIForStepByStepNextStepResult:(long)stepByStepNextStepResult withOptions:(id)options;
-(void)presentUIForConnectionVerificationResult:(long)connectionVerificationResult withOptions:(id)options;
-(id)modifyTopoUIInLayer:(id)layer withLayout:(id)layout targetProductID:(id)anId targetDeviceKind:(id)kind targetName:(id)name targetWiFiName:(id)name6 sourceProductID:(id)anId7 sourceDeviceKind:(id)kind8 sourceName:(id)name9 sourceWiFiName:(id)name10 connectionType:(id)type;
-(long)doneWithAssistant:(BOOL)assistant;
-(long)cancelCurrentAssistantState:(BOOL)state;
-(long)startRestoreFromAutoGuessRecommendation;
-(long)startStepByStepFromAutoGuessRecommendation;
-(long)startSetupFromAutoGuessRecommendation:(id)autoGuessRecommendation;
-(long)startAutoGuess;
-(void)dealloc;
-(id)init;
-(void)restoreNetworkDone:(id)done;
-(long)startRestoreNetwork:(id)network;
-(BOOL)restoreNetworkIfNeeded:(BOOL)needed disassociateIfNeeded:(BOOL)needed2 forceQuit:(BOOL)quit;
-(id)setupPromptStringForBaseInfo:(id)baseInfo andResult:(long)result;
-(void)handlePresentAutoGuessUIFromAutoGuessCompleteResult:(BOOL)autoGuessCompleteResult;
-(void)presentUIForConnectionVerification:(int)connectionVerification status:(long)status paramDict:(id)dict;
-(long)startSetupFromStepByStepResults:(id)stepByStepResults;
@end
