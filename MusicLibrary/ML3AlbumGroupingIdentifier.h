/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ML3AlbumGroupingIdentifier : NSObject <NSCopying> {
@private
	long long _albumArtistPersisentID;
	NSData* _groupingKey;
	NSString* _feedURL;
	int _seasonNumber;
	BOOL _compilation;
}
@property(readonly, assign, nonatomic) BOOL compilation;	// @synthesize=_compilation
@property(readonly, assign, nonatomic) int seasonNumber;	// @synthesize=_seasonNumber
@property(readonly, assign, nonatomic) NSString* feedURL;	// @synthesize=_feedURL
@property(readonly, assign, nonatomic) NSData* groupingKey;	// @synthesize=_groupingKey
@property(readonly, assign, nonatomic) long long albumArtistPersisentID;	// @synthesize=_albumArtistPersisentID
// declared property getter: -(BOOL)compilation;
// declared property getter: -(int)seasonNumber;
// declared property getter: -(id)feedURL;
// declared property getter: -(id)groupingKey;
// declared property getter: -(long long)albumArtistPersisentID;
-(void).cxx_destruct;
-(id)copyWithZone:(NSZone*)zone;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)description;
-(id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID groupingKey:(id)key feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation;
-(id)initWithAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(int)number compilation:(BOOL)compilation inLibrary:(id)library;
@end
