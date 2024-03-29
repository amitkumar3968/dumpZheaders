/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import "XMLHTTPRequest.h"

@class SymbolParserData, NSMutableArray;
@protocol SymbolValidatorDelegate;

@interface SymbolValidator : XMLHTTPRequest {
	id<SymbolValidatorDelegate> _delegate;
	NSMutableArray* _validatedSymbols;
	SymbolParserData* _symbolParserData;
}
@property(assign, nonatomic) __weak id delegate;	// @synthesize=_delegate
// declared property setter: -(void)setDelegate:(id)delegate;
// declared property getter: -(id)delegate;
-(void).cxx_destruct;
-(id)aggregateDictionaryDomain;
-(void)failWithError:(id)error;
-(void)didParseData;
-(int)parseData:(id)data;
-(void)cancel;
-(void)validateSymbol:(id)symbol withMaxResults:(int)maxResults;
-(id)initWithDelegate:(id)delegate;
@end

