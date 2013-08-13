/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKVectorMapModel.h"

@class VGLRenderState;

__attribute__((visibility("hidden")))
@interface VKPolygonMapModel : VKVectorMapModel {
@private
	VGLRenderState* _renderState;
	BOOL _drawShapes;
	XXStruct__PbasC* _renderSteps;
	int _renderStepCount;
	int _renderStepMax;
}
@property(assign, nonatomic) BOOL drawShapes;	// @synthesize=_drawShapes
// declared property setter: -(void)setDrawShapes:(BOOL)shapes;
// declared property getter: -(BOOL)drawShapes;
-(void)drawCoastlinesWithContext:(id)context;
-(void)drawPolygonsWithContext:(id)context;
-(void)drawDebugScene:(id)scene withContext:(id)context;
-(void)drawScene:(id)scene withContext:(id)context;
-(void)layoutScene:(id)scene withContext:(id)context;
-(unsigned)textureSize;
-(unsigned)mapLayerPosition;
-(void)reset;
-(void)dealloc;
-(id)init;
@end
