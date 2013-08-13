/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

@interface SUNavigationMenu : XXUnknownSuperclass <NSCopying> {
@private
	NSString* _cancelTitle;
	NSString* _closedTitle;
	int _initialSelectedIndex;
	int _location;
	NSArray* _menuItems;
	NSArray* _navigationButtons;
	NSString* _openTitle;
}
@property(readonly, assign, nonatomic) NSString* openTitle;	// @synthesize=_openTitle
@property(readonly, assign, nonatomic) NSArray* navigationButtons;	// @synthesize=_navigationButtons
@property(readonly, assign, nonatomic) NSArray* menuItems;	// @synthesize=_menuItems
@property(assign, nonatomic) int location;	// @synthesize=_location
@property(readonly, assign, nonatomic) int initialSelectedIndex;	// @synthesize=_initialSelectedIndex
@property(readonly, assign, nonatomic) NSString* closedTitle;	// @synthesize=_closedTitle
@property(readonly, assign, nonatomic) NSString* cancelTitle;	// @synthesize=_cancelTitle
// declared property getter: -(id)openTitle;
// declared property getter: -(id)navigationButtons;
// declared property getter: -(id)menuItems;
// declared property setter: -(void)setLocation:(int)location;
// declared property getter: -(int)location;
// declared property getter: -(int)initialSelectedIndex;
// declared property getter: -(id)closedTitle;
// declared property getter: -(id)cancelTitle;
-(id)_newNavigationButtonsFromArray:(id)array;
-(id)_newMenuItemsFromArray:(id)array;
-(int)_locationForString:(id)string;
-(void)_loadFromDictionary:(id)dictionary;
-(id)navigationButtonForLocation:(id)location;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithDictionary:(id)dictionary;
-(id)init;
@end

