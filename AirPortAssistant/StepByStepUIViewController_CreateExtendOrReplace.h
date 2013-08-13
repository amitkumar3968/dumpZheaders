/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import "StepByStepUIViewController.h"
#import "TableViewManagerDelegate.h"

@class UIView, UILabel;

__attribute__((visibility("hidden")))
@interface StepByStepUIViewController_CreateExtendOrReplace : StepByStepUIViewController <TableViewManagerDelegate> {
	UIView* tableHeaderContainerView;
	UIView* justTextContainerView;
	UILabel* justTextLabel;
}
@property(retain, nonatomic) UILabel* justTextLabel;	// @synthesize
@property(retain, nonatomic) UIView* justTextContainerView;	// @synthesize
@property(retain, nonatomic) UIView* tableHeaderContainerView;	// @synthesize
// declared property setter: -(void)setJustTextLabel:(id)label;
// declared property getter: -(id)justTextLabel;
// declared property setter: -(void)setJustTextContainerView:(id)view;
// declared property getter: -(id)justTextContainerView;
// declared property setter: -(void)setTableHeaderContainerView:(id)view;
// declared property getter: -(id)tableHeaderContainerView;
-(void)touchInCellAtIndexPath:(id)indexPath;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)initUI;
-(void)setupTable;
-(void)setupInitialTableHeaderConfiguration;
-(void)dealloc;
-(void)handleSelectorChoiceWithTag:(unsigned)tag;
@end
