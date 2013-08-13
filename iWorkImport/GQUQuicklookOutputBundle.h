/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : XXUnknownSuperclass <GQUOutputBundle> {
@private
	CFDictionaryRef mQuicklookProperties;
	CFDictionaryRef mAttachments;
	CFDataRef mMainHtmlData;
	CFStringRef mUriScheme;
	CFStringRef mUuidStr;
}
-(void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;
-(void)setDocumentSize:(CGSize)size;
-(BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;
-(BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;
-(CFStringRef)createUriForResource:(CFStringRef)resource;
-(BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;
-(CFDictionaryRef)quicklookDictionary;
-(CFDataRef)mainHtmlData;
-(void)dealloc;
-(id)initWithUriScheme:(CFStringRef)uriScheme;
-(id)init;
@end
