/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
@private
	id _value;
	NSString* _transformFunction;
	int _comparison;
	BOOL _caseInsensitive;
	BOOL _treatNullAsBlank;
}
@property(readonly, assign, nonatomic) NSString* operator;
@property(copy, nonatomic) NSString* transformFunction;	// @synthesize=_transformFunction
@property(assign, nonatomic) BOOL treatNullAsBlank;	// @synthesize=_treatNullAsBlank
@property(assign, nonatomic) BOOL caseInsensitive;	// @synthesize=_caseInsensitive
@property(assign, nonatomic) int comparison;	// @synthesize=_comparison
@property(retain, nonatomic) id value;	// @synthesize=_value
+(id)predicateWithProperty:(id)property equalToValue:(id)value;
+(id)predicateWithProperty:(id)property equalToInteger:(int)integer;
+(id)predicateWithProperty:(id)property equalToInt64:(long long)int64;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison transformFunction:(id)function;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive treatNullAsBlank:(BOOL)blank;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive;
+(id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison;
// declared property setter: -(void)setTransformFunction:(id)function;
// declared property getter: -(id)transformFunction;
// declared property setter: -(void)setTreatNullAsBlank:(BOOL)blank;
// declared property getter: -(BOOL)treatNullAsBlank;
// declared property setter: -(void)setCaseInsensitive:(BOOL)insensitive;
// declared property getter: -(BOOL)caseInsensitive;
// declared property setter: -(void)setComparison:(int)comparison;
// declared property getter: -(int)comparison;
// declared property setter: -(void)setValue:(id)value;
// declared property getter: -(id)value;
-(void).cxx_destruct;
-(void)bindToStatement:(id)statement bindingIndex:(inout int*)index;
-(void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;
// declared property getter: -(id)operator;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)encodeWithCoder:(id)coder;
-(id)initWithCoder:(id)coder;
-(id)initWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive transformFunction:(id)function treatNullAsBlank:(BOOL)blank;
@end
