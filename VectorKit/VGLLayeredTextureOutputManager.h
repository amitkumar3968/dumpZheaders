/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VGLLayeredTextureOutputManager : XXUnknownSuperclass {
@private
	NSObject<OS_dispatch_queue>* _textureQueue;
	NSMutableDictionary* _textureDictionary;
}
+(id)sharedManager;
-(void)purge;
-(id)textureWithName:(id)name style:(id)style levelOfDetail:(unsigned)detail;
-(void)dealloc;
-(id)init;
@end

