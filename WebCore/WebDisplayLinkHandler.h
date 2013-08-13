/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import </libobjc.A.h>
#import "WebCore-Structs.h"

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface WebDisplayLinkHandler : NSObject {
@private
	DisplayRefreshMonitor* m_monitor;
	CADisplayLink* m_displayLink;
}
-(void)invalidate;
-(void)handleDisplayLink:(id)link;
-(void)dealloc;
-(id)initWithMonitor:(DisplayRefreshMonitor*)monitor;
@end

