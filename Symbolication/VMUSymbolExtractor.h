/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface VMUSymbolExtractor : XXUnknownSuperclass {
	NSMutableArray* _symbols;
	NSMutableArray* _sourceInfos;
}
@property(readonly, retain) NSMutableArray* symbols;	// converted property
@property(readonly, retain) NSMutableArray* sourceInfos;	// converted property
+(id)expandSourceInfos:(id)infos usingSymbols:(id)symbols;
+(id)extractSymbolOwnerFromHeader:(id)header;
+(id)extractLazySymbolOwnerFromHeader:(id)header;
+(unsigned)extractSymbolOwnerFlagsFromHeader:(id)header;
-(void)dealloc;
// converted property getter: -(id)sourceInfos;
// converted property getter: -(id)symbols;
-(id)init;
@end

