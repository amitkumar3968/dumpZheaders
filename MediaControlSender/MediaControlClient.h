/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import "MediaControlSender-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_queue;

@interface MediaControlClient : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _queue;
	MediaControlClientImp* _client;
	NSObject<OS_dispatch_queue>* _eventHandlerQueue;
	id _eventHandlerBlock;
}
-(void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;
-(void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;
-(void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;
-(void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)playWithRemoteURL:(id)remoteURL startPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;
-(void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;
-(void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;
-(void)playWithLocalFilePath:(id)localFilePath params:(id)params completionQueue:(id)queue completionBlock:(id)block;
-(void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;
-(void)setSlideshowInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;
-(void)getSlideshowInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)getSlideshowFeaturesWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;
-(void)activateResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;
-(void)removeResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;
-(void)addResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;
-(void)addResourceFile:(id)file mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;
-(void)addResourceData:(id)data mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;
-(void)setProperty:(id)property qualifier:(id)qualifier value:(id)value completionQueue:(id)queue completionBlock:(id)block;
-(void)getProperty:(id)property qualifier:(id)qualifier completionQueue:(id)queue completionBlock:(id)block;
-(void)sendPhotoData:(id)data options:(id)options completionQueue:(id)queue completionBlock:(id)block;
-(void)sendPhotoData:(id)data completionQueue:(id)queue completionBlock:(id)block;
-(void)startPresentation:(id)presentation completionQueue:(id)queue completionBlock:(id)block;
-(void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;
-(void)performRemoteAction:(id)action withParams:(id)params completionQueue:(id)queue completionBlock:(id)block;
-(void)ensureDisconnected;
-(void)ensureConnected;
-(void)setPassword:(id)password;
-(void)setHost:(id)host;
-(void)checkAuthentication;
-(void)invalidate;
-(void)dealloc;
-(id)init;
-(MediaControlClientImp*)internalClient;
@end
