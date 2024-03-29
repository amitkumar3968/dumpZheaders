/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "StepByStepUIViewController.h"
#import "TableViewManagerDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"

@class AnimatedPickerView, NSArray, NSDictionary, RecommendationActionController, NSString, UIPopoverController, PoppablePickerViewController;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_DevicePicker : StepByStepUIViewController <UIPickerViewDataSource, UIPickerViewDelegate, TableViewManagerDelegate> {
	NSDictionary* _selectedDevice;
	NSDictionary* _sourceNetwork;
	NSDictionary* _sourceBase;
	NSDictionary* _targetBase;
	UIPopoverController* _popover;
	PoppablePickerViewController* _poppablePickerViewController;
	AnimatedPickerView* _networkPickerView;
	NSArray* sortedDevices;
	NSString* connectionMedium;
	RecommendationActionController* actionController;
	BOOL _showSingleBaseTopo;
}
@property(retain, nonatomic) RecommendationActionController* actionController;	// @synthesize
@property(assign, nonatomic) NSString* connectionMedium;	// @synthesize
@property(retain, nonatomic) NSArray* sortedDevices;	// @synthesize
// declared property setter: -(void)setActionController:(id)controller;
// declared property getter: -(id)actionController;
// declared property setter: -(void)setConnectionMedium:(id)medium;
// declared property getter: -(id)connectionMedium;
// declared property setter: -(void)setSortedDevices:(id)devices;
// declared property getter: -(id)sortedDevices;
-(BOOL)showMoreOptions;
-(void)updateSelections;
-(void)setupPickerTable;
-(void)touchInCellAtIndexPath:(id)indexPath;
-(id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;
-(int)pickerView:(id)view numberOfRowsInComponent:(int)component;
-(int)numberOfComponentsInPickerView:(id)pickerView;
-(id)valueForItemOfType:(id)type atTypeIndex:(unsigned)typeIndex inCellWithTag:(int)tag;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end

