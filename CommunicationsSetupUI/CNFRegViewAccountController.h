/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import "CNFRegSecureAccountWebViewController.h"

@protocol CNFRegViewAccountControllerDelegate;

@interface CNFRegViewAccountController : CNFRegSecureAccountWebViewController {
@private
	id<CNFRegViewAccountControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<CNFRegViewAccountControllerDelegate> delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)completeHandoffWithStatus:(int)status appleID:(id)anId authID:(id)anId3 authToken:(id)token;
-(void)cancelTapped;
-(id)bagKey;
-(id)logName;
-(void)dealloc;
@end
