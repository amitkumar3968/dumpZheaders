/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKModelObject;
@protocol VKWorldDelegate;

__attribute__((visibility("hidden")))
@interface VKWorld : XXUnknownSuperclass {
@private
	id<VKWorldDelegate> _delegate;
	VKModelObject* _modelRoot;
}
@property(assign, nonatomic) id<VKWorldDelegate> delegate;	// @synthesize=_delegate
@property(readonly, assign, nonatomic) VKModelObject* modelRoot;	// @synthesize=_modelRoot
// declared property getter: -(id)modelRoot;
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void)drawDebugScene:(id)scene withContext:(id)context;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(void)worldDisplayDidChange;
-(void)worldLayoutDidChange;
-(id)description;
-(void)dealloc;
-(id)init;
@end

