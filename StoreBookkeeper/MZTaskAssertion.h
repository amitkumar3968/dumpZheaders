/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MZProcessAssertion, NSString;

__attribute__((visibility("hidden")))
@interface MZTaskAssertion : XXUnknownSuperclass {
@private
	id _expireHandler;
	NSString* _debugInfo;
	MZProcessAssertion* _processAssertion;
}
+(id)newBackgroundTaskWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;
-(id)description;
-(void)invalidate;
-(void)performExpirationHandler;
-(void)dealloc;
-(id)initWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;
@end

