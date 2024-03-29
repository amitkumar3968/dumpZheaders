/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKLabelIcon.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPointIcon : VKLabelIcon {
@private
	long long _featureID;
	NSString* _iconName;
	int _iconStyle;
	XXStruct_VkeH1A _iconStyleInfo;
	BOOL _drawingRenderableIcon;
}
@property(readonly, retain) NSString* iconName;	// converted property
@property(readonly, assign, getter=isDrawingRenderableIcon) BOOL drawingRenderableIcon;	// converted property
-(id).cxx_construct;
// converted property getter: -(BOOL)isDrawingRenderableIcon;
-(id)renderableIcon;
-(void)updateWithLabelContext:(LabelContext*)labelContext labelStyle:(XXStruct_USkF9C*)style atMercatorPoint:(XXStruct_taVrlB)mercatorPoint;
// converted property getter: -(id)iconName;
-(void)updateCollisionObject:(CollisionObject*)object;
-(BOOL)isPOI;
-(void)dealloc;
-(id)initWithFeatureID:(long long)featureID;
@end

