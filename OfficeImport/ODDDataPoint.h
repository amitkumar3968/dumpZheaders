/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDPoint.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ODDDataPoint : ODDPoint {
@private
	NSMutableArray* mPresentations;
}
-(void)addAssociatedPresentation:(id)presentation;
-(void)addPresentation:(id)presentation order:(unsigned long)order;
-(id)presentations;
-(void)dealloc;
@end

