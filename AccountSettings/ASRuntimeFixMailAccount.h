/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ASRuntimeFixProtocol.h"

@class NSSet;

@interface ASRuntimeFixMailAccount : XXUnknownSuperclass <ASRuntimeFixProtocol> {
	BOOL _shouldNotifyMobileMail;
	NSSet* _supportedMailClasses;
}
-(id)supportedAccountTypes;
-(void)accountsHaveBeenSaved:(BOOL)saved;
-(int)fixBasicAccountIfNeeded:(id)needed loggingMessage:(id)message;
-(void)dealloc;
-(id)init;
-(BOOL)_cleanupAccountClass:(id)aClass;
@end
