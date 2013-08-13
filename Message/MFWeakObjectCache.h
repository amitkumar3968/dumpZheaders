/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface MFWeakObjectCache : XXUnknownSuperclass {
@private
	id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;
}
-(void)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key wasCached:(BOOL*)cached;
-(id)objectForKey:(id)key;
-(void)dealloc;
-(id)initWithBlock:(id)block;
@end

