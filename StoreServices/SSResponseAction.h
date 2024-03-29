/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSURL, SSDialog, NSString, SSAccount;

@interface SSResponseAction : XXUnknownSuperclass <NSCopying> {
@private
	SSAccount* _account;
	NSString* _actionType;
	NSString* _clientIdentifier;
	NSString* _creditsString;
	SSDialog* _dialog;
	NSString* _footerSection;
	NSURL* _url;
	int _urlBagType;
}
@property(readonly, assign, nonatomic) int URLBagType;	// @synthesize=_urlBagType
@property(readonly, assign, nonatomic) NSURL* URL;	// @synthesize=_url
@property(readonly, assign, nonatomic) NSString* footerSection;	// @synthesize=_footerSection
@property(readonly, assign, nonatomic) SSDialog* dialog;	// @synthesize=_dialog
@property(readonly, assign, nonatomic) NSString* creditsString;	// @synthesize=_creditsString
@property(readonly, assign, nonatomic) NSString* clientIdentifier;	// @synthesize=_clientIdentifier
@property(readonly, assign, nonatomic) SSAccount* account;	// @synthesize=_account
@property(readonly, assign, nonatomic) NSString* actionType;	// @synthesize=_actionType
+(id)_urlActionWithType:(id)type URL:(id)url;
+(id)_setCreditsActionWithCredits:(id)credits account:(id)account;
+(id)_setActiveAccountActionWithAccount:(id)account;
+(id)_selectFooterActionWithSection:(id)section;
+(id)_invalidateURLBagsAction;
+(id)_dialogActionWithDialog:(id)dialog;
+(id)_checkInAppQueueActionWithClientID:(id)clientID environment:(id)environment;
+(id)_actionWithActionType:(id)actionType;
// declared property getter: -(int)URLBagType;
// declared property getter: -(id)URL;
// declared property getter: -(id)footerSection;
// declared property getter: -(id)dialog;
// declared property getter: -(id)creditsString;
// declared property getter: -(id)clientIdentifier;
// declared property getter: -(id)actionType;
// declared property getter: -(id)account;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
@end

