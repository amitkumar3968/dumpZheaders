/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface SUObjectPool : XXUnknownSuperclass {
	NSMutableDictionary* _poolObjects;
	NSMutableArray* _vendedObjects;
}
@property(readonly, assign, nonatomic) NSArray* vendedObjects;	// @synthesize=_vendedObjects
// declared property getter: -(id)vendedObjects;
-(id)copyPoppedObjectForClass:(Class)aClass;
-(id)addObjectsOfClass:(Class)aClass count:(int)count forClass:(Class)aClass3;
-(void)addObjects:(id)objects forClass:(Class)aClass;
-(void)dealloc;
@end
