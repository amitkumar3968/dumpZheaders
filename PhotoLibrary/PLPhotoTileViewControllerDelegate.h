/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLPhotoTileViewControllerDelegate <NSObject>
-(void)photoTileViewControllerDidEndGesture:(id)photoTileViewController;
-(void)photoTileViewControllerWillBeginGesture:(id)photoTileViewController;
-(void)photoTileViewControllerDoubleTap:(id)tap;
-(void)photoTileViewControllerSingleTap:(id)tap;
-(void)photoTileViewControllerCancelImageRequests:(id)requests;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)image;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)image;
-(void)photoTileViewController:(id)controller didDisappear:(BOOL)disappear;
-(void)photoTileViewController:(id)controller didAppear:(BOOL)appear;
-(void)photoTileViewController:(id)controller willAppear:(BOOL)appear;
@optional
-(void)photoTileViewController:(id)controller commentsControllerWillBeginScrolling:(id)commentsController;
-(void)photoTileViewController:(id)controller didExitEditModeInCommentsController:(id)commentsController;
-(void)photoTileViewController:(id)controller willEnterEditModeInCommentsController:(id)commentsController;
-(void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)photoTileViewController;
-(BOOL)isPhotoTileParentPageControllerAnimating:(id)animating;
-(BOOL)photoTileViewControllerAllowsEditing:(id)editing;
@end
