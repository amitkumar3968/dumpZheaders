/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {
	CoreDAVAction* _backingAction;
}
@property(retain) CoreDAVAction* action;
@property(retain) CoreDAVAction* backingAction;	// @synthesize=_backingAction
// declared property setter: -(void)setBackingAction:(id)action;
// declared property getter: -(id)backingAction;
// declared property setter: -(void)setAction:(id)action;
// declared property getter: -(id)action;
-(void)dealloc;
-(id)description;
@end

