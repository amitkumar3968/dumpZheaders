/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKModelObject;

__attribute__((visibility("hidden")))
@interface _VKMapModelDrawEntry : XXUnknownSuperclass {
@private
	VKModelObject* _model;
	unsigned _position;
}
@property(readonly, retain) VKModelObject* model;	// converted property
@property(readonly, assign) unsigned position;	// converted property
-(id)description;
// converted property getter: -(unsigned)position;
// converted property getter: -(id)model;
-(void)dealloc;
-(id)initWithModelObject:(id)modelObject position:(unsigned)position;
@end
