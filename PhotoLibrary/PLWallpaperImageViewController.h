/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UIActionSheetDelegate.h"
#import "PhotoLibrary-Structs.h"
#import "PLUIEditImageViewController.h"

@class PLWallpaperNavigationItem, NSArray, UIActionSheet, NSString;

@interface PLWallpaperImageViewController : PLUIEditImageViewController <UIActionSheetDelegate> {
	PLWallpaperNavigationItem* _navItem;
	int _wallpaperMode;
	NSArray* _navigationToolbarItems;
	BOOL _saveWallpaperData;
	NSString* _wallpaperTitle;
	UIActionSheet* _wallpaperOptionsSheet;
	unsigned _didSetImageMode : 1;
}
@property(copy, nonatomic) NSString* wallpaperTitle;	// @synthesize=_wallpaperTitle
@property(assign, nonatomic) BOOL saveWallpaperData;	// @synthesize=_saveWallpaperData
+(void)setWallpaperFromArgs:(id)args;
+(id)argsForSavingWallpaperFromTile:(id)tile mode:(int)mode;
// declared property setter: -(void)setWallpaperTitle:(id)title;
// declared property getter: -(id)wallpaperTitle;
// declared property setter: -(void)setSaveWallpaperData:(BOOL)data;
// declared property getter: -(BOOL)saveWallpaperData;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)cropOverlayWasCancelled:(id)cancelled;
-(void)cropOverlayWasOKed:(id)ked;
-(void)_setImageAsHomeScreenAndLockScreenClicked:(id)clicked;
-(void)_setImageAsLockScreenClicked:(id)clicked;
-(void)_setImageAsHomeScreenClicked:(id)clicked;
-(void)_cropWallpaperFinished:(id)finished;
-(void)_backgroundCropWallpaper:(id)wallpaper;
-(void)_savePhoto;
-(void)_updateTitles;
-(BOOL)uiipc_useTelephonyUI;
-(void)_adjustScrollViewGeometry;
-(int)imageFormat;
-(BOOL)clientIsWallpaper;
-(void)setupNavigationItem;
-(void)loadView;
-(unsigned)_tileAutoresizingMask;
-(unsigned)_contentAutoresizingMask;
-(CGRect)_viewFrame;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)image;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
-(id)navigationItem;
-(int)cropOverlayMode;
-(id)initWithUIImage:(id)uiimage;
-(id)init;
@end

