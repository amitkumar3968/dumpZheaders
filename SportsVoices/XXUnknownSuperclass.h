/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface XXUnknownSuperclass (Helpers)
-(id)_subsequenceFromIndex:(int)index;
-(id)_subsequenceToIndex:(int)index;
-(id)_subsequenceFrom:(int)from to:(int)to;
-(BOOL)_containsSubArray:(id)array;
-(id)repeatedNTimes:(int)times;
-(id)_withoutEmptyStrings;
@end

@interface XXUnknownSuperclass (Splice)
-(id)_spliceAt:(int)at amount:(int)amount andInsert:(id)insert;
-(id)_spliceAt:(int)at amount:(int)amount andOverlay:(id)overlay;
@end

@interface XXUnknownSuperclass (TextParsingHelpers)
-(id)_withoutExtraWhitespace;
-(id)_firstWord;
-(BOOL)_isWhitespace;
@end

@interface XXUnknownSuperclass (Eliminate_Brackets)
-(id)_withoutBracketedWords;
@end
