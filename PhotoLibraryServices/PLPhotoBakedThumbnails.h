/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import "PhotoLibraryServices-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSData, NSMutableArray, NSMutableDictionary;

@interface PLPhotoBakedThumbnails : XXUnknownSuperclass {
	int _format;
	int _singleThumbnailImageLength;
	int _count;
	BOOL _dataIsMutable;
	NSData* _thumbnailData;
	NSMutableArray* _thumbnailImages;
	NSMutableDictionary* _options;
	NSData* _optionsData;
	BOOL _optionsAccessed;
	BOOL _missingHeader;
	CGSize _size;
}
@property(readonly, assign, nonatomic) CGRect imageRect;
@property(readonly, assign, nonatomic) unsigned bitmapInfo;
@property(readonly, assign, nonatomic) int bytesPerPixel;
@property(readonly, assign, nonatomic) int bitsPerComponent;
@property(readonly, assign, nonatomic) CGSize size;
@property(readonly, assign, nonatomic) NSData* optionsData;
@property(readonly, assign, nonatomic) NSMutableDictionary* options;
@property(readonly, assign, nonatomic) int format;
@property(readonly, assign) int count;	// converted property
+(BOOL)saveBakedThumbnailsOfImages:(id)images toFile:(id)file format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
+(id)thumbnailsWithContentsOfFile:(id)file format:(int)format;
-(id)_thumbnailData;
-(BOOL)writeBorderedThumbnailOfImage:(CGImageRef)image toBuffer:(void*)buffer orientation:(int*)orientation format:(int)format formatInfo:(const XXStruct_$0eoVA*)info delegate:(id)delegate;
// declared property getter: -(CGRect)imageRect;
// declared property getter: -(unsigned)bitmapInfo;
// declared property getter: -(CGSize)size;
// declared property getter: -(int)bytesPerPixel;
// declared property getter: -(int)bitsPerComponent;
// declared property getter: -(id)optionsData;
// declared property getter: -(id)options;
// declared property getter: -(int)format;
-(CGImageRef)thumbnailImageAtIndex:(int)index;
-(char*)thumbnailBytesAtIndex:(int)index;
-(unsigned long)thumbnailLength;
-(id)thumbnailDataAtIndex:(int)index;
// converted property getter: -(int)count;
-(BOOL)saveToFile:(id)file;
-(id)serializedData;
-(id)description;
-(void)dealloc;
-(id)initWithImages:(id)images format:(int)format orientation:(int*)orientation options:(id)options delegate:(id)delegate;
-(id)initWithContentsOfFile:(id)file format:(int)format;
-(id)initWithContentsOfFile:(id)file format:(int)format readOnly:(BOOL)only;
-(id)initWithData:(id)data format:(int)format;
-(id)initWithData:(id)data format:(int)format readOnly:(BOOL)only;
@end

