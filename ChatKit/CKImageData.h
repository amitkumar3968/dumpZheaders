/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "ChatKit-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, NSString, NSData;

@interface CKImageData : XXUnknownSuperclass {
	CGImageSourceRef _imageSource;
	unsigned _count;
	int _orientation;
@private
	NSData* _data;
}
@property(readonly, assign, nonatomic) unsigned count;	// @dynamic
@property(readonly, assign, nonatomic) UIImage* image;	// @dynamic
@property(readonly, assign, nonatomic) int orientation;	// @dynamic
@property(readonly, assign, nonatomic) NSString* MIMEType;	// @dynamic
@property(readonly, assign, nonatomic) NSString* UTIType;	// @dynamic
@property(readonly, assign, nonatomic) CGSize pxSize;	// @dynamic
@property(readonly, assign, nonatomic) CGSize ptSize;	// @dynamic
@property(retain, nonatomic) NSData* data;	// @synthesize=_data
+(id)MIMETypeForData:(id)data;
// declared property setter: -(void)setData:(id)data;
// declared property getter: -(id)data;
-(id)_thumbnailFitToSize:(CGSize)size atIndex:(unsigned)index;
// declared property getter: -(unsigned)count;
// declared property getter: -(int)orientation;
// declared property getter: -(CGSize)pxSize;
// declared property getter: -(CGSize)ptSize;
// declared property getter: -(id)UTIType;
// declared property getter: -(id)MIMEType;
-(id)durationsWithMaxCount:(unsigned)maxCount;
-(id)thumbnailsFitToSize:(CGSize)size maxCount:(unsigned)count;
-(id)thumbnailFitToSize:(CGSize)size;
// declared property getter: -(id)image;
-(void)dealloc;
-(id)initWithData:(id)data;
@end
