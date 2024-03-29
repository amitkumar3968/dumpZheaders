/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPList;

@interface CPListItem : XXUnknownSuperclass <CPDisposable> {
	CPList* list;
	int number;
	CFArrayRef paragraphs;
}
@property(assign, nonatomic) int number;	// @synthesize
@property(retain, nonatomic) CPList* list;	// @synthesize
// declared property setter: -(void)setNumber:(int)number;
// declared property getter: -(int)number;
// declared property setter: -(void)setList:(id)list;
// declared property getter: -(id)list;
-(void)addParagraph:(id)paragraph;
-(id)paragraphAtIndex:(unsigned)index;
-(unsigned)paragraphCount;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)init;
@end

