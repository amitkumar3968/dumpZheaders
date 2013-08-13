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
@interface GQDWPPadding : XXUnknownSuperclass <GQDNameMappable> {
@private
	float mTop;
	float mLeft;
	float mBottom;
	float mRight;
}
+(const StateSpec*)stateForReading;
-(float)right;
-(float)bottom;
-(float)left;
-(float)top;
-(int)readAttributesFromReader:(xmlTextReader*)reader;
@end

