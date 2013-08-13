/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import "VectorKit-Structs.h"
#import "VKLabelIcon.h"

@class VKGenericShieldDrawStyle, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface VKShieldIcon : VKLabelIcon {
@private
	long long _shieldType;
	NSString* _shieldText;
	VKGenericShieldDrawStyle* _genericShieldStyle;
	int _mode;
	NSArray* _resourceNames;
	BOOL _drawingRenderableIcon;
	CGSize _size;
}
@property(readonly, assign, nonatomic) long long shieldType;	// @synthesize=_shieldType
@property(readonly, assign, nonatomic) NSString* shieldText;	// @synthesize=_shieldText
// declared property getter: -(long long)shieldType;
// declared property getter: -(id)shieldText;
-(id).cxx_construct;
-(id)renderableIcon;
-(void)updateWithLabelContext:(LabelContext*)labelContext labelStyle:(XXStruct_USkF9C*)style atMercatorPoint:(XXStruct_taVrlB)mercatorPoint;
-(void)dealloc;
-(id)initWithShieldType:(long long)shieldType shieldText:(const char*)text genericShieldStyle:(id)style mode:(int)mode;
@end
