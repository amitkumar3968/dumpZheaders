/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : XXUnknownSuperclass {
@private
	SUMediaPlayerItem* _mediaItem;
}
@property(readonly, assign, nonatomic) SUMediaPlayerItem* mediaPlayerItem;	// @synthesize=_mediaItem
// declared property getter: -(id)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)request;
-(void)run;
-(void)dealloc;
-(id)initWithMediaPlayerItem:(id)mediaPlayerItem;
-(id)init;
@end
