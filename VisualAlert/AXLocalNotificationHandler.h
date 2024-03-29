/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import "AXNotificationHandler.h"


@interface AXLocalNotificationHandler : AXNotificationHandler {
	id _opaqueObserver;
}
@property(retain, nonatomic, setter=_setOpaqueObserver:) id _opaqueObserver;	// @synthesize
// declared property setter: -(void)_setOpaqueObserver:(id)observer;
// declared property getter: -(id)_opaqueObserver;
-(id)_notificationTypeDescription;
-(void)_stopObserving;
-(void)_startObserving;
-(void)_stopObservingWithObject:(id)object;
-(void)_startObservingWithObject:(id)object;
@end

