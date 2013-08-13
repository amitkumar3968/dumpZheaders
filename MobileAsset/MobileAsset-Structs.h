/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

typedef struct __CFRuntimeBase {
	unsigned _field1;
	unsigned char _field2[4];
} CFRuntimeBase;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __MobileAssetQuery MobileAssetQuery;

typedef struct SoftwareUpdateProperties SoftwareUpdateProperties;

typedef struct __MobileAsset {
	CFRuntimeBase _field1;
	CFStringRef _field2;
	CFDictionaryRef _field3;
	MobileAssetQuery* _field4;
	MobileAssetQuery* _field5;
	unsigned char _field6;
	unsigned char _field7;
	SoftwareUpdateProperties* _field8;
	unsigned _field9;
} MobileAsset;


