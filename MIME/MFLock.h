/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFLock : XXUnknownSuperclass <MFLockObject> {
	NSString* _name;
	id _delegate;
}
+(void)initialize;
-(void)dealloc;
-(id)description;
-(void)unlock;
-(BOOL)lockBeforeDate:(id)date;
-(BOOL)tryLock;
-(void)lock;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)name andDelegate:(id)delegate;
-(id)init;
@end

