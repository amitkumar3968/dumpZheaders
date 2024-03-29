/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSObject;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : XXUnknownSuperclass {
@private
	NSString* mLayoutTypeId;
	NSString* mPresentationName;
	NSString* mPresentationStyleLabel;
	int mPresentationStyleIndex;
	int mPresentationStyleCount;
	NSObject* mPresentationAssociatedId;
	BOOL mCustomVerticalFlip;
	double mCustomScaleX;
	double mCustomScaleY;
	double mCustomOffsetX;
	double mCustomOffsetY;
}
@property(assign) double customOffsetY;	// converted property
@property(assign) double customOffsetX;	// converted property
@property(assign) double customScaleY;	// converted property
@property(assign) double customScaleX;	// converted property
@property(assign) BOOL customVerticalFlip;	// converted property
@property(retain) id presentationAssociatedId;	// converted property
@property(assign) int presentationStyleCount;	// converted property
@property(assign) int presentationStyleIndex;	// converted property
@property(retain) id presentationStyleLabel;	// converted property
@property(retain) id presentationName;	// converted property
@property(retain) id layoutTypeId;	// converted property
// converted property setter: -(void)setCustomOffsetY:(double)y;
// converted property getter: -(double)customOffsetY;
// converted property setter: -(void)setCustomOffsetX:(double)x;
// converted property getter: -(double)customOffsetX;
// converted property setter: -(void)setCustomScaleY:(double)y;
// converted property getter: -(double)customScaleY;
// converted property setter: -(void)setCustomScaleX:(double)x;
// converted property getter: -(double)customScaleX;
// converted property setter: -(void)setCustomVerticalFlip:(BOOL)flip;
// converted property getter: -(BOOL)customVerticalFlip;
// converted property setter: -(void)setPresentationAssociatedId:(id)anId;
// converted property getter: -(id)presentationAssociatedId;
// converted property setter: -(void)setPresentationStyleCount:(int)count;
// converted property getter: -(int)presentationStyleCount;
// converted property setter: -(void)setPresentationStyleIndex:(int)index;
// converted property getter: -(int)presentationStyleIndex;
// converted property setter: -(void)setPresentationStyleLabel:(id)label;
// converted property getter: -(id)presentationStyleLabel;
// converted property setter: -(void)setPresentationName:(id)name;
// converted property getter: -(id)presentationName;
// converted property setter: -(void)setLayoutTypeId:(id)anId;
// converted property getter: -(id)layoutTypeId;
-(void)dealloc;
@end

