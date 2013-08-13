/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, GrammarPart;

@interface Parser : XXUnknownSuperclass {
	NSMutableArray* _productionRules;
	NSMutableDictionary* _grammarsPlist;
	bool _debugging;
	GrammarPart* _theGrammar;
}
@property(readonly, assign) NSMutableArray* productionRules;	// @synthesize=_productionRules
+(id)retrievePlistForPathArray:(id)pathArray from:(id)from;
+(id)retrievePlistForStringInDotNotation:(id)dotNotation from:(id)from;
+(BOOL)insertStatementsFromOriginal:(id)original intoBranch:(id)branch;
+(id)loadGrammarsFromPlistAtPath:(id)path;
// declared property getter: -(id)productionRules;
-(void)dealloc;
-(id)resultOfRulesAppliedTo:(id)to;
-(id)resultOfRulesAppliedToStrings:(id)strings;
-(void)setGrammar:(id)grammar;
-(id)initWithPlistAtPath:(id)path grammar:(id)grammar;
@end

