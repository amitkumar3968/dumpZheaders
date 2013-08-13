/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLCommentsViewControllerDelegate <NSObject>
@optional
-(void)commentsControllerWillBeginScrolling:(id)commentsController;
-(void)commentsControllerDidDisplayUnreadComment:(id)commentsController;
-(void)commentsControllerDidExitEditMode:(id)commentsController;
-(void)commentsControllerWillEnterEditMode:(id)commentsController;
-(void)commentsControllerInactiveAreaWasTapped:(id)tapped;
@end

