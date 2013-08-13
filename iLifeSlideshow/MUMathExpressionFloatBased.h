/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
 */

#import "iLifeSlideshow-Structs.h"
#import "MUMathExpressionBase.h"


@interface MUMathExpressionFloatBased : MUMathExpressionBase {
	FunctionInterpreter<float>* mInterpreter;
}
+(float)invalidResult;
+(float)evaluateString:(id)string error:(id*)error;
-(BOOL)isValueIllegal:(float)illegal;
-(BOOL)isConstant;
-(id)stringValue;
-(float)evaluate;
-(void)resetAllVariables;
-(void)replaceVariable:(id)variable withValue:(float)value;
-(void)setVariableValues:(id)values;
-(float)valueForVariable:(id)variable;
-(void)setValue:(float)value forVariable:(id)variable;
-(void)_resetVariableIndicies;
-(void)cleanup;
-(void)finalize;
-(void)dealloc;
-(id)initWithString:(id)string error:(id*)error;
-(id)init;
@end
