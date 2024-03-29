/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class MPAudioPlaylist, MPSongInternal, NSString, NSURL, MCSong;

@interface MPSong : XXUnknownSuperclass <NSCoding, NSCopying> {
@private
	NSString* _path;
	MCSong* _song;
	MPAudioPlaylist* _parentPlaylist;
	MPSongInternal* _internal;
}
@property(copy, nonatomic) NSURL* URL;	// @dynamic
@property(copy, nonatomic) NSString* path;	// @dynamic
@property(assign, nonatomic) double duration;	// @dynamic
@property(assign, nonatomic) double startTime;	// @dynamic
@property(assign, nonatomic) double fadeOutDuration;	// @dynamic
@property(assign, nonatomic) double fadeInDuration;	// @dynamic
@property(assign, nonatomic) float audioVolume;	// @dynamic
@property(retain) MPAudioPlaylist* parentPlaylist;	// converted property
@property(retain) MCSong* song;	// converted property
+(id)songWithPath:(id)path;
+(id)songWithURL:(id)url;
+(id)song;
// converted property getter: -(id)parentPlaylist;
-(int)index;
// declared property setter: -(void)setAudioVolume:(float)volume;
// declared property getter: -(float)audioVolume;
// declared property setter: -(void)setFadeOutDuration:(double)duration;
// declared property getter: -(double)fadeOutDuration;
// declared property setter: -(void)setFadeInDuration:(double)duration;
// declared property getter: -(double)fadeInDuration;
// declared property setter: -(void)setDuration:(double)duration;
// declared property getter: -(double)duration;
// declared property setter: -(void)setStartTime:(double)time;
// declared property getter: -(double)startTime;
// declared property setter: -(void)setURL:(id)url;
// declared property getter: -(id)URL;
// declared property setter: -(void)setPath:(id)path;
// declared property getter: -(id)path;
-(id)description;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithPath:(id)path;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
-(double)maxDuration;
// converted property getter: -(id)song;
-(void)setInternalStartTime;
-(void)setInternalDuration;
// converted property setter: -(void)setParentPlaylist:(id)playlist;
// converted property setter: -(void)setSong:(id)song;
-(void)copyStruct:(id)aStruct;
-(id)parentDocument;
-(double)stopTime;
@end

