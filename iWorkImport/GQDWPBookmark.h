/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDWPInlineList.h"


__attribute__((visibility("hidden")))
@interface GQDWPBookmark : GQDWPInlineList {
@private
	CFStringRef mName;
	BOOL mRanged;
	BOOL mHidden;
}
-(BOOL)isHidden;
-(BOOL)isRanged;
-(CFStringRef)name;
-(void)dealloc;
-(int)readAttributesFromReader:(xmlTextReader*)reader processor:(id)processor;
@end

