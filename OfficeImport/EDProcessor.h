/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class EDResources, EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessor : XXUnknownSuperclass {
@private
	EDWorkbook* mWorkbook;
	EDResources* mResources;
	NSMutableArray* mObjects;
}
-(void)applyProcessorToObject:(id)object sheet:(id)sheet;
-(void)applyProcessorWithSheet:(id)sheet;
-(void)markObjectForPostProcessing:(id)postProcessing;
-(bool)isObjectSupported:(id)supported;
-(void)dealloc;
-(id)initWithWorkbook:(id)workbook;
@end

