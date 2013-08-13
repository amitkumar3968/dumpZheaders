/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFError, NSThread, MailboxUid, NSString, InvocationQueue;

@interface ActivityMonitor : XXUnknownSuperclass {
	NSThread* _runningThread;
	NSString* _taskName;
	NSString* _displayName;
	NSString* _statusMessage;
	NSString* _descriptionString;
	InvocationQueue* _ourQueue;
	double _percentDone;
	unsigned _key : 13;
	unsigned _canCancel : 1;
	unsigned _shouldCancel : 1;
	unsigned _isActive : 1;
	unsigned _changeCount : 8;
	id _delegate;
	id _target;
	MFError* _error;
	unsigned _expectedLength;
	unsigned _maxCount;
	unsigned _currentCount;
	double _currentItemPercentDone;
	unsigned _supportsPerItemProgress : 1;
	MailboxUid* _mailbox;
	double _lastTime;
	double _startTime;
	unsigned _gotNewMessagesState;
}
@property(retain) MailboxUid* mailbox;	// @synthesize=_mailbox
@property(retain) MFError* error;	// converted property
@property(assign) BOOL shouldCancel;	// converted property
@property(assign) BOOL canBeCancelled;	// converted property
@property(retain) id primaryTarget;	// converted property
@property(retain) id activityTarget;	// converted property
@property(retain) NSString* displayName;	// converted property
@property(retain) NSString* taskName;	// converted property
@property(assign) unsigned expectedLength;	// converted property
@property(assign) double percentDone;	// converted property
@property(retain) NSString* statusMessage;	// converted property
@property(assign) unsigned gotNewMessagesState;	// converted property
+(void)destroyMonitor;
+(id)currentMonitor;
// declared property setter: -(void)setMailbox:(id)mailbox;
// declared property getter: -(id)mailbox;
// converted property setter: -(void)setError:(id)error;
// converted property getter: -(id)error;
-(void)setPercentDone:(double)done withKey:(int)key;
-(void)setStatusMessage:(id)message withKey:(int)key;
-(void)setStatusMessage:(id)message percentDone:(double)done withKey:(int)key;
-(void)relinquishExclusiveAccessKey:(int)key;
-(int)acquireExclusiveAccessKey;
-(void)setInvocationQueue:(id)queue;
-(void)cancel;
// converted property setter: -(void)setShouldCancel:(BOOL)cancel;
// converted property getter: -(BOOL)shouldCancel;
// converted property setter: -(void)setCanBeCancelled:(BOOL)cancelled;
// converted property getter: -(BOOL)canBeCancelled;
-(id)activityTargets;
// converted property getter: -(id)primaryTarget;
// converted property setter: -(void)setPrimaryTarget:(id)target;
-(void)removeActivityTarget:(id)target;
-(void)addActivityTargets:(id)targets;
-(void)addActivityTarget:(id)target;
-(BOOL)_lockedAddActivityTarget:(id)target;
// converted property getter: -(id)activityTarget;
// converted property setter: -(void)setActivityTarget:(id)target;
// converted property setter: -(void)setDisplayName:(id)name;
-(void)setDisplayName:(id)name maxCount:(unsigned)count;
// converted property getter: -(id)displayName;
// converted property setter: -(void)setTaskName:(id)name;
// converted property getter: -(id)taskName;
-(id)description;
// converted property getter: -(unsigned)expectedLength;
// converted property setter: -(void)setExpectedLength:(unsigned)length;
// converted property getter: -(double)percentDone;
// converted property setter: -(void)setPercentDone:(double)done;
// converted property getter: -(id)statusMessage;
-(void)setStatusMessage:(id)message percentDone:(double)done;
// converted property setter: -(void)setStatusMessage:(id)message;
-(int)changeCount;
// converted property getter: -(unsigned)gotNewMessagesState;
// converted property setter: -(void)setGotNewMessagesState:(unsigned)state;
-(void)reset;
-(void)setPercentDoneOfCurrentItem:(double)currentItem;
-(id)_ntsThrottledUserInfoDict;
-(void)setSupportsPerItemProgress:(BOOL)progress;
-(void)setCurrentCount:(unsigned)count;
-(void)setMaxCount:(unsigned)count;
-(void)_didChange;
-(void)postDidChangeWithUserInfo:(id)post;
-(id)userInfoForNotification;
-(void)notifyConnectionEstablished;
-(void)finishedActivity:(id)activity;
-(void)startActivity;
-(void)postActivityFinished:(id)finished;
-(void)postActivityStarting;
-(void)cancelMessage;
-(void)setDelegate:(id)delegate;
-(BOOL)isActive;
-(void)dealloc;
-(id)init;
@end

