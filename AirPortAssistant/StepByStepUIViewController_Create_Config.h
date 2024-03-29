/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "UIPopoverControllerDelegate.h"
#import "StepByStepUIViewController.h"
#import "TableViewManagerDelegate.h"

@class NSString, UIView, UILabel, RecommendationActionController;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_Create_Config : StepByStepUIViewController <TableViewManagerDelegate, UIPopoverControllerDelegate> {
	NSString* _wifiName;
	NSString* _personalizedBaseName;
	NSString* _basePassword;
	NSString* _basePasswordVerify;
	NSString* _wifiPassword;
	NSString* _wifiPasswordVerify;
	NSString* _diskPassword;
	NSString* _diskPasswordVerify;
	UIView* tableHeaderContainerView;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
	BOOL useSinglePassword;
	BOOL hasDisk;
	BOOL useDifferentDiskPassword;
	RecommendationActionController* actionController;
}
@property(retain, nonatomic) RecommendationActionController* actionController;	// @synthesize
@property(assign, nonatomic) BOOL useDifferentDiskPassword;	// @synthesize
@property(assign, nonatomic) BOOL hasDisk;	// @synthesize
@property(assign, nonatomic) BOOL useSinglePassword;	// @synthesize
@property(copy, nonatomic) NSString* diskPasswordVerify;	// @synthesize=_diskPasswordVerify
@property(copy, nonatomic) NSString* diskPassword;	// @synthesize=_diskPassword
@property(copy, nonatomic) NSString* wifiPasswordVerify;	// @synthesize=_wifiPasswordVerify
@property(copy, nonatomic) NSString* wifiPassword;	// @synthesize=_wifiPassword
@property(copy, nonatomic) NSString* basePasswordVerify;	// @synthesize=_basePasswordVerify
@property(copy, nonatomic) NSString* basePassword;	// @synthesize=_basePassword
@property(retain, nonatomic) UILabel* justTextLabel;	// @synthesize
@property(retain, nonatomic) UIView* justTextContainerView;	// @synthesize
@property(retain, nonatomic) UIView* tableHeaderContainerView;	// @synthesize
@property(copy, nonatomic) NSString* personalizedBaseName;	// @synthesize=_personalizedBaseName
@property(copy, nonatomic) NSString* wifiName;	// @synthesize=_wifiName
// declared property setter: -(void)setActionController:(id)controller;
// declared property getter: -(id)actionController;
// declared property setter: -(void)setUseDifferentDiskPassword:(BOOL)password;
// declared property getter: -(BOOL)useDifferentDiskPassword;
// declared property setter: -(void)setHasDisk:(BOOL)disk;
// declared property getter: -(BOOL)hasDisk;
// declared property setter: -(void)setDiskPasswordVerify:(id)verify;
// declared property getter: -(id)diskPasswordVerify;
// declared property setter: -(void)setDiskPassword:(id)password;
// declared property getter: -(id)diskPassword;
// declared property setter: -(void)setWifiPasswordVerify:(id)verify;
// declared property getter: -(id)wifiPasswordVerify;
// declared property setter: -(void)setWifiPassword:(id)password;
// declared property getter: -(id)wifiPassword;
// declared property setter: -(void)setBasePasswordVerify:(id)verify;
// declared property getter: -(id)basePasswordVerify;
// declared property setter: -(void)setBasePassword:(id)password;
// declared property getter: -(id)basePassword;
// declared property setter: -(void)setUseSinglePassword:(BOOL)password;
// declared property getter: -(BOOL)useSinglePassword;
// declared property setter: -(void)setJustTextLabel:(id)label;
// declared property getter: -(id)justTextLabel;
// declared property setter: -(void)setJustTextContainerView:(id)view;
// declared property getter: -(id)justTextContainerView;
// declared property setter: -(void)setTableHeaderContainerView:(id)view;
// declared property getter: -(id)tableHeaderContainerView;
// declared property setter: -(void)setPersonalizedBaseName:(id)name;
// declared property getter: -(id)personalizedBaseName;
// declared property setter: -(void)setWifiName:(id)name;
// declared property getter: -(id)wifiName;
-(void)textFieldDidChangeAtIndexPath:(id)textField;
-(BOOL)shouldChangeTextField:(id)field atIndexPath:(id)indexPath forTextIndex:(unsigned)textIndex toString:(id)string;
-(void)switchTouchedInCellAtIndexPath:(id)indexPath forSwitchIndex:(unsigned)switchIndex isOn:(BOOL)on;
-(void)touchInCellAtIndexPath:(id)indexPath;
-(void)updateTableForMultiplePasswords;
-(void)updateTableForSinglePassword;
-(BOOL)validateAndSetValues;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)addDiskPasswordSection;
-(void)updateTable;
-(void)setupTable;
-(void)validateAndUpdateNextButton;
-(void)setupInitialTableHeaderConfiguration;
-(void)updateSinglePasswordSwitchExplanation:(BOOL)explanation;
@end

