/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDTCell.h"

@class GQDWPLayoutStorage;

__attribute__((visibility("hidden")))
@interface GQDTTextCell : GQDTCell {
@private
	CFStringRef mStringValue;
	GQDWPLayoutStorage* mLayoutStorage;
}
-(id)layoutStorage;
-(CFStringRef)stringValue;
-(void)dealloc;
-(int)readContentForTCell:(xmlTextReader*)tcell;
-(int)readContentForTextCell:(xmlTextReader*)textCell;
@end

