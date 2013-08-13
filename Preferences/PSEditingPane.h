/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PSSpecifier, UIView;

@interface PSEditingPane : XXUnknownSuperclass {
	PSSpecifier* _specifier;
	id _delegate;
	unsigned _requiresKeyboard : 1;
	CGRect _pinstripeRect;
	UIView* _pinstripeView;
}
@property(assign, nonatomic) CGRect pinstripeRect;
@property(retain) id preferenceValue;	// converted property
@property(retain) id preferenceSpecifier;	// converted property
+(float)preferredHeight;
+(id)defaultBackgroundColor;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)changed;
-(BOOL)handlesDoneButton;
-(void)doneEditing;
-(void)editMode;
-(void)addNewValue;
-(void)viewDidBecomeVisible;
-(BOOL)wantsNewButton;
-(id)specifierLabel;
// declared property getter: -(CGRect)pinstripeRect;
// declared property setter: -(void)setPinstripeRect:(CGRect)rect;
-(BOOL)requiresKeyboard;
// converted property getter: -(id)preferenceValue;
// converted property setter: -(void)setPreferenceValue:(id)value;
// converted property getter: -(id)preferenceSpecifier;
// converted property setter: -(void)setPreferenceSpecifier:(id)specifier;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(CGRect)contentRect;
-(id)initWithFrame:(CGRect)frame;
@end

