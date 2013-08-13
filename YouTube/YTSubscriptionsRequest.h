/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTXMLHTTPRequest.h"

@class NSMutableArray;

@interface YTSubscriptionsRequest : YTXMLHTTPRequest {
	id _delegate;
	NSMutableArray* _subscriptions;
	int _mode;
	int _startIndex;
	int _totalResults;
	int _resultsPerPage;
}
+(id)URLForSubscription:(id)subscription;
+(BOOL)isSubscription:(id)subscription channelOfUser:(id)user;
+(id)displayStringForSubscription:(id)subscription;
+(unsigned)resultsPerRequest;
-(void)setDelegate:(id)delegate;
-(void)failWithError:(id)error;
-(void)subscribeToUser:(id)user;
-(void)createPlaylistNamed:(id)named;
-(void)requestPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results searchTerm:(id)term;
-(void)requestUserPlaylistsFromIndex:(unsigned)index maxResults:(unsigned)results;
-(void)requestUserSubscriptionsFromIndex:(unsigned)index maxResults:(unsigned)results;
-(void)_doRequestWithURL:(id)url;
-(void)didAuthenticate:(id)authenticate;
-(void)didParseData;
-(int)parseData:(id)data;
-(void)dealloc;
-(id)init;
@end

