/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISURLOperationDelegate.h"


@protocol ISStoreURLOperationDelegate <ISURLOperationDelegate>
@optional
-(BOOL)operation:(id)operation shouldSetStoreFrontID:(id)anId;
-(void)operation:(id)operation didAuthenticateWithDSID:(id)dsid;
@end

