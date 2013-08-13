/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFMailDelivery.h"

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery {
	DAMailAccount* _DAMailAccount;
	NSString* _folderId;
	NSString* _accountId;
	NSString* _repliedMessageId;
	NSString* _forwardedMessageId;
	NSString* _repliedLongId;
	NSString* _forwardedLongId;
}
-(int)deliverSynchronously;
-(id)newMessageWriter;
-(void)setDAMailAccount:(id)account;
-(void)dealloc;
-(id)initWithHeaders:(id)headers HTML:(id)html plainTextAlternative:(id)alternative other:(id)other charsets:(id)charsets;
-(id)initWithHeaders:(id)headers mixedContent:(id)content textPartsAreHTML:(BOOL)html;
@end

