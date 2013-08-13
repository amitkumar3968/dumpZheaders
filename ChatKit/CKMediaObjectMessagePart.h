/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import "CKMessagePart.h"

@class NSArray, CKMediaObject, NSData;

@interface CKMediaObjectMessagePart : CKMessagePart {
	CKMediaObject* _mediaObject;
	NSArray* _composeImages;
	NSData* _previewData;
	NSData* _composeData;
	NSData* _dataForHighlight;
}
@property(readonly, assign, nonatomic) CKMediaObject* mediaObject;	// @synthesize=_mediaObject
@property(copy, nonatomic) NSArray* composeImages;	// @synthesize=_composeImages
// declared property getter: -(id)mediaObject;
// declared property setter: -(void)setComposeImages:(id)images;
-(void)dealloc;
-(int)type;
-(void)copyToPasteboard;
-(int)_orientation;
-(BOOL)isDisplayable;
// declared property getter: -(id)composeImages;
-(id)initWithMediaObject:(id)mediaObject;
-(id)detachedCopy;
@end
