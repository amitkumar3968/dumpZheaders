/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "NSObject.h"


@protocol ACDOAuthSignerProtocol <NSObject>
-(void)setClientBundleID:(id)anId withHandler:(id)handler;
-(void)signURLRequest:(id)request withAccount:(id)account applicationID:(id)anId timestamp:(id)timestamp handler:(id)handler;
-(void)signURLRequest:(id)request withAccount:(id)account callingPID:(id)pid timestamp:(id)timestamp handler:(id)handler;
-(void)setShouldIncludeAppIdInRequest:(id)includeAppIdInRequest;
@end

