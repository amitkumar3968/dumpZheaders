/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKLabelFeaturePool : XXUnknownSuperclass {
@private
	LabelFeatureArray<vk::LabelFeatureRoad>* _roads;
	LabelFeatureArray<vk::LabelFeaturePoint>* _points;
	LabelFeatureArray<vk::LabelFeaturePolygon>* _polygons;
}
-(void)removeDeadFeatures;
-(unsigned)getFeatures:(LabelFeature**)features forTile:(id)tile ofType:(int)type;
-(unsigned)maximumFeatureCountForTile:(id)tile ofType:(int)type;
-(void)forEachFeature:(id)eachFeature;
-(void)reset;
-(void)dealloc;
-(id)init;
@end
