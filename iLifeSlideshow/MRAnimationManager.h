/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

@interface MRAnimationManager : XXUnknownSuperclass {
	NSMutableDictionary* mAnimations;
}
+(void)loadAnimationManagerWithPaths:(id)paths;
+(id)sharedManager;
+(void)initialize;
-(void)cleanup;
-(void)dealloc;
-(id)initWithPaths:(id)paths;
@end

