/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ChatKit-Structs.h"

@class NSMutableString;

@interface CKMessageEncodingInfo : XXUnknownSuperclass {
@private
	NSMutableString* _mutableText;
	BOOL _infoCalculated;
	int _characterCountNumerator;
	int _characterCountDenominator;
}
@property(assign, nonatomic) int characterCountDenominator;	// @synthesize=_characterCountDenominator
@property(assign, nonatomic) int characterCountNumerator;	// @synthesize=_characterCountNumerator
@property(assign, nonatomic) BOOL infoCalculated;	// @synthesize=_infoCalculated
// declared property setter: -(void)setInfoCalculated:(BOOL)calculated;
// declared property getter: -(BOOL)infoCalculated;
// declared property setter: -(void)setCharacterCountDenominator:(int)denominator;
// declared property setter: -(void)setCharacterCountNumerator:(int)numerator;
-(void)updateByReloadingFromComposition:(id)composition replacementRange:(NSRange)range replacementText:(id)text;
-(void)_calculateInfoIfNecessary;
-(void)calculateInfo;
// declared property getter: -(int)characterCountDenominator;
// declared property getter: -(int)characterCountNumerator;
-(void)dealloc;
-(id)initWithContentsOfComposition:(id)composition;
@end

