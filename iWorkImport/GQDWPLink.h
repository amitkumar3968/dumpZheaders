/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDWPLink : GQDWPInlineList {
@private
	GQDSStyle* mCharStyle;
	CFStringRef mHref;
}
-(CFStringRef)href;
-(id)characterStyle;
-(void)dealloc;
-(int)readStyleFromReader:(xmlTextReader*)reader processor:(id)processor;
@end
