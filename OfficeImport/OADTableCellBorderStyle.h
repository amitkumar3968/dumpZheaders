/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : XXUnknownSuperclass {
@private
	OADStroke* mLeftStroke;
	OADStroke* mRightStroke;
	OADStroke* mTopStroke;
	OADStroke* mBottomStroke;
	OADStroke* mHorzInsideStroke;
	OADStroke* mVertInsideStroke;
	OADStroke* mTopLeftToBottomRightStroke;
	OADStroke* mBottomLeftToTopRightStroke;
}
@property(retain) id bottomLeftToTopRightStroke;	// converted property
@property(retain) id topLeftToBottomRightStroke;	// converted property
@property(retain) id vertInsideStroke;	// converted property
@property(retain) id horzInsideStroke;	// converted property
@property(retain) id bottomStroke;	// converted property
@property(retain) id topStroke;	// converted property
@property(retain) id rightStroke;	// converted property
@property(retain) id leftStroke;	// converted property
+(id)defaultStyle;
+(id)defaultObliqueStroke;
+(id)defaultAxisParallelStroke;
-(void)applyOverridesFrom:(id)from;
-(id)shallowCopy;
// converted property setter: -(void)setBottomLeftToTopRightStroke:(id)topRightStroke;
// converted property getter: -(id)bottomLeftToTopRightStroke;
// converted property setter: -(void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;
// converted property getter: -(id)topLeftToBottomRightStroke;
// converted property setter: -(void)setVertInsideStroke:(id)stroke;
// converted property getter: -(id)vertInsideStroke;
// converted property setter: -(void)setHorzInsideStroke:(id)stroke;
// converted property getter: -(id)horzInsideStroke;
// converted property setter: -(void)setBottomStroke:(id)stroke;
// converted property getter: -(id)bottomStroke;
// converted property setter: -(void)setTopStroke:(id)stroke;
// converted property getter: -(id)topStroke;
// converted property setter: -(void)setRightStroke:(id)stroke;
// converted property getter: -(id)rightStroke;
// converted property setter: -(void)setLeftStroke:(id)stroke;
// converted property getter: -(id)leftStroke;
-(id)stroke:(int)stroke;
-(void)dealloc;
@end
