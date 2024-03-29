/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VKModelObject.h"
#import "VectorKit-Structs.h"
#import "VKMapLayer.h"

@class VGLBasicProgram;

__attribute__((visibility("hidden")))
@interface VKDebugModel : VKModelObject <VKMapLayer> {
@private
	BOOL _geocentric;
	VGLBasicProgram* _basicProgram;
	float _fontSize;
	LabelFeature* _debugHighlightedFeature;
}
@property(assign, nonatomic) BOOL geocentric;	// @synthesize=_geocentric
// declared property setter: -(void)setGeocentric:(BOOL)geocentric;
// declared property getter: -(BOOL)geocentric;
-(void)_paintTile:(id)tile fromLayer:(unsigned)layer withContext:(id)context;
-(void)drawDebugScene:(id)scene withContext:(id)context;
-(void)debugHighlightLabelAtScreenPoint:(CGPoint)screenPoint viewTransform:(id)transform featurePool:(id)pool renderStamp:(unsigned)stamp;
-(void)dealloc;
-(unsigned)mapLayerPosition;
@end

