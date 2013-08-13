/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDFilteredImage, GQDColor;

__attribute__((visibility("hidden")))
@interface GQDTexturedImageFill : XXUnknownSuperclass <GQDNameMappable> {
@private
	int mTechnique;
	GQDColor* mColor;
	GQDFilteredImage* mFilteredImage;
}
@property(retain) id color;	// converted property
+(const StateSpec*)stateForReading;
-(id)imageBinary;
// converted property getter: -(id)color;
-(int)technique;
-(void)dealloc;
// converted property setter: -(void)setColor:(id)color;
-(void)invalidateFilteredImage;
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
@end
