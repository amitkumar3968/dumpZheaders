/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKTileProvider;

__attribute__((visibility("hidden")))
@interface _VKTileProviderTimerTarget : XXUnknownSuperclass {
@private
	VKTileProvider* tileProvider;
	VKTileProvider* _tileProvider;
}
@property(assign, nonatomic) VKTileProvider* tileProvider;	// @synthesize=_tileProvider
// declared property setter: -(void)setTileProvider:(id)provider;
// declared property getter: -(id)tileProvider;
-(void)timerFired:(id)fired;
@end

