/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "SUScriptMediaItemCollection.h"

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection {
}
@property(readonly, assign, nonatomic) MPMediaPlaylist* nativePlaylist;
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)selector;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(int)nativePlaylistAttributes;
+(int)nativePlaylistAttributesForScriptPlaylistAttributes:(id)scriptPlaylistAttributes;
-(id)_className;
-(id)valueForProperty:(id)property;
// declared property getter: -(id)nativePlaylist;
@end

