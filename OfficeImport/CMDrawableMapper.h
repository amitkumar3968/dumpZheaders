/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OADDrawable, NSData, NSString, CMDrawableStyle, OADOrientedBounds;

__attribute__((visibility("hidden")))
@interface CMDrawableMapper : CMMapper {
@private
	OADDrawable* mDrawable;
	CMDrawableStyle* mStyle;
	NSData* mImageBinaryData;
	NSString* mName;
	NSString* mExtension;
	int mResourceType;
	NSString* mSourcePath;
	CGRect mBox;
	float mRotation;
	BOOL mIsSupported;
	BOOL mIsCropped;
	CGRect mUncroppedBox;
	OADOrientedBounds* mOrientedBounds;
}
@property(assign) float rotation;	// converted property
-(id).cxx_construct;
-(id)convertMetafileToPdf;
-(void)mapTextBoxAt:(id)at withState:(id)state;
-(CGRect)shapeTextBoxRect;
-(void)mapDrawingContext:(id)context at:(id)at relative:(BOOL)relative withState:(id)state;
-(void)mapShapeGraphicsAt:(id)at withState:(id)state;
-(void)calculateUncroppedBox:(id)box;
-(void)mapBounds;
-(void)mapImageBinaryData;
-(id)blipAtIndex:(unsigned)index;
-(id)saveResourceAndReturnPath:(id)path withType:(int)type;
-(void)setWithOadImage:(id)oadImage;
-(void)setBoundingBox;
// converted property setter: -(void)setRotation:(float)rotation;
// converted property getter: -(float)rotation;
-(CGRect)uncroppedBox;
-(BOOL)isCropped;
-(CGRect)box;
-(id)initWithOadDrawable:(id)oadDrawable parent:(id)parent;
-(id)initWithParent:(id)parent;
-(void)dealloc;
@end

