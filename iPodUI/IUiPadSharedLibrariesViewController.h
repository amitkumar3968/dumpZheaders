/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import "iPodUI-Structs.h"
#import "IUiPodViewController.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, UITapGestureRecognizer, UITableView, UIAlertView, MPMediaLibrary;

@interface IUiPadSharedLibrariesViewController : IUiPodViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate> {
@private
	UITableView* _tableView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	MPMediaLibrary* _selectedLibrary;
	UIAlertView* _passwordAlertView;
	BOOL _promptForPasswordAgainAfterDismissal;
	CFDictionaryRef _portraitLibraryImageViews;
	CFDictionaryRef _landscapeLibraryImageViews;
	NSArray* _sharedLibraries;
}
+(BOOL)supportsViewControllerStyle:(int)style;
-(id)_imageViewForLibrary:(id)library frame:(CGRect)frame;
-(CGRect)_frameForLibraryImageViewAtColumn:(unsigned)column;
-(void)_mediaLibraryConnectionProgressDidChangeNotification:(id)_mediaLibraryConnectionProgress;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)loadView;
-(void)reloadData;
-(void)_updateConnectionProgressForCellAtIndexPath:(id)indexPath;
-(void)_selectLibrary:(id)library;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_showPasswordPromptForLibrary:(id)library;
-(void)_viewWasTapped:(id)tapped;
-(void)dealloc;
-(id)init;
@end
