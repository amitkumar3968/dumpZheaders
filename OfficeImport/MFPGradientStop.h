/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TSUColor;

__attribute__((visibility("hidden")))
@interface MFPGradientStop : XXUnknownSuperclass {
@private
	TSUColor* mColor;
	float mPosition;
}
-(float)position;
-(id)color;
-(void)dealloc;
-(id)initWithColor:(id)color position:(float)position;
@end

