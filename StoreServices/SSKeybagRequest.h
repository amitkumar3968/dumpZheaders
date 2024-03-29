/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSNumber;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {
@private
	NSNumber* _accountID;
	int _options;
}
@property(assign) int keybagOptions;	// @synthesize=_options
@property(readonly, assign) NSNumber* accountID;	// @synthesize=_accountID
// declared property getter: -(id)accountID;
-(id)initWithXPCEncoding:(id)xpcencoding;
-(id)copyXPCEncoding;
-(void)startWithCompletionBlock:(id)completionBlock;
// declared property setter: -(void)setKeybagOptions:(int)options;
// declared property getter: -(int)keybagOptions;
-(id)accountIdentifier;
-(void)dealloc;
-(id)initWithAccountIdentifier:(id)accountIdentifier;
@end

