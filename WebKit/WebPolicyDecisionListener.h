/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import </libobjc.A.h>
#import "NSObject.h"
#import "WebPolicyDecisionListener.h"

@class WebPolicyDecisionListenerPrivate;

@protocol WebPolicyDecisionListener <NSObject>
-(void)ignore;
-(void)download;
-(void)use;
@end

__attribute__((visibility("hidden")))
@interface WebPolicyDecisionListener : NSObject <WebPolicyDecisionListener> {
@private
	WebPolicyDecisionListenerPrivate* _private;
}
-(void)download;
-(void)ignore;
-(void)use;
-(void)_invalidate;
-(void)_usePolicy:(int)policy;
-(void)dealloc;
-(id)_initWithTarget:(id)target action:(SEL)action;
@end

