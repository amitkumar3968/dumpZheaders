/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GQDColor;

__attribute__((visibility("hidden")))
@interface GQDRGradientStop : XXUnknownSuperclass {
@private
	float mFraction;
	GQDColor* mColor;
}
+(const StateSpec*)stateForReading;
-(id)color;
-(float)fraction;
-(int)readAttributesFromReader:(xmlTextReader*)reader;
-(void)dealloc;
@end

