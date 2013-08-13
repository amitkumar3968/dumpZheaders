/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PSViewController, NSMutableArray, NSArray;

@interface AccountSettingsUIPluginLoader : XXUnknownSuperclass {
	PSViewController* _parentController;
	NSMutableArray* _bundles;
	BOOL _includeNonAccountBundles;
}
@property(readonly, assign) NSArray* plugins;
-(void)invalidatePluginParentController;
-(id)pluginsWithCommonsSpecifiers;
-(id)pluginsWithLazilyLoadedCommonSpecifiers;
-(id)pluginsWithEagerlyLoadedCommonSpecifiers;
-(id)_pluginsWithCommonSpecifierMode:(int)commonSpecifierMode;
-(id)orderedPluginsForAdd;
-(id)pluginsForAccountTypes:(id)accountTypes;
// declared property getter: -(id)plugins;
-(void)dealloc;
-(id)initWithParentController:(id)parentController includeNonAccountBundles:(BOOL)bundles;
-(void)_addBundleWithName:(id)name commonSpecifierMode:(int)mode accountTypes:(id)types;
@end

