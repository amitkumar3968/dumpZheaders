/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AccountRefreshProtocol.h"

@class NSString;

@interface DADConnectionForRefreshProtocol : XXUnknownSuperclass <AccountRefreshProtocol> {
	NSString* _accountIdentifier;
}
+(id)accountToRefreshForBasicAccount:(id)basicAccount;
-(BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;
-(BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;
-(BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;
-(void)dealloc;
-(id)_initWithBasicAccount:(id)basicAccount;
@end

