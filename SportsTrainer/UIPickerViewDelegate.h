/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

#import "NSObject.h"


@protocol UIPickerViewDelegate <NSObject>
@optional
-(void)pickerView:(id)view didSelectRow:(int)row inComponent:(int)component;
-(id)pickerView:(id)view viewForRow:(int)row forComponent:(int)component reusingView:(id)view4;
-(id)pickerView:(id)view attributedTitleForRow:(int)row forComponent:(int)component;
-(id)pickerView:(id)view titleForRow:(int)row forComponent:(int)component;
-(float)pickerView:(id)view rowHeightForComponent:(int)component;
-(float)pickerView:(id)view widthForComponent:(int)component;
@end
