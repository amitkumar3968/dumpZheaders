/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface AccountSettingsUIAlertConfirmationOptions : XXUnknownSuperclass {
	int _selectedButtonIndex;
	int _keepDataButtonIndex;
	int _mergeDataButtonIndex;
	int _deleteDataButtonIndex;
	int _cancelButtonIndex;
	NSString* _dataclass;
	BOOL _enableAction;
	NSString* _tag;
}
@property(retain) NSString* tag;	// converted property
+(BOOL)isNonDestructiveAction:(id)action;
+(BOOL)isEnableAction:(id)action;
// converted property setter: -(void)setTag:(id)tag;
// converted property getter: -(id)tag;
-(void)setupButtonIndexesForActions:(id)actions;
-(id)userAction;
-(BOOL)userChoiceWillDeleteData;
-(BOOL)userCancelled;
-(void)setIsEnableAction:(BOOL)action;
-(void)setDataclass:(id)dataclass;
-(void)dealloc;
-(id)init;
@end

