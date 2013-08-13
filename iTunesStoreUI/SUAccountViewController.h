/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "iTunesStoreUI-Structs.h"
#import "SUStorePageViewController.h"

@class NSString, SUMescalSession;

@interface SUAccountViewController : SUStorePageViewController {
	BOOL _failed;
	int _style;
@private
	SUMescalSession* _mescalSession;
	int _mescalState;
	NSString* _primingSignature;
}
@property(readonly, assign, nonatomic, getter=_mescalSession) SUMescalSession* _mescalSession;	// @synthesize
@property(assign, nonatomic) int style;	// @synthesize=_style
+(id)_latestAccountViewController;
// declared property getter: -(int)style;
// declared property getter: -(id)_mescalSession;
-(void)_mescalDidOpenWithSession:(id)_mescal error:(id)error;
-(id)_bagKeyForStyle:(int)style;
-(id)_authenticationQueryParametersForStyle:(int)style;
-(void)_closeMescalSession;
-(void)viewDidDisappear:(BOOL)view;
-(id)newViewControllerForPage:(id)page ofType:(int)type returningError:(id*)error;
-(id)newFetchOperation;
-(void)handleFailureWithError:(id)error;
-(void)enqueueFetchOperation;
// declared property setter: -(void)setStyle:(int)style;
-(void)dealloc;
-(id)init;
@end

