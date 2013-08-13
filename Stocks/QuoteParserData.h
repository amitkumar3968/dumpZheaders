/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSMutableData.h>

@class NSString, Stock, NSArray, NSMutableDictionary;

@interface QuoteParserData : NSMutableData {
	int state;
	double timeUpdated;
	int responseListCount;
	BOOL metadataParser;
@private
	NSArray* _requestStocks;
	NSString* _bufferString;
	Stock* _stock;
	NSMutableDictionary* _dictionary;
}
@property(retain, nonatomic) NSArray* requestStocks;	// @synthesize=_requestStocks
@property(retain, nonatomic) NSString* bufferString;	// @synthesize=_bufferString
@property(retain, nonatomic) NSMutableDictionary* dictionary;	// @synthesize=_dictionary
@property(retain, nonatomic) Stock* stock;	// @synthesize=_stock
// declared property setter: -(void)setDictionary:(id)dictionary;
// declared property getter: -(id)dictionary;
// declared property setter: -(void)setStock:(id)stock;
// declared property getter: -(id)stock;
// declared property setter: -(void)setBufferString:(id)string;
// declared property getter: -(id)bufferString;
// declared property setter: -(void)setRequestStocks:(id)stocks;
// declared property getter: -(id)requestStocks;
-(void).cxx_destruct;
@end
