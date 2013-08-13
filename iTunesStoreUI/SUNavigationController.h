/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptNativeObject.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SUClientInterface, SUSection;

@interface SUNavigationController : XXUnknownSuperclass <SUScriptNativeObject> {
@private
	BOOL _canBeWeakScriptReference;
	SUClientInterface* _clientInterface;
	BOOL _loading;
	SUSection* _section;
}
@property(retain, nonatomic) SUSection* section;	// @synthesize=_section
@property(retain, nonatomic) SUClientInterface* clientInterface;	// @synthesize=_clientInterface
@property(assign, nonatomic, getter=isLoading) BOOL loading;	// @synthesize=_loading
// declared property setter: -(void)setSection:(id)section;
// declared property getter: -(id)section;
// declared property getter: -(BOOL)isLoading;
// declared property getter: -(id)clientInterface;
-(void)_loadingDidChangeNotification:(id)_loading;
-(BOOL)clearsWeakScriptReferences;
-(BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(id)_sectionForViewController:(id)viewController;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)setViewControllers:(id)controllers;
-(void)setToolbarHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setToolbarHidden:(BOOL)hidden;
-(void)setParentViewController:(id)controller;
// declared property setter: -(void)setClientInterface:(id)interface;
-(void)restoreArchivableContext:(id)context;
-(void)removeChildViewController:(id)controller;
-(id)moreListSelectedImage;
-(id)moreListImage;
-(id)description;
-(id)copyScriptViewController;
-(id)copyArchivableContext;
-(void)addChildViewController:(id)controller;
// declared property setter: -(void)setLoading:(BOOL)loading;
-(void)dealloc;
-(id)initWithSection:(id)section rootViewController:(id)controller;
-(id)initWithSection:(id)section;
-(id)initWithRootViewController:(id)rootViewController;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

