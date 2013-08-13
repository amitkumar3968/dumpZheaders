/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MediaControlClient, NSObject;
@protocol OS_dispatch_queue, AirPlayRemoteSlideshowDelegate;

@interface AirPlayRemoteSlideshow : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* _internalQueue;
	MediaControlClient* _client;
	id<AirPlayRemoteSlideshowDelegate> _delegate;
	NSObject<OS_dispatch_queue>* _userQueue;
	BOOL _started;
	double _startTime;
}
@property(assign, nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate;	// @synthesize=_delegate
// declared property getter: -(id)delegate;
-(void)stopWithOptions:(id)options completion:(id)completion;
-(void)startWithOptions:(id)options completion:(id)completion;
-(void)getFeaturesWithCompletion:(id)completion;
-(void)getFeaturesWithOptions:(unsigned)options completion:(id)completion;
-(void)_configureEventHandler;
-(void)setPassword:(id)password;
-(void)setHost:(id)host;
-(void)setDispatchQueue:(id)queue;
// declared property setter: -(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end
