/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPDisposable.h"
#import "NSCopying.h"
#import "CPCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CPMemoryOwner;

@interface CPCharSequence : XXUnknownSuperclass <NSCopying, CPCopying, CPDisposable> {
	unsigned length;
	CPPDFChar** charArray;
	unsigned previousSize;
	unsigned size;
	CPMemoryOwner* sharedMemory;
	BOOL wasMerged;
}
@property(readonly, assign) unsigned length;	// converted property
@property(readonly, assign) CPPDFChar** charArray;	// converted property
@property(readonly, assign) BOOL wasMerged;	// converted property
-(CGRect)boundsFrom:(unsigned)from length:(unsigned)length;
-(CGRect)bounds;
-(BOOL)map:(/*function-pointer*/ void*)map whereNeighborsWith:(id)with passing:(void*)passing;
-(BOOL)mapToPairsWithIndex:(/*function-pointer*/ void*)index passing:(void*)passing;
-(BOOL)mapToPairs:(/*function-pointer*/ void*)pairs passing:(void*)passing;
-(BOOL)mapWithIndex:(/*function-pointer*/ void*)index from:(unsigned)from length:(unsigned)length passing:(void*)passing;
-(BOOL)mapWithIndex:(/*function-pointer*/ void*)index passing:(void*)passing;
-(BOOL)map:(/*function-pointer*/ void*)map passing:(void*)passing;
-(BOOL)removeToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(void)copyToSubsequence:(id)subsequence ifTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(void)copyToSubsequence:(id)subsequence from:(unsigned)from length:(unsigned)length;
-(BOOL)removeSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(void)splitToSubsequences:(id)subsequences whereTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(id)newSubsequenceFrom:(unsigned)from length:(unsigned)length;
// converted property getter: -(BOOL)wasMerged;
-(void)merge:(id)merge by:(/*function-pointer*/ void*)by;
-(void)mergeByAnchorXIncreasingYDecreasing:(id)decreasing;
-(void)mergeByAnchorYDecreasingXIncreasing:(id)increasing;
-(void)sortBy:(/*function-pointer*/ void*)by;
-(void)sortByAnchorXIncreasingYDecreasing;
-(void)sortByAnchorYDecreasingXIncreasing;
-(void)removeFrom:(unsigned)from;
-(void)removeCharAtIndex:(unsigned)index;
-(void)replaceCharAtIndex:(unsigned)index withChar:(CPPDFChar*)aChar;
-(void)removeAllChars;
-(void)removeChar;
-(void)addCharsFromSequence:(id)sequence;
-(void)addChars:(CPPDFChar*)chars length:(unsigned)length ifTrue:(/*function-pointer*/ void*)aTrue passing:(void*)passing;
-(void)addChars:(CPPDFChar*)chars length:(unsigned)length;
-(void)addChar:(CPPDFChar*)aChar;
// converted property getter: -(CPPDFChar**)charArray;
-(CPPDFChar*)charAtIndex:(unsigned)index;
// converted property getter: -(unsigned)length;
-(void)resize:(unsigned)resize;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(void)finalize;
-(void)dispose;
-(id)initSuper;
-(id)initWithChars:(CPPDFChar*)chars length:(unsigned)length;
-(id)initWithSizeFor:(unsigned)aFor;
@end

