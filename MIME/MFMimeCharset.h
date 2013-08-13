/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface MFMimeCharset : XXUnknownSuperclass {
	unsigned long _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;
}
@property(readonly, assign) unsigned long encoding;	// converted property
@property(readonly, retain) NSString* primaryLanguage;	// converted property
@property(readonly, retain) NSString* charsetName;	// converted property
+(id)preferredMimeCharset;
+(id)charsetForEncoding:(unsigned long)encoding;
+(id)allMimeCharsets;
+(id)allMimeCharsets:(BOOL)charsets;
-(id)description;
// converted property getter: -(id)primaryLanguage;
-(id)displayName;
-(BOOL)useBase64InHeaders;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)canBeUsedForOutgoingMessages;
// converted property getter: -(id)charsetName;
// converted property getter: -(unsigned long)encoding;
-(void)dealloc;
-(void)_setPrimaryLanguage:(id)language;
-(id)initWithEncoding:(unsigned long)encoding;
@end
