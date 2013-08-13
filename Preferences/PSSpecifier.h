/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSDictionary, NSString, NSMutableDictionary;

@interface PSSpecifier : XXUnknownSuperclass {
	id target;
	SEL getter;
	SEL setter;
	SEL action;
	SEL cancel;
	Class detailControllerClass;
	int cellType;
	Class editPaneClass;
	int keyboardType;
	int autoCapsType;
	int autoCorrectionType;
	int textFieldType;
	NSString* _name;
	NSArray* _values;
	NSDictionary* _titleDict;
	NSDictionary* _shortTitleDict;
	id _userInfo;
	NSMutableDictionary* _properties;
@private
	SEL _confirmationAction;
	SEL _confirmationCancelAction;
	SEL _buttonAction;
	SEL _controllerLoadAction;
	BOOL _showContentString;
}
@property(assign, nonatomic) BOOL showContentString;	// @synthesize=_showContentString
@property(assign, nonatomic) SEL controllerLoadAction;	// @synthesize=_controllerLoadAction
@property(assign, nonatomic) SEL buttonAction;	// @synthesize=_buttonAction
@property(assign, nonatomic) SEL confirmationCancelAction;	// @synthesize=_confirmationCancelAction
@property(assign, nonatomic) SEL confirmationAction;	// @synthesize=_confirmationAction
@property(assign, nonatomic) Class editPaneClass;	// @synthesize
@property(assign, nonatomic) int cellType;	// @synthesize
@property(assign, nonatomic) Class detailControllerClass;	// @synthesize
@property(assign, nonatomic) id target;	// @synthesize
@property(retain, nonatomic) NSString* identifier;
@property(retain, nonatomic) NSDictionary* shortTitleDictionary;	// @synthesize=_shortTitleDict
@property(retain, nonatomic) NSDictionary* titleDictionary;	// @synthesize=_titleDict
@property(retain, nonatomic) id userInfo;	// @synthesize=_userInfo
@property(retain, nonatomic) NSString* name;	// @synthesize=_name
@property(retain, nonatomic) NSArray* values;	// @synthesize=_values
@property(retain) NSMutableDictionary* properties;	// converted property
+(int)keyboardTypeForString:(id)string;
+(int)autoCapsTypeForString:(id)string;
+(int)autoCorrectionTypeForNumber:(id)number;
+(id)emptyGroupSpecifier;
+(id)groupSpecifierWithName:(id)name;
+(id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;
// declared property setter: -(void)setShowContentString:(BOOL)string;
// declared property getter: -(BOOL)showContentString;
// declared property setter: -(void)setControllerLoadAction:(SEL)action;
// declared property getter: -(SEL)controllerLoadAction;
// declared property setter: -(void)setButtonAction:(SEL)action;
// declared property getter: -(SEL)buttonAction;
// declared property setter: -(void)setConfirmationCancelAction:(SEL)action;
// declared property getter: -(SEL)confirmationCancelAction;
// declared property setter: -(void)setConfirmationAction:(SEL)action;
// declared property getter: -(SEL)confirmationAction;
// declared property setter: -(void)setName:(id)name;
// declared property getter: -(id)name;
// declared property setter: -(void)setValues:(id)values;
// declared property getter: -(id)values;
// declared property setter: -(void)setShortTitleDictionary:(id)dictionary;
// declared property setter: -(void)setTitleDictionary:(id)dictionary;
// declared property getter: -(id)titleDictionary;
// declared property setter: -(void)setUserInfo:(id)info;
// declared property getter: -(id)userInfo;
// declared property setter: -(void)setEditPaneClass:(Class)aClass;
// declared property getter: -(Class)editPaneClass;
// declared property setter: -(void)setCellType:(int)type;
// declared property getter: -(int)cellType;
// declared property setter: -(void)setDetailControllerClass:(Class)aClass;
// declared property getter: -(Class)detailControllerClass;
// declared property setter: -(void)setTarget:(id)target;
// declared property getter: -(id)target;
-(int)titleCompare:(id)compare;
-(void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;
// declared property getter: -(id)identifier;
// declared property setter: -(void)setIdentifier:(id)identifier;
// declared property getter: -(id)shortTitleDictionary;
-(id)description;
-(void)dealloc;
-(void)setupIconImageWithPath:(id)path;
-(void)setupIconImageWithBundle:(id)bundle;
-(void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;
-(void)setValues:(id)values titles:(id)titles;
-(void)loadValuesAndTitlesFromDataSource;
// converted property getter: -(id)properties;
// converted property setter: -(void)setProperties:(id)properties;
-(void)removePropertyForKey:(id)key;
-(void)setProperty:(id)property forKey:(id)key;
-(id)propertyForKey:(id)key;
-(id)init;
@end

