/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "APSMessage.h"

@class NSDate;

@interface APSIncomingMessage : APSMessage {
}
@property(assign, nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property(assign, nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property(copy, nonatomic) NSDate* timestamp;
// declared property setter: -(void)setLastMessageFromStorage:(BOOL)storage;
// declared property getter: -(BOOL)wasLastMessageFromStorage;
// declared property setter: -(void)setFromStorage:(BOOL)storage;
// declared property getter: -(BOOL)wasFromStorage;
// declared property setter: -(void)setTimestamp:(id)timestamp;
// declared property getter: -(id)timestamp;
@end

