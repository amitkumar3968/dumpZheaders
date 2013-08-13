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

@class MCAction, NSObject;
@protocol MPActionSupport;

@interface MPAction : XXUnknownSuperclass <NSCoding, NSCopying> {
	NSObject<MPActionSupport>* _parentObject;
	MCAction* _action;
	NSObject* _targetObject;
}
@property(retain, nonatomic) NSObject* targetObject;	// @synthesize=_targetObject
@property(retain) id parent;	// converted property
+(id)action;
-(void)setAction:(id)action;
-(void)configureTarget;
// converted property setter: -(void)setParent:(id)parent;
-(id)parentDocument;
// converted property getter: -(id)parent;
-(id)key;
-(id)copyWithZone:(NSZone*)zone;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
// declared property setter: -(void)setTargetObject:(id)object;
// declared property getter: -(id)targetObject;
-(id)initWithCoder:(id)coder;
-(id)init;
@end
