/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : XXUnknownSuperclass {
@private
	WebNodeHighlight* _webNodeHighlight;
	NSMutableArray* _layers;
}
@property(readonly, retain) WebNodeHighlight* webNodeHighlight;	// converted property
// converted property getter: -(id)webNodeHighlight;
-(void)layoutSublayers:(id)sublayers;
-(void)_layoutForRectsHighlight:(Highlight*)rectsHighlight parent:(id)parent;
-(void)_layoutForNodeHighlight:(Highlight*)nodeHighlight parent:(id)parent;
-(void)_attach:(id)attach numLayers:(unsigned)layers;
-(BOOL)isFlipped;
-(void)detachFromWebNodeHighlight;
-(void)dealloc;
-(id)initWithWebNodeHighlight:(id)webNodeHighlight;
-(void)_removeAllLayers;
@end

