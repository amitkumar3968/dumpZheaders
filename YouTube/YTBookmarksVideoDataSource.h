/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import "YTVideoDataSource.h"

@class NSMutableArray, YTSearchRequest;

@interface YTBookmarksVideoDataSource : YTVideoDataSource {
	NSMutableArray* _bookmarkedShortIDs;
	YTSearchRequest* _bookmarksSearchRequest;
	BOOL _lastReloadWasAccountsFavorites;
}
-(void)addVideo:(id)video;
-(void)searchRequest:(id)request foundBatchURL:(id)url;
-(void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;
-(BOOL)isLoading;
-(unsigned)maxVideosToSave;
-(void)reloadData;
-(void)_nextBatch;
-(void)dealloc;
-(id)init;
@end

