/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import "ProofReader-Structs.h"
#import <Foundation/NSCharacterSet.h>

@class NSMutableDictionary, NSData, NSString, NSArray, NSMutableArray, NSMutableSet;

@interface AppleSpell : NSCharacterSet {
	void* _proofReaderConnection;
	CFDictionaryRef _databaseConnections;
	NSMutableDictionary* _bindicts;
	NSData* _globalBindictData;
	NSData* _globalNegBindictData;
	NSMutableDictionary* _autocorrections;
	NSString* _lastLanguage;
	NSArray* _userPreferredLanguages;
	NSMutableDictionary* _learnedResponses;
	NSMutableArray* _diagnosticInfo;
	NSMutableSet* _foundNames;
	double _lastFindNames;
	NSMutableDictionary* _lastSampleCollected;
	unsigned _numberOfSamplesCollected;
	double _lastSampleCollection;
	NSMutableArray* _retainedSamples;
	NSMutableDictionary* _lastSampleRecorded;
	double _lastSampleRecording;
	BOOL _userPrefersUncheckedLatinLanguage;
}
@property(readonly, retain) NSData* globalBindictData;	// converted property
-(id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString language:(id)language;
-(id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString language:(id)language;
-(id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString language:(id)language;
-(id)spellServer:(id)server stringForInputString:(id)inputString language:(id)language;
-(id)spellServer:(id)server suggestWordWithLengthInRange:(NSRange)range language:(id)language;
-(id)spellServer:(id)server suggestCompletionsForPartialWordRange:(NSRange)partialWordRange inString:(id)string language:(id)language;
-(id)spellServer:(id)server suggestGuessesForWordRange:(NSRange)wordRange inString:(id)string language:(id)language;
-(id)spellServer:(id)server checkString:(id)string offset:(unsigned)offset types:(unsigned long long)types options:(id)options orthography:(id)orthography wordCount:(int*)count;
-(NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int*)count countOnly:(BOOL)only correction:(id*)correction;
-(NSRange)spellServer:(id)server findMisspelledWordInString:(id)string language:(id)language wordCount:(int*)count countOnly:(BOOL)only;
-(NSRange)spellServer:(id)server findMisspelledWordInString:(id)string range:(NSRange)range languages:(id)languages orthography:(id)orthography checkOrthography:(BOOL)orthography6 mutableResults:(id)results offset:(unsigned)offset autocorrect:(BOOL)autocorrect keyEventData:(id)data appIdentifier:(id)identifier wordCount:(int*)count countOnly:(BOOL)only correction:(id*)correction;
-(id)_orthographyByModifyingOrthography:(id)orthography withLatinLanguage:(id)latinLanguage;
-(NSRange)spellServer:(id)server checkGrammarInString:(id)string language:(id)language details:(id*)details;
-(NSRange)spellServer:(id)server checkGrammarInString:(id)string range:(NSRange)range language:(id)language orthography:(id)orthography mutableResults:(id)results offset:(unsigned)offset details:(id*)details;
-(BOOL)_checkGrammarInString:(id)string range:(NSRange)range language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender bufIO:(PR_BUF_IO*)io errorRange:(NSRange*)range7 details:(id*)details;
-(BOOL)validateWordBuffer:(char*)buffer length:(unsigned)length language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender checkBase:(BOOL)base checkDict:(BOOL)dict checkNames:(BOOL)names checkHyphens:(BOOL)hyphens checkIntercaps:(BOOL)intercaps checkOptions:(BOOL)options depth:(unsigned)depth;
-(BOOL)validateAbbreviationOrNumberWordBuffer:(char*)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding connection:(PR_DB_IO*)connection sender:(id)sender;
-(BOOL)validateWordPrefixBuffer:(char*)buffer length:(unsigned)length connection:(PR_DB_IO*)connection;
-(BOOL)validateWordBuffer:(char*)buffer length:(unsigned)length connection:(PR_DB_IO*)connection;
-(BOOL)globalCheckNegativeWordBuffer:(char*)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;
-(BOOL)globalCheckWordBuffer:(char*)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding;
-(BOOL)checkWordBuffer:(char*)buffer length:(unsigned)length language:(id)language encoding:(unsigned long)encoding index:(unsigned)index;
-(id)autocorrectionDictionaryForLanguage:(id)language;
-(id)globalNegativeBindictData;
// converted property getter: -(id)globalBindictData;
-(id)bindictDataForLanguage:(id)language index:(unsigned)index;
-(PR_DB_IO*)databaseConnectionForLanguage:(id)language;
-(unsigned long)encodingForLanguage:(id)language;
-(id)fallbackLocalizationForLanguage:(id)language;
-(id)localizationForLanguage:(id)language;
-(id)localizationsForLanguage:(id)language;
-(id)bundle;
-(id)init;
-(void)resetTimer;
-(void)timeout:(id)timeout;
-(BOOL)_checkEnglishGrammarInString:(id)string range:(NSRange)range indexIntoBuffer:(unsigned)buffer bufferLength:(unsigned)length language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender bufIO:(PR_BUF_IO*)io retval:(int*)retval errorRange:(NSRange*)range10 details:(id*)details;
-(id)_detailWithRange:(NSRange)range description:(id)description corrections:(id)corrections;
-(id)_correctionForSuggestedPhrase:(const char*)suggestedPhrase originalBuffer:(const char*)buffer length:(unsigned)length;
-(id)_modifiedGrammarDescriptionForDescription:(id)description;
-(id)_crudePreviousWordInString:(id)string inRange:(NSRange)range;
-(id)_crudePreviousWordInString:(id)string inRange:(NSRange)range precededBy:(id*)by;
-(id)_crudeNextWordInString:(id)string inRange:(NSRange)range;
-(BOOL)onNoContractionList:(id)list language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender;
-(BOOL)onContractionList:(id)list language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender;
-(BOOL)looksLikeParticiple:(id)participle language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender;
-(BOOL)looksLikeAdverb:(id)adverb language:(id)language connection:(PR_DB_IO*)connection sender:(id)sender;
-(BOOL)looksLikeArticledNoun:(id)noun language:(id)language connection:(PR_DB_IO*)connection;
-(id)spellServer:(id)server suggestWordWithMinimumLength:(unsigned)minimumLength maximumLength:(unsigned)length language:(id)language;
-(id)spellServer:(id)server suggestCompletionsForPartialWord:(id)partialWord inLanguage:(id)language;
-(id)spellServer:(id)server suggestGuessesForWord:(id)word inLanguage:(id)language;
-(id)_correctionForString:(id)string range:(NSRange)range inString:(id)string3 tagger:(id)tagger taggerIndex:(unsigned)index dictionary:(id)dictionary language:(id)language connection:(PR_DB_IO*)connection keyEventData:(id)data;
-(id)_japaneseCorrectionForString:(id)string connection:(PR_DB_IO*)connection;
-(id)spellServer:(id)server prefixesForPinyinInputString:(id)pinyinInputString;
-(id)spellServer:(id)server extendedAlternativesForPinyinInputString:(id)pinyinInputString;
-(id)spellServer:(id)server alternativesForPinyinInputString:(id)pinyinInputString;
-(id)spellServer:(id)server _retainedAlternativesForPinyinInputString:(id)pinyinInputString extended:(BOOL)extended;
-(id)_recursiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString depth:(unsigned)depth;
-(id)_retainedAlternativesByCombiningAlternatives:(id)alternatives withAlternatives:(id)alternatives2;
-(id)_pinyinStringByCombiningPinyinString:(id)string withPinyinString:(id)pinyinString;
-(unsigned)_getSplitIndexes:(unsigned*)indexes maxCount:(unsigned)count forPinyinInputString:(id)pinyinInputString;
-(id)_primitiveRetainedAlternativesForPinyinInputString:(id)pinyinInputString restricted:(BOOL)restricted;
-(void)addModifiedPartialPinyinToArray:(id)array connection:(PR_DB_IO*)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 prePrevPrevIndex:(unsigned)index6 startingModificationsAt:(unsigned)at inBuffer:(char*)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score12 prevPrevScore:(unsigned)score13 lastSyllableScore:(unsigned)score14;
-(void)addModifiedPinyinToArray:(id)array connection:(PR_DB_IO*)connection fromIndex:(unsigned)index prevIndex:(unsigned)index4 prevPrevIndex:(unsigned)index5 startingModificationsAt:(unsigned)at inBuffer:(char*)buffer length:(unsigned)length initialSyllableCount:(unsigned)count initialScore:(unsigned)score prevScore:(unsigned)score11 prevPrevScore:(unsigned)score12 lastSyllableScore:(unsigned)score13 couldBeAbbreviatedPinyin:(BOOL)pinyin;
-(void)addSpecialModifiedPinyinToArray:(id)array inBuffer:(char*)buffer length:(unsigned)length atEnd:(BOOL)end;
-(id)englishStringFromWordBuffer:(char*)wordBuffer length:(unsigned)length connection:(PR_DB_IO*)connection ignoreLength:(BOOL)length4;
@end

