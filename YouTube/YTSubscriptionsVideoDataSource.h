/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTVideoDataSource.h"

@class NSString;

@interface YTSubscriptionsVideoDataSource : YTVideoDataSource {
	NSString* _subscriptionURL;
	BOOL _requiresAuth;
}
-(void)reloadData;
-(void)setSubscriptionURL:(id)url requiresAuthentication:(BOOL)authentication;
@end

