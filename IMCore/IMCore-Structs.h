/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

typedef struct _NSZone NSZone;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct _FZChatRoomValidity {
	int _field1;
	unsigned short _field2;
} FZChatRoomValidity;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct __CFPhoneNumber* CFPhoneNumberRef;

typedef struct __CFRuntimeBase {
	unsigned _field1;
	unsigned char _field2[4];
} CFRuntimeBase;

typedef struct __DDLRTable* DDLRTableRef;

typedef struct __DDLexer* DDLexerRef;

typedef struct __DDLookupTable* DDLookupTableRef;

typedef struct __DDCache* DDCacheRef;

typedef struct __DDTokenCache* DDTokenCacheRef;

typedef struct __DDLexemCache* DDLexemCacheRef;

typedef struct __DDScanQuery* DDScanQueryRef;

typedef struct __CFArray* CFArrayRef;

typedef struct __DDScanner {
	CFRuntimeBase _field1;
	DDLRTableRef _field2;
	DDLexerRef _field3;
	DDLookupTableRef _field4;
	DDCacheRef _field5;
	DDTokenCacheRef _field6;
	DDLexemCacheRef _field7;
	DDScanQueryRef _field8;
	DDScanQueryRef _field9;
	CFArrayRef _field10;
	CFArrayRef _field11;
	int _field12;
	int _field13;
	int _field14;
	char* _field15;
	id _field16;
	/*function-pointer*/ void _field17;
	unsigned _field18 : 1;
	unsigned _field19 : 1;
} DDScanner;


