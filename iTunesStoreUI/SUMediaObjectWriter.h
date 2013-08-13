/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUMediaObject;

@interface SUMediaObjectWriter : XXUnknownSuperclass {
	id _completionBlock;
	SUMediaObject* _mediaObject;
	unsigned _taskIdentifier;
}
@property(copy, nonatomic) id completionBlock;	// @synthesize=_completionBlock
@property(readonly, assign, nonatomic) SUMediaObject* mediaObject;	// @synthesize=_mediaObject
// declared property getter: -(id)mediaObject;
// declared property setter: -(void)setCompletionBlock:(id)block;
// declared property getter: -(id)completionBlock;
-(void)_endTaskCompletion;
-(void)_beginTaskCompletion;
-(void)writeMediaObject;
-(void)dealloc;
-(id)initWithMediaObject:(id)mediaObject;
-(id)init;
@end
