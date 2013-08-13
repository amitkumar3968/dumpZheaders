/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

#import "ScreenReaderOutputServer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSBundle;
@protocol SCROBrailleTranslatorProtocol;

@interface SCROBrailleTranslationManager : XXUnknownSuperclass {
	NSLock* _contentLock;
	id<SCROBrailleTranslatorProtocol> _translator;
	NSBundle* _translatorBundle;
	BOOL _tableSupportsContractedBraille;
	BOOL _tableSupportsEightDotBraille;
	id<SCROBrailleTranslatorProtocol> _auxTranslator;
	NSBundle* _auxTranslatorBundle;
	BOOL _auxTableSupportsContractedBraille;
	BOOL _auxTableSupportsEightDotBraille;
}
@property(readonly, assign, nonatomic) BOOL auxiliaryTableSupportsEightDotBraille;	// @synthesize=_auxTableSupportsEightDotBraille
@property(readonly, assign, nonatomic) BOOL auxiliaryTableSupportsContractedBraille;	// @synthesize=_auxTableSupportsContractedBraille
@property(readonly, assign, nonatomic) BOOL primaryTableSupportsEightDotBraille;	// @synthesize=_tableSupportsEightDotBraille
@property(readonly, assign, nonatomic) BOOL primaryTableSupportsContractedBraille;	// @synthesize=_tableSupportsContractedBraille
+(id)allocWithZone:(NSZone*)zone;
+(void)initialize;
+(id)sharedManager;
// declared property getter: -(BOOL)auxiliaryTableSupportsEightDotBraille;
// declared property getter: -(BOOL)auxiliaryTableSupportsContractedBraille;
// declared property getter: -(BOOL)primaryTableSupportsEightDotBraille;
// declared property getter: -(BOOL)primaryTableSupportsContractedBraille;
-(id)textForPrintBraille:(id)printBraille primaryTable:(BOOL)table contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
-(id)textForPrintBraille:(id)printBraille contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
-(id)printBrailleForText:(id)text primaryTable:(BOOL)table contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
-(id)printBrailleForText:(id)text contracted:(BOOL)contracted eightDot:(BOOL)dot locations:(id*)locations;
-(id)auxiliaryTableIdentifier;
-(void)setAuxiliaryTranslationTableWithTableIdentifier:(id)tableIdentifier;
-(id)primaryTableIdentifier;
-(void)setPrimaryTranslationTableWithTableIdentifier:(id)tableIdentifier;
-(void)dealloc;
-(id)autorelease;
-(oneway void)release;
-(unsigned)retainCount;
-(id)retain;
-(id)copyWithZone:(NSZone*)zone;
-(id)init;
@end
