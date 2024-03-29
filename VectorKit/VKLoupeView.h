/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIPanGestureRecognizer, VKLoupeMapTileModel, UIPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface VKLoupeView : XXUnknownSuperclass {
@private
	UIPanGestureRecognizer* _pan;
	UIPinchGestureRecognizer* _scale;
	float _maxScale;
	float _minScale;
	float _currentScale;
	float _lastScale;
	CGPoint _panStart;
	VKLoupeMapTileModel* _mapTileModel;
}
@property(retain, nonatomic) VKLoupeMapTileModel* mapTileModel;
-(void)drawRect:(CGRect)rect;
// declared property getter: -(id)mapTileModel;
// declared property setter: -(void)setMapTileModel:(id)model;
-(void)didMoveToSuperview;
-(void)scale;
-(void)_updateTransform;
-(void)pan;
-(void)_updateMap;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end

