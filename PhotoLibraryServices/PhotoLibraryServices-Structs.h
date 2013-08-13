/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

typedef struct _NSZone NSZone;

typedef struct CGContext* CGContextRef;

typedef struct NSObject {
	Class _field1;
} NSObject;

typedef struct {
	unsigned long _field1;
	id* _field2;
	unsigned long* _field3;
	unsigned long _field4[5];
} XXStruct_kFm5bA;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct __CFString* CFStringRef;

typedef struct CGImage* CGImageRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct __CFArray* CFArrayRef;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct {
	double _field1;
	double _field2;
} XXStruct_UNJ7RC;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct {
	XXStruct_UNJ7RC _field1;
	XXStruct_UNJ7RC _field2;
} XXStruct_03F4WD;

typedef struct CGAffineTransform {
	float _field1;
	float _field2;
	float _field3;
	float _field4;
	float _field5;
	float _field6;
} CGAffineTransform;

@class NSMutableSet;
typedef struct changeList_s {
	NSMutableSet* inserted;
	NSMutableSet* updated;
	NSMutableSet* deleted;
} changeList_s;

@class NSMutableArray;
typedef struct contentChanges_s {
	NSMutableArray* container;
	NSMutableArray* updatedContent;
} contentChanges_s;

typedef struct {
	int _field1;
	CGSize _field2;
	CGRect _field3;
	CGRect _field4;
	unsigned _field5;
	int _field6;
	int _field7;
	float _field8[4];
	float _field9[4];
	unsigned _field10;
} XXStruct_$0eoVA;

typedef struct __CFSet* CFSetRef;

typedef struct flock {
	long long _field1;
	long long _field2;
	int _field3;
	short _field4;
	short _field5;
} flock;

typedef struct PLImageTableEntryFooter_s {
	struct {
		unsigned char _field1;
		unsigned char _field2;
		unsigned char _field3;
		unsigned char _field4;
		unsigned char _field5;
		unsigned char _field6;
		unsigned char _field7;
		unsigned char _field8;
		unsigned char _field9;
		unsigned char _field10;
		unsigned char _field11;
		unsigned char _field12;
		unsigned char _field13;
		unsigned char _field14;
		unsigned char _field15;
		unsigned char _field16;
	} _field1;
	unsigned _field2;
	unsigned _field3;
	int _field4;
} PLImageTableEntryFooter_s;


