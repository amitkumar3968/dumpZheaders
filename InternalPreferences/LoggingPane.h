/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/InternalPreferences.framework/InternalPreferences
 */

#import "MFMailComposeViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "InternalPreferences-Structs.h"

@class UITextView, NSLock, NSTimer, NSString, PSRootController, MFMailComposeViewController;

@interface LoggingPane : XXUnknownSuperclass <MFMailComposeViewControllerDelegate> {
	UITextView* _textView;
	BOOL _threadRunning;
	BOOL _timeout;
	BOOL _fileError;
	BOOL _dontScroll;
	NSLock* _lock;
	NSTimer* _timer;
	NSString* _output;
	PSRootController* _rootController;
	MFMailComposeViewController* _mailComposeController;
	int _sendingEmailCount;
}
+(id)systemVersionDescription;
-(void)saveLogFile;
-(void)setPreferenceSpecifier:(id)specifier;
-(void)startTimer;
-(id)initWithFrame:(CGRect)frame;
-(void)stopTimer;
-(void)dealloc;
-(BOOL)handlesDoneButton;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)emailButtonClicked;
-(void)_finished:(id)finished;
-(void)_pipeThread:(id)thread;
-(void)_aslQuery:(id)query;
-(void)_run;
-(void)_updateText:(id)text;
-(void)_showAlertForFailedCommand:(id)failedCommand;
@end
