/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSCharacterSet, AXDialectMap, NSString, NSArray, NSLocale;

@interface AXLanguageManager : NSObject {
@private
	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;
}
@property(assign, nonatomic) AXDialectMap* dialectForCurrentLocale;
@property(assign, nonatomic) AXDialectMap* dialectForSystemLanguage;
@property(retain, nonatomic) NSCharacterSet* commonCharacters;	// @synthesize=_commonCharacters
@property(copy, nonatomic) NSLocale* userLocale;	// @synthesize=_userLocale
@property(readonly, assign, nonatomic) NSString* systemLanguageID;
@property(retain, nonatomic) NSArray* langMaps;	// @synthesize=_langMaps
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)basicCharacters;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)emojiDescriptions;
+(id)commonPunctuationCharacters;
+(id)nonlocalizedNameForLanguage:(id)language;
+(id)sharedInstance;
// declared property setter: -(void)setUserLocale:(id)locale;
// declared property getter: -(id)userLocale;
// declared property setter: -(void)setCommonCharacters:(id)characters;
// declared property getter: -(id)commonCharacters;
// declared property setter: -(void)setLangMaps:(id)maps;
// declared property getter: -(id)langMaps;
-(void)_handleUserLocaleDidChange:(id)_handleUserLocale;
-(id)_loadLangMaps;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(id)descriptionOfWord:(id)word forLanguage:(id)language;
-(void)updateCachedDialects;
-(BOOL)isCharacterCommon:(unsigned short)common;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(id)dialectThatCanSpeakCharacter:(unsigned short)character;
-(id)dialectForLanguageID:(id)languageID;
// declared property setter: -(void)setDialectForCurrentLocale:(id)currentLocale;
// declared property getter: -(id)dialectForCurrentLocale;
// declared property setter: -(void)setDialectForSystemLanguage:(id)systemLanguage;
// declared property getter: -(id)dialectForSystemLanguage;
// declared property getter: -(id)systemLanguageID;
-(id)debugDescription;
-(id)basicDescription;
-(id)description;
-(void)dealloc;
-(id)init;
@end

