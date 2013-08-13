/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSString;

@interface SAMPMediaItem : SAMPMediaEntity {
}
@property(assign, nonatomic) int trackNumber;
@property(copy, nonatomic) NSString* sortArtist;
@property(copy, nonatomic) NSString* sortAlbum;
@property(assign, nonatomic) int rating;
@property(assign, nonatomic) int playCount;
@property(copy, nonatomic) NSString* genre;
@property(copy, nonatomic) NSString* composer;
@property(copy, nonatomic) NSString* artist;
@property(copy, nonatomic) NSString* album;
+(id)mediaItemWithDictionary:(id)dictionary context:(id)context;
+(id)mediaItem;
-(void)updateUsingSet:(id)set add:(id)add remove:(id)remove;
// declared property setter: -(void)setTrackNumber:(int)number;
// declared property getter: -(int)trackNumber;
// declared property setter: -(void)setSortArtist:(id)artist;
// declared property getter: -(id)sortArtist;
// declared property setter: -(void)setSortAlbum:(id)album;
// declared property getter: -(id)sortAlbum;
// declared property setter: -(void)setRating:(int)rating;
// declared property getter: -(int)rating;
// declared property setter: -(void)setPlayCount:(int)count;
// declared property getter: -(int)playCount;
// declared property setter: -(void)setGenre:(id)genre;
// declared property getter: -(id)genre;
// declared property setter: -(void)setComposer:(id)composer;
// declared property getter: -(id)composer;
// declared property setter: -(void)setArtist:(id)artist;
// declared property getter: -(id)artist;
// declared property setter: -(void)setAlbum:(id)album;
// declared property getter: -(id)album;
-(id)encodedClassName;
-(id)groupIdentifier;
@end
