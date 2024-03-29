/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */



@protocol TableViewManagerDelegate
@optional
-(BOOL)shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(void)commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(id)valueForItemOfType:(id)type atTypeIndex:(unsigned)typeIndex inCellAtIndexPath:(id)indexPath;
-(id)valueForItemOfType:(id)type atTypeIndex:(unsigned)typeIndex inCellWithTag:(int)tag;
-(void)buttonTouchedInCellAtIndexPath:(id)indexPath forButtonIndex:(unsigned)buttonIndex;
-(void)textFieldDidEndEditingAtIndexPath:(id)textField;
-(void)textFieldDidChangeAtIndexPath:(id)textField;
-(void)segmentedControlTouchedInCellAtIndexPath:(id)indexPath forSegmentedControlIndex:(int)segmentedControlIndex selectedSegment:(int)segment;
-(void)switchTouchedInCellAtIndexPath:(id)indexPath forSwitchIndex:(unsigned)switchIndex isOn:(BOOL)on;
-(BOOL)shouldChangeTextField:(id)field atIndexPath:(id)indexPath forTextIndex:(unsigned)textIndex toString:(id)string;
-(BOOL)shouldHandleReturnForTextField:(id)textField atIndexPath:(id)indexPath forTextIndex:(unsigned)textIndex;
-(void)accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
-(void)touchInCellAtIndexPath:(id)indexPath;
@end

