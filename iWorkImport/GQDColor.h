/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDColor : XXUnknownSuperclass <GQDNameMappable> {
@private
	float mRed;
	float mGreen;
	float mBlue;
	float mAlpha;
}
+(id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue;
+(id)blackColor;
+(const StateSpec*)stateForReading;
+(id)cmykColorFromReader:(xmlTextReader*)reader;
+(id)whiteColorFromReader:(xmlTextReader*)reader calibrated:(BOOL)calibrated;
+(id)rgbColorFromReader:(xmlTextReader*)reader calibrated:(BOOL)calibrated;
+(void)readColorFromProcessor:(id)processor reader:(xmlTextReader*)reader;
-(id)blendedColorWithFraction:(float)fraction ofColor:(id)color;
-(float)alphaComponent;
-(float)blueComponent;
-(float)greenComponent;
-(float)redComponent;
-(void)getRed:(float*)red green:(float*)green blue:(float*)blue alpha:(float*)alpha;
-(id)description;
-(id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;
-(int)htmlBlue;
-(int)htmlGreen;
-(int)htmlRed;
@end

