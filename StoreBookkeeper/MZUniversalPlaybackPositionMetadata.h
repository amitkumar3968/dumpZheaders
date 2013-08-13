/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreBookkeeper-Structs.h"

@class NSString;

@interface MZUniversalPlaybackPositionMetadata : XXUnknownSuperclass <NSCopying> {
@private
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	BOOL _hasBeenPlayed;
	unsigned _playCount;
}
@property(assign, nonatomic) unsigned playCount;	// @synthesize=_playCount
@property(assign, nonatomic) BOOL hasBeenPlayed;	// @synthesize=_hasBeenPlayed
@property(assign, nonatomic) double bookmarkTime;	// @synthesize=_bookmarkTime
@property(assign, nonatomic) double timestamp;	// @synthesize=_timestamp
@property(copy, nonatomic) NSString* itemIdentifier;	// @synthesize=_itemIdentifier
+(id)metadataWithValuesItemIdentifier:(id)valuesItemIdentifier keyValueStorePayload:(id)payload;
+(id)metadataWithValuesFromDataSourceItem:(id)dataSourceItem;
+(id)keyValueStoreItemIdentifierForItem:(id)item;
// declared property setter: -(void)setPlayCount:(unsigned)count;
// declared property getter: -(unsigned)playCount;
// declared property setter: -(void)setHasBeenPlayed:(BOOL)played;
// declared property getter: -(BOOL)hasBeenPlayed;
// declared property setter: -(void)setBookmarkTime:(double)time;
// declared property getter: -(double)bookmarkTime;
// declared property setter: -(void)setTimestamp:(double)timestamp;
// declared property getter: -(double)timestamp;
// declared property setter: -(void)setItemIdentifier:(id)identifier;
// declared property getter: -(id)itemIdentifier;
-(id)keyValueStorePayload;
-(void)dealloc;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(id)init;
@end

