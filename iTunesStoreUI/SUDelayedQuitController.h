/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface SUDelayedQuitController : XXUnknownSuperclass {
	int _delayTerminateCount;
	NSMutableArray* _longLivedViewControllers;
}
+(void)endDelayingTerminate;
+(void)beginDelayingTerminate;
+(BOOL)isDelayingTerminate;
+(id)checkedInViewControllerOfClass:(Class)aClass;
+(BOOL)viewControllerIsLongLived:(id)lived;
+(void)checkOutLongLivedViewController:(id)controller;
+(void)checkInLongLivedViewController:(id)longLivedViewController;
+(id)sharedInstance;
-(BOOL)_viewControllerIsLongLived:(id)lived;
-(BOOL)_isDelayingTerminate;
-(void)_endDelayingTerminate;
-(id)_checkedInViewControllerOfClass:(Class)aClass;
-(void)_checkOutLongLivedViewController:(id)controller;
-(void)_checkInLongLivedViewController:(id)longLivedViewController;
-(void)_beginDelayingTerminate;
-(void)dealloc;
@end

