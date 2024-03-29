/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKCacheNode : XXUnknownSuperclass {
@private
	VKCacheKey _key;
	id _value;
	VKCacheNode* _next;
	VKCacheNode* _previous;
}
@property(assign, nonatomic) VKCacheNode* previous;	// @synthesize=_previous
@property(retain, nonatomic) VKCacheNode* next;	// @synthesize=_next
@property(retain, nonatomic) id value;	// @synthesize=_value
@property(assign, nonatomic) VKCacheKey key;	// @synthesize=_key
// declared property setter: -(void)setPrevious:(id)previous;
// declared property getter: -(id)previous;
// declared property setter: -(void)setNext:(id)next;
// declared property getter: -(id)next;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
// declared property setter: -(void)setKey:(VKCacheKey)key;
// declared property getter: -(VKCacheKey)key;
-(id).cxx_construct;
-(void)dealloc;
@end

