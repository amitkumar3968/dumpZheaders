/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "iLifeSlideshow-Structs.h"

@class MCAnimationPath, NSObject;
@protocol MPAnimationSupport;

@interface MPAnimationPath : XXUnknownSuperclass <NSCoding, NSCopying> {
	BOOL _isTriggered;
	NSObject<MPAnimationSupport>* _parentObject;
	MCAnimationPath* _animationPath;
}
@property(assign) BOOL isTriggered;
@property(retain) MCAnimationPath* animationPath;	// converted property
@property(retain) id parent;	// converted property
+(id)animationPath;
// converted property getter: -(id)parent;
// declared property setter: -(void)setIsTriggered:(BOOL)triggered;
// declared property getter: -(BOOL)isTriggered;
-(id)key;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithCoder:(id)coder;
-(void)encodeWithCoder:(id)coder;
-(id)init;
// converted property getter: -(id)animationPath;
-(void)cleanup;
// converted property setter: -(void)setAnimationPath:(id)path;
-(id)parentDocument;
-(id)animatedKey;
-(id)animatedParent;
// converted property setter: -(void)setParent:(id)parent;
@end

