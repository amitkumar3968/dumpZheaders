/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL;

@interface TIPersistentQueue : XXUnknownSuperclass {
	NSURL* _presentedItemURL;
}
-(void)dequeueObjects:(id)objects;
-(void)enqueueObjects:(id)objects;
-(void)readObjects:(id)objects;
-(void)dealloc;
-(id)initWithURL:(id)url;
@end

