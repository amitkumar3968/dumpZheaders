/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Search.framework/Search
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableString, NSString, NSNumber;

@interface SPPhoneticEncoder : XXUnknownSuperclass {
	NSString* _source;
	NSMutableString* _primary;
	NSMutableString* _alternate;
	int _idx;
	NSNumber* _slavoGermanic;
}
-(id)codesForString:(id)string;
-(BOOL)isAnyString:(id)string atIndex:(int)index;
-(BOOL)isVowelAtIndex:(int)index;
-(void)addPrimary:(id)primary alternate:(id)alternate;
-(void)add:(id)add;
-(BOOL)isSlavoGermanic;
@end

