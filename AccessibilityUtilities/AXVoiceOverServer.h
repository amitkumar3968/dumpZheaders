/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXServer.h"


@interface AXVoiceOverServer : AXServer {
}
+(id)server;
-(void)triggerCommand:(int)command;
-(BOOL)_connectIfNecessary;
-(id)_serviceName;
-(void)dealloc;
-(id)init;
@end
