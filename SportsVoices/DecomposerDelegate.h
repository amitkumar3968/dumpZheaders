/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "DecomposerDelegateProtocol.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary;

@interface DecomposerDelegate : XXUnknownSuperclass <DecomposerDelegateProtocol> {
	NSDictionary* _overridesForWhole;
	NSDictionary* _overridesForParts;
}
-(void)dealloc;
-(id)decomposer:(id)decomposer decompositionOf:(id)of isSubsetOfWhole:(BOOL)whole;
-(id)initWithWholeOverrides:(id)wholeOverrides partOverrides:(id)overrides;
@end

