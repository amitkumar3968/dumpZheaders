/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import </libobjc.A.h>


__attribute__((visibility("hidden")))
@interface WebCoreMediaPlayerNotificationHelper : NSObject {
@private
	MediaPlayerPrivateIOS* _client;
	BOOL _deferredPropertiesScheduled;
}
-(void)scheduleDeferredPropertiesWithOptionalDelay:(id)optionalDelay;
-(void)schedulePrepareToPlayWithOptionalDelay:(id)optionalDelay;
-(void)deliverNotification:(id)notification;
-(void)delayNotification:(int)notification;
-(void)cancelPendingRequests;
-(void)disconnect;
-(id)initWithClient:(MediaPlayerPrivateIOS*)client;
@end

