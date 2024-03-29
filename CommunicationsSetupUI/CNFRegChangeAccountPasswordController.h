/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import "CNFRegAuthorizedAccountWebViewController.h"

@class NSString;
@protocol CNFRegChangeAccountPasswordDelegate;

@interface CNFRegChangeAccountPasswordController : CNFRegAuthorizedAccountWebViewController {
@private
	id<CNFRegChangeAccountPasswordDelegate> _delegate;
	NSString* _appleID;
}
@property(assign, nonatomic) id<CNFRegChangeAccountPasswordDelegate> delegate;	// @synthesize=_delegate
@property(copy, nonatomic) NSString* appleID;	// @synthesize=_appleID
// declared property setter: -(void)setAppleID:(id)anId;
// declared property getter: -(id)appleID;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)completeHandoffWithStatus:(int)status appleID:(id)anId authID:(id)anId3 authToken:(id)token;
-(void)cancelTapped;
-(id)overrideURLForURL:(id)url;
-(id)logName;
-(id)bagKey;
-(BOOL)canSendURLRequest:(id)request;
-(void)setHeadersForRequest:(id)request;
-(void)dealloc;
-(id)initWithRegController:(id)regController appleID:(id)anId;
@end

