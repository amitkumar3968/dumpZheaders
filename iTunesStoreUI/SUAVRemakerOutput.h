/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import "NSCopying.h"
#import "iTunesStoreUI-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSURL, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SUAVRemakerOutput : XXUnknownSuperclass <NSCopying> {
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSURL* _mediaURL;
	NSString* _remakerMode;
	NSDictionary* _remakerOptions;
}
@property(copy) NSDictionary* remakerOptions;
@property(copy) NSString* remakerMode;
@property(copy) NSURL* mediaFileURL;
// declared property setter: -(void)setRemakerOptions:(id)options;
// declared property setter: -(void)setRemakerMode:(id)mode;
// declared property setter: -(void)setMediaFileURL:(id)url;
// declared property getter: -(id)remakerOptions;
// declared property getter: -(id)remakerMode;
// declared property getter: -(id)mediaFileURL;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end
