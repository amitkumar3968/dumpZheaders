/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import "ML3TrackInsertionDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSData;

@interface HSDAAPML3TrackDataSource : XXUnknownSuperclass <ML3TrackInsertionDataSource> {
	XXStruct_rf32zC _parsedValues[256];
	int _parsedValuesPropertyIndex[105];
@private
	NSData* _itemsResponseData;
	NSArray* _rawItems;
	int _idx;
}
-(void)getCurrentTrackIntegrity:(sqlite3_context*)integrity;
-(void)getCurrentTrackCopyright:(sqlite3_context*)copyright;
-(double)currentTrackDateSkipped;
-(int)currentTrackBPM;
-(int)currentTrackAudioTrackIndex;
-(int)currentTrackAudioTrackID;
-(int)currentTrackAudioLanguage;
-(void)getCurrentTrackPodcastExternalGUID:(sqlite3_context*)guid;
-(void)getCurrentTrackStoreURL:(sqlite3_context*)url;
-(void)getCurrentTrackStoreFlavor:(sqlite3_context*)flavor;
-(void)getCurrentTrackStoreLinkID:(sqlite3_context*)anId;
-(int)currentTrackSubtitleTrackIndex;
-(int)currentTrackSubtitleTrackID;
-(int)currentTrackSubtitleLanguage;
-(long long)currentTrackStoreStoreKind;
-(long long)currentTrackStoreRedownloadedStatus;
-(long long)currentTrackStoreMatchedStatus;
-(long long)currentTrackPendingGeniusChecksum;
-(long long)currentTrackGlobalID;
-(long long)currentTrackGeniusChecksum;
-(void)getCurrentTrackDownloadIdentifier:(sqlite3_context*)identifier;
-(long long)currentTrackAudioFormat;
-(double)currentTrackRelativeVolume;
-(BOOL)currentTrackIsTemporaryCloudDownload;
-(BOOL)currentTrackIsOTAPurchased;
-(BOOL)currentTrackIsDemoRental;
-(BOOL)currentTrackIsAudibleAudioBook;
-(BOOL)currentTrackIsAlarm;
-(BOOL)currentTrackHasSubtitles;
-(BOOL)currentTrackHasAlternateAudio;
-(BOOL)currentTrackChosenByAutoFill;
-(void)getCurrentTrackCollectionDescription:(sqlite3_context*)description;
-(BOOL)currentTrackIsHidden;
-(long long)currentTrackStoreXID;
-(double)currentTrackDateLastUsed;
-(BOOL)currentTrackHasBeenPlayed;
-(void)getCurrentTrackLyrics:(sqlite3_context*)lyrics;
-(id)currentTrackFilePath;
-(void)getCurrentTrackArtworkCacheID:(sqlite3_context*)anId;
-(id)currentTrackArtworkCacheID;
-(void)getCurrentTrackFormat:(sqlite3_context*)format;
-(void)getCurrentTrackDataURL:(sqlite3_context*)url;
-(void)getCurrentTrackTitle:(sqlite3_context*)title;
-(void)getCurrentTrackSortTitle:(sqlite3_context*)title;
-(void)getCurrentTrackNetworkName:(sqlite3_context*)name;
-(void)getCurrentTrackMovieInfo:(sqlite3_context*)info;
-(void)getCurrentTrackLongDescription:(sqlite3_context*)description;
-(void)getCurrentTrackGrouping:(sqlite3_context*)grouping;
-(id)currentTrackFeedURL;
-(void)getCurrentTrackFeedURL:(sqlite3_context*)url;
-(void)getCurrentTrackExtendedContentRating:(sqlite3_context*)rating;
-(void)getCurrentTrackEQPreset:(sqlite3_context*)preset;
-(int)currentTrackEpisodeSortID;
-(void)getCurrentTrackEpisodeID:(sqlite3_context*)anId;
-(void)getCurrentTrackDescription:(sqlite3_context*)description;
-(void)getCurrentTrackComment:(sqlite3_context*)comment;
-(void)getCurrentTrackChapterData:(sqlite3_context*)data;
-(void)getCurrentTrackCategory:(sqlite3_context*)category;
-(id)currentTrackTitle;
-(id)currentTrackSortTitle;
-(id)currentTrackSortSeriesName;
-(id)currentTrackSortComposer;
-(id)currentTrackSortArtist;
-(id)currentTrackSortAlbumArtist;
-(id)currentTrackSortAlbum;
-(id)currentTrackSeriesName;
-(void)getCurrentTrackRedownloadActionParameters:(sqlite3_context*)parameters;
-(id)currentTrackKind;
-(id)currentTrackGenre;
-(id)currentTrackFormat;
-(id)currentTrackDataURL;
-(id)currentTrackComposer;
-(id)currentTrackComment;
-(id)currentTrackCategory;
-(id)currentTrackArtist;
-(id)currentTrackAlbumArtist;
-(id)currentTrackAlbum;
-(id)currentTrackSeasonNumber;
-(int)currentTrackYear;
-(int)currentTrackVideoQuality;
-(int)currentTrackUserAlbumRating;
-(int)currentTrackUserRating;
-(int)currentTrackTrackNumber;
-(int)currentTrackTrackCount;
-(double)currentTrackTotalTimeMS;
-(double)currentTrackStopTimeMS;
-(double)currentTrackStartTimeMS;
-(int)currentTrackSkipCountUser;
-(int)currentTrackSkipCountRecent;
-(int)currentTrackSampleRate;
-(int)currentTrackPlayCountUser;
-(int)currentTrackPlayCountRecent;
-(int)currentTrackKeyID2;
-(int)currentTrackJaliscoToken;
-(int)currentTrackIsDownloading;
-(int)currentTrackDiscNumber;
-(int)currentTrackDiscCount;
-(BOOL)currentTrackIsUserDisabled;
-(int)currentTrackDataKind;
-(int)currentTrackContentRating;
-(int)currentTrackCodecSubtype;
-(int)currentTrackCodecType;
-(int)currentTrackBitRate;
-(double)currentTrackStoreDatePurchased;
-(double)currentTrackRentalStartDate;
-(double)currentTrackRentalPlaybackStartDate;
-(double)currentTrackDateReleased;
-(double)currentTrackDatePlayed;
-(double)currentTrackDateModified;
-(double)currentTrackDateAdded;
-(id)currentTrackChapterData;
-(unsigned long)currentTrackMediaType;
-(long long)currentTrackVolumeNormalization;
-(long long)currentTrackTotalSize;
-(long long)currentTrackStoreStorefrontID;
-(long long)currentTrackPurchaseHistoryID;
-(long long)currentTrackStoreSagaID;
-(long long)currentTrackStorePlaylistID;
-(long long)currentTrackStoreKeyVersions;
-(long long)currentTrackStoreKeyPlatformID;
-(long long)currentTrackStoreKeyID;
-(long long)currentTrackStoreItemID;
-(long long)currentTrackStoreGenreID;
-(long long)currentTrackStoreComposerID;
-(long long)currentTrackStoreArtistID;
-(long long)currentTrackStoreAccountID;
-(void)getCurrentTrackStoreArtworkURL:(sqlite3_context*)url;
-(long long)currentTrackRentalPlaybackDuration;
-(long long)currentTrackRentalDuration;
-(long long)currentTrackRatingLevel;
-(long long)currentTrackPersistentID;
-(long long)currentTrackGaplessLastFrameResync;
-(long long)currentTrackGaplessHeuristicInfo;
-(long long)currentTrackGaplessEncodingDrain;
-(long long)currentTrackGaplessEncodingDelay;
-(long long)currentTrackDurationInSamples;
-(double)currentTrackBookmarkTimeMS;
-(BOOL)currentTrackRememberBookmarkTime;
-(BOOL)currentTrackIsRental;
-(BOOL)currentTrackIsPodcast;
-(BOOL)currentTrackIsITunesU;
-(BOOL)currentTrackIsCompilation;
-(BOOL)currentTrackHasVideo;
-(BOOL)currentTrackHasChapterData;
-(BOOL)currentTrackExcludeFromShuffle;
-(void)seekToStart;
-(BOOL)hasNextTrack;
-(void)seekToNextTrack;
-(BOOL)mediaKindIsSupported:(unsigned)supported;
-(void)_parseCurrentItem;
-(void)postParseCurrentTrack;
-(void)dealloc;
-(id)initWithItemsResponseData:(id)itemsResponseData;
@end

