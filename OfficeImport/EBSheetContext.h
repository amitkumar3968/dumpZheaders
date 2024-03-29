/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "OCDDelayedNodeContext.h"

@class EBReaderSheetState;

__attribute__((visibility("hidden")))
@interface EBSheetContext : XXUnknownSuperclass <OCDDelayedNodeContext> {
@private
	EBReaderSheetState* mSheetState;
	unsigned mSheetIndex;
}
-(bool)loadDelayedNode:(id)node;
-(void)dealloc;
-(id)initWithSheetIndex:(unsigned)sheetIndex state:(id)state;
@end

