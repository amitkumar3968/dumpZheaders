/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "AssistantUIDelegate.h"
#import "AssistantCallbackUIDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "AssistantSubcontrollerHelper.h"
#import "TableViewManagerDelegate.h"
#import "AUUITableViewController.h"

@class UIView, AssistantUIController, UILabel, UIActivityIndicatorView, UIBarButtonItem, UITableView, UIAlertView, NSDictionary, UITextField, NSString, AssistantCallbackController, AssistantSubUIViewController, TextLinkButton, NetTopoMiniStaticLayout;
@protocol AssistantViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AssistantUIViewController : AUUITableViewController <AssistantUIDelegate, AssistantCallbackUIDelegate, UINavigationControllerDelegate, AssistantSubcontrollerHelper, TableViewManagerDelegate> {
	UIView* spinnerWithStatusBelowView;
	UILabel* spinnerWithStatusBelowLabel;
	UIActivityIndicatorView* spinnerWithStatusBelowSpinner;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
	UIView* spinnerWithStatusAdjacentView;
	UIActivityIndicatorView* spinnerWithStatusAdjacentSpinner;
	UILabel* spinnerWithStatusAdjacentLabel;
	UIView* topoContainerView;
	UIView* topoView;
	NetTopoMiniStaticLayout* topoLayout;
	TextLinkButton* textLinkButton;
	UIBarButtonItem* nextButton;
	UIBarButtonItem* cancelButton;
	UIView* _tableHeaderContainerView;
	UITableView* _mainTableView;
	id _assistantDelegate;
	NSString* _macAddress;
	NSDictionary* _scanInfoRecord;
	NSDictionary* _recommendationParamDict;
	AssistantUIController* _assistantUIController;
	AssistantCallbackController* _controllerContext;
	int _controllerContextSelector;
	UIAlertView* passwordAlertView;
	UIAlertView* askUserQuestionAlertView;
@private
	UIAlertView* connectionVerificationAlertView;
@protected
	int askUserContext;
	int letMeChooseButtonIndex;
	int restoreButtonIndex;
	int recommendationButtonIndex;
	BOOL iPadIdiom;
	BOOL showingPasswordsAtEnd;
	int _currentConnectionStatusStep;
	AssistantSubUIViewController* _currentSubController;
	BOOL _goingBack;
	unsigned _selectedActionTag;
	UITextField* currentTextField;
	NSDictionary* recommendationParamDict;
	AssistantSubUIViewController* currentSubController;
}
@property(retain, nonatomic) UITextField* currentTextField;	// @synthesize
@property(copy, nonatomic) NSString* macAddress;	// @synthesize=_macAddress
@property(retain, nonatomic) NetTopoMiniStaticLayout* topoLayout;	// @synthesize
@property(assign, nonatomic) BOOL iPadIdiom;	// @synthesize
@property(assign, nonatomic) int recommendationButtonIndex;	// @synthesize
@property(assign, nonatomic) int restoreButtonIndex;	// @synthesize
@property(assign, nonatomic) int letMeChooseButtonIndex;	// @synthesize
@property(retain, nonatomic) UIAlertView* askUserQuestionAlertView;	// @synthesize
@property(retain, nonatomic) UIAlertView* passwordAlertView;	// @synthesize
@property(retain, nonatomic) UITableView* mainTableView;	// @synthesize=_mainTableView
@property(retain, nonatomic) UIView* tableHeaderContainerView;	// @synthesize=_tableHeaderContainerView
@property(retain, nonatomic) UIBarButtonItem* cancelButton;	// @synthesize
@property(retain, nonatomic) UIBarButtonItem* nextButton;	// @synthesize
@property(retain, nonatomic) UILabel* spinnerWithStatusAdjacentLabel;	// @synthesize
@property(retain, nonatomic) TextLinkButton* textLinkButton;	// @synthesize
@property(retain, nonatomic) UILabel* justTextLabel;	// @synthesize
@property(retain, nonatomic) UIView* justTextContainerView;	// @synthesize
@property(retain, nonatomic) UIActivityIndicatorView* spinnerWithStatusAdjacentSpinner;	// @synthesize
@property(retain, nonatomic) AssistantSubUIViewController* currentSubController;	// @synthesize
@property(copy, nonatomic) NSDictionary* recommendationParamDict;	// @synthesize
@property(copy, nonatomic) NSDictionary* scanInfoRecord;	// @synthesize=_scanInfoRecord
@property(retain, nonatomic) AssistantCallbackController* _controllerContext;	// @synthesize
@property(retain, nonatomic) AssistantUIController* _assistantUIController;	// @synthesize
@property(assign, nonatomic) id<AssistantViewControllerDelegate> assistantDelegate;	// @synthesize=_assistantDelegate
+(void)readjustSubviewsInContainer:(id)container;
// declared property setter: -(void)setMacAddress:(id)address;
// declared property getter: -(id)macAddress;
// declared property setter: -(void)setIPadIdiom:(BOOL)idiom;
// declared property getter: -(BOOL)iPadIdiom;
// declared property setter: -(void)setRecommendationButtonIndex:(int)index;
// declared property getter: -(int)recommendationButtonIndex;
// declared property setter: -(void)setRestoreButtonIndex:(int)index;
// declared property getter: -(int)restoreButtonIndex;
// declared property setter: -(void)setLetMeChooseButtonIndex:(int)index;
// declared property getter: -(int)letMeChooseButtonIndex;
// declared property setter: -(void)setAskUserQuestionAlertView:(id)view;
// declared property getter: -(id)askUserQuestionAlertView;
// declared property setter: -(void)setPasswordAlertView:(id)view;
// declared property getter: -(id)passwordAlertView;
// declared property setter: -(void)setMainTableView:(id)view;
// declared property getter: -(id)mainTableView;
// declared property setter: -(void)setTableHeaderContainerView:(id)view;
// declared property getter: -(id)tableHeaderContainerView;
// declared property setter: -(void)setTopoLayout:(id)layout;
// declared property getter: -(id)topoLayout;
// declared property setter: -(void)setCurrentSubController:(id)controller;
// declared property getter: -(id)currentSubController;
// declared property setter: -(void)setCurrentTextField:(id)field;
// declared property getter: -(id)currentTextField;
// declared property setter: -(void)setCancelButton:(id)button;
// declared property getter: -(id)cancelButton;
// declared property setter: -(void)setNextButton:(id)button;
// declared property getter: -(id)nextButton;
// declared property setter: -(void)setSpinnerWithStatusAdjacentLabel:(id)statusAdjacentLabel;
// declared property getter: -(id)spinnerWithStatusAdjacentLabel;
// declared property setter: -(void)setTextLinkButton:(id)button;
// declared property getter: -(id)textLinkButton;
// declared property setter: -(void)setJustTextLabel:(id)label;
// declared property getter: -(id)justTextLabel;
// declared property setter: -(void)setJustTextContainerView:(id)view;
// declared property getter: -(id)justTextContainerView;
// declared property setter: -(void)setSpinnerWithStatusAdjacentSpinner:(id)statusAdjacentSpinner;
// declared property getter: -(id)spinnerWithStatusAdjacentSpinner;
// declared property setter: -(void)setRecommendationParamDict:(id)dict;
// declared property getter: -(id)recommendationParamDict;
// declared property setter: -(void)setScanInfoRecord:(id)record;
// declared property getter: -(id)scanInfoRecord;
// declared property setter: -(void)set_controllerContext:(id)context;
// declared property getter: -(id)_controllerContext;
// declared property setter: -(void)set_assistantUIController:(id)controller;
// declared property getter: -(id)_assistantUIController;
// declared property setter: -(void)setAssistantDelegate:(id)delegate;
// declared property getter: -(id)assistantDelegate;
-(void)presentWaitingForWANViewWithContinueText:(BOOL)continueText;
-(id)modifyTopoUIInLayer:(id)layer withLayout:(id)layout targetProductID:(id)anId targetDeviceKind:(id)kind targetName:(id)name targetWiFiName:(id)name6 sourceProductID:(id)anId7 sourceDeviceKind:(id)kind8 sourceName:(id)name9 sourceWiFiName:(id)name10 connectionType:(id)type;
-(void)displayViewListInView:(id)view newSubviews:(id)subviews withAnimation:(BOOL)animation;
-(id)valueForItemOfType:(id)type atTypeIndex:(unsigned)typeIndex inCellWithTag:(int)tag;
-(void)presentUIForSetupResult:(long)setupResult baseStationInfo:(id)info withPrompt:(id)prompt;
-(void)presentUIForSetupStatusWithRecommendationDict:(id)recommendationDict;
-(void)connectionVerificationSucceededForSelector:(int)selector;
-(void)presentUIForStepByStepResult:(long)stepByStepResult;
-(id)modifyTopoUIInLayer:(id)layer withLayout:(id)layout newLayout:(id)layout3;
-(void)presentUIForStepByStepNextStep:(int)stepByStepNextStep paramDict:(id)dict;
-(void)presentUIForRecommendationResult:(long)recommendationResult paramDict:(id)dict;
-(void)presentUIForRecommmendationTargetInfo:(id)recommmendationTargetInfo;
-(void)presentUIForRecommendationStatus;
-(void)doneWithAssistantResult:(long)assistantResult;
-(void)assistantUpdateProgress:(id)progress forState:(int)state;
-(void)touchInCellAtIndexPath:(id)indexPath;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)handleNextButton:(id)button;
-(void)handleCancelButton:(id)button;
-(void)handeImmediateCancel;
-(void)showTellUserToFixTheirInternetConnection;
-(void)showAskUserPluginAudioCablingForStatus:(long)status paramDict:(id)dict;
-(void)showAskUserSwapCablingForStatus:(long)status paramDict:(id)dict;
-(void)showTellUserToPlugInEthernetForStatus:(long)status paramDict:(id)dict;
-(void)showAskUserForPPPoECredentialsForStatus:(long)status paramDict:(id)dict;
-(void)showTellUserToResetBroadbandDeviceForStatus:(long)status paramDict:(id)dict;
-(void)playDoneSound;
-(long)callbackAskUserAQuestion:(int)question paramDict:(id)dict forController:(id)controller;
-(long)callbackAskUserForPassword:(int)password param:(id)param forController:(id)controller;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)baseStationConfigurationComplete:(id)complete;
-(void)readyToGuess;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)initializeServiesDone;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)keyboardReturnKeySetEnabled:(BOOL)enabled;
-(id)radioNameFromBaseStation:(id)baseStation;
-(void)replaceSubviewsInView:(id)view newSubviews:(id)subviews layoutOptions:(int)options withAnimation:(BOOL)animation;
-(void)handleCancelRequest:(BOOL)request;
-(void)setupCompleteShowPasswords:(BOOL)passwords;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(void)showUIForSetupStatus;
-(void)skipPluginAudioCabling;
-(void)continueWithSwapCabling;
-(void)continueWithPPPoESettings;
-(void)skipWANPort;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)confirmSkipWANPort;
-(void)pushViewController:(id)controller animated:(BOOL)animated;
-(void)popToRootViewControllerAnimated:(BOOL)rootViewControllerAnimated;
-(void)startSetup:(id)setup;
-(id)newStepByStepControllerForStep:(int)step;
@end

