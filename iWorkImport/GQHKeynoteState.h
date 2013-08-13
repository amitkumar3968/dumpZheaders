/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


__attribute__((visibility("hidden")))
@interface GQHKeynoteState : GQHState {
@private
	int mCurrentSlide;
	CGSize mSlideSize;
	int mProgressiveIndex;
}
@property(assign) int progressiveIndex;	// converted property
@property(assign) CGSize slideSize;	// converted property
-(id).cxx_construct;
-(BOOL)shouldStreamContent;
// converted property setter: -(void)setProgressiveIndex:(int)index;
// converted property getter: -(int)progressiveIndex;
-(BOOL)shouldMapLinkWithUrl:(CFStringRef)url;
// converted property setter: -(void)setSlideSize:(CGSize)size;
// converted property getter: -(CGSize)slideSize;
-(int)currentSlide;
-(void)incrementCurrentSlide;
@end

