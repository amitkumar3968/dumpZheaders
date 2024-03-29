/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

#import "GenericProduction.h"

@class NSString, NSArray, NSDictionary;

@interface ConditionalProduction : GenericProduction {
	NSString* _delimiter;
	NSArray* _signature;
	NSDictionary* _expansions;
}
@property(readonly, assign) NSDictionary* expansions;	// @synthesize=_expansions
@property(readonly, assign) NSArray* signature;	// @synthesize=_signature
@property(readonly, assign) NSString* delimiter;	// @synthesize=_delimiter
// declared property getter: -(id)expansions;
// declared property getter: -(id)delimiter;
// declared property getter: -(id)signature;
-(id)description;
-(void)dealloc;
-(id)initFromPlist:(id)plist;
@end

