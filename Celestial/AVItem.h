/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface AVItem : XXUnknownSuperclass {
@private
	AVItemPrivate* _priv;
}
@property(assign) float volume;	// converted property
+(id)avItemWithPath:(id)path error:(id*)error;
+(id)avItem;
-(void)cancelDownload;
-(long)downloadStatus;
-(float)downloadProgress;
-(void)stopDownload;
-(long)beginDownloading;
-(void*)downloadThread;
-(id)url;
-(id)urlFromPath:(id)path;
-(id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;
-(id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;
-(id)chapterImageForImageID:(int)imageID;
-(id)formatDetailsForTracks;
-(BOOL)setAttribute:(id)attribute forKey:(id)key error:(id*)error;
-(id)attributeForKey:(id)key;
-(int)eqPreset;
-(void)setEQPreset:(int)preset;
// converted property setter: -(void)setVolume:(float)volume;
// converted property getter: -(float)volume;
-(CGSize)naturalSize;
-(double)duration;
-(id)path;
-(int)_instantiateItem;
-(BOOL)setPath:(id)path error:(id*)error;
-(void)dealloc;
-(id)initWithPath:(id)path error:(id*)error;
-(id)init;
-(id)initWithError:(id*)error;
-(id)errorLog;
-(id)accessLog;
@end

