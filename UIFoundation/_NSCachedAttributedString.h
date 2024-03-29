/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIFoundation-Structs.h"

@class NSAttributeDictionary;

__attribute__((visibility("hidden")))
@interface _NSCachedAttributedString : XXUnknownSuperclass {
@private
	id _contents;
	NSAttributeDictionary* _baseAttributes;
	long _length;
	unsigned long _hashValue;
	XXStruct_lMgBbA* _runs;
	long _numRuns;
	long _allocedRunsSize;
	long _numHits;
}
+(void)initialize;
+(id)allocWithZone:(NSZone*)zone;
-(id)copyCachedInstance;
-(void)cache;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(BOOL)_baselineMode;
-(BOOL)_isStringDrawingTextStorage;
-(void)setAttributes:(id)attributes range:(NSRange)range;
-(id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange*)range inRange:(NSRange)range3;
-(id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange*)range;
-(id)string;
-(unsigned)length;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)initWithString:(id)string;
-(id)initWithString:(id)string attributes:(id)attributes;
-(id)initWithAttributedString:(id)attributedString;
-(oneway void)release;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
@end

