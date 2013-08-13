/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PLImageTable, NSString, NSMutableArray;

@interface PLTemporaryImageTable : XXUnknownSuperclass {
	PLImageTable* _imageTable;
	unsigned _nextTableEntryIndex;
	NSMutableArray* _itemIndexToThumbEntryMapping;
@private
	NSString* _imageTablePath;
	int _imageFormat;
}
-(void)dealloc;
-(void)reset;
-(void)_cleanup;
-(void)removeItemAtIndex:(unsigned)index;
-(void)insertItemAtIndex:(unsigned)index;
-(id)imageForItemAtIndex:(unsigned)index;
-(id)dataForItemAtIndex:(unsigned)index widthOut:(int*)anOut heightOut:(int*)anOut3 bytesPerRowOut:(int*)anOut4 dataWidthOut:(int*)anOut5 dataHeightOut:(int*)anOut6 imageDataOffset:(int*)offset;
-(unsigned)_imageTableIndexForItemIndex:(unsigned)itemIndex;
-(void)setImage:(id)image videoDuration:(id)duration forItemAtIndex:(unsigned)index;
-(id)initWithWithPath:(id)path imageFormat:(int)format;
@end

