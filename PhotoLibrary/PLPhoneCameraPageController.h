/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "PhotoLibrary-Structs.h"
#import "PLCameraPageController.h"
#import "UINavigationControllerDelegate.h"
#import "PLPhotoBrowserControllerDelegate.h"


@interface PLPhoneCameraPageController : PLCameraPageController <UINavigationControllerDelegate, PLPhotoBrowserControllerDelegate> {
}
-(id)_doneButtonItem;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)dismissCameraAlbumAnimated:(BOOL)animated forSuspension:(BOOL)suspension;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_transformViewToPortrait:(id)portrait fromOrientation:(int)orientation;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(id)_pagingPhotoBrowser;
-(void)prepareAlbumNavigationControllerForReuse:(id)reuse;
-(id)newAlbumNavigationController;
-(void)dealloc;
@end

