/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface WMListLevelTextMapper : XXUnknownSuperclass {
@private
	NSMutableArray* m_tokens;
	int m_format;
	unsigned m_initNumber;
}
-(id)listLevelTextforOutline:(id)outline;
-(void)dealloc;
-(id)initWithText:(id)text format:(int)format initNumber:(int)number;
-(id)initWithText:(id)text;
-(id)initWithText:(id)text format:(int)format;
-(id)token:(unsigned)token;
-(unsigned)tokenCount;
@end

