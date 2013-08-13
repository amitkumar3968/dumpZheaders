/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MLMovieArtist : NSObject <NSCopying> {
@private
	NSMutableDictionary* _dictionary;
}
@property(copy, nonatomic) NSNumber* ITunesStoreIdentifier;
@property(copy, nonatomic) NSString* artistName;
-(void).cxx_destruct;
-(void)_setValueCopy:(id)copy forKey:(id)key;
-(void)_setValue:(id)value forKey:(id)key;
-(id)copyMovieArtistDictionary;
// declared property setter: -(void)setITunesStoreIdentifier:(id)identifier;
// declared property setter: -(void)setArtistName:(id)name;
// declared property getter: -(id)ITunesStoreIdentifier;
// declared property getter: -(id)artistName;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithMovieArtistDictionary:(id)movieArtistDictionary;
-(id)init;
@end
