/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTFeedRequest.h"


@interface YTSearchRequest : YTFeedRequest {
}
+(id)_formatFilter;
+(id)feedCountryCode;
+(unsigned)videosPerRequest;
-(BOOL)receivedValidResponse:(id)response;
-(void)searchForVideosFromWatchLaterPlaylistStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForMyVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForFavoriteVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForVideosByAuthor:(id)videosByAuthor startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForVideosRelatedToVideo:(id)video startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForRecentVideosStartingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForStandardFeedVideosOfType:(id)type startIndex:(unsigned)index maxResults:(unsigned)results timeQualifier:(id)qualifier withDelegate:(id)delegate;
-(void)searchForVideosWithFeedURLBase:(id)feedURLBase startingAtIndex:(unsigned)index maxResults:(unsigned)results withTimeQualifier:(id)timeQualifier withFormatFilter:(BOOL)formatFilter authenticationRequired:(BOOL)required withDelegate:(id)delegate;
-(void)searchForVideosMatchingString:(id)videosMatchingString startingAtIndex:(unsigned)index maxResults:(unsigned)results withDelegate:(id)delegate;
-(void)searchForVideosWithIDs:(id)ids withDelegate:(id)delegate;
-(void)searchForVideoWithID:(id)anId withDelegate:(id)delegate;
-(void)failWithError:(id)error;
-(void)didParseData;
@end

