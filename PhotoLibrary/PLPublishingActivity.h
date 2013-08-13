/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "UIAlertViewDelegate.h"
#import "PLActivity.h"

@class PLPublishingAgent, UIViewController;
@protocol PLPublishingActivityDelegate;

@interface PLPublishingActivity : PLActivity <UIAlertViewDelegate> {
	id<PLPublishingActivityDelegate> _delegate;
@private
	UIViewController* _referenceViewController;
	PLPublishingAgent* _currentAgent;
	double _startTime;
	double _endTime;
}
@property(assign, nonatomic) id<PLPublishingActivityDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)editVideoViewControllerDidCancel:(id)editVideoViewController;
-(void)editVideoViewController:(id)controller didTrimVideoWithOptions:(id)options;
-(void)_showTrimViewController;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)_publishingAgentDidCancel:(id)_publishingAgent;
-(void)_publishingAgentDidStartPublishing:(id)_publishingAgent;
-(void)_handleCompletionWithStatus:(int)status;
-(void)_showVideoTooLongAlert;
-(void)_showPublishingSheetInViewController:(id)viewController remakeAfterPublish:(BOOL)publish;
-(void)videoEditWasCancelled;
-(void)publishWithVideoViewStartTime:(double)videoViewStartTime andEndTime:(double)time;
-(id)currentPublishingAgent;
-(void)publishOverReferenceViewController:(id)controller;
-(void)prepareWithActivityItems:(id)activityItems;
-(id)publishingBundle;
-(BOOL)_canPerformWithSuppliedActivityItems:(id)suppliedActivityItems;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initForMode:(int)mode interfaceIdiom:(int)idiom;
-(void)dealloc;
@end

