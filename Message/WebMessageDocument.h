/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFWebAttachmentSource.h"

@class NSURL, MimeBody, MimePart, MFLock, NSMutableDictionary, NSData;

@interface WebMessageDocument : MFWebAttachmentSource {
@private
	unsigned _uniqueId;
	NSURL* _baseURL;
	MimeBody* _mimeBody;
	MimePart* _htmlPart;
	NSData* _htmlData;
	MFLock* _lock;
	NSMutableDictionary* _partsByURL;
	NSMutableDictionary* _partsByFilename;
	unsigned long _preferredEncoding;
}
@property(assign) unsigned long preferredEncoding;	// @synthesize=_preferredEncoding
@property(readonly, assign) NSData* htmlData;	// @synthesize=_htmlData
@property(readonly, assign) MimePart* mimePart;	// @synthesize=_htmlPart
@property(readonly, assign) MimeBody* mimeBody;	// @synthesize=_mimeBody
@property(readonly, assign) NSURL* baseURL;	// @synthesize=_baseURL
+(id)sourceForURL:(id)url;
// declared property setter: -(void)setPreferredEncoding:(unsigned long)encoding;
// declared property getter: -(unsigned long)preferredEncoding;
// declared property getter: -(id)htmlData;
// declared property getter: -(id)mimePart;
// declared property getter: -(id)mimeBody;
// declared property getter: -(id)baseURL;
-(id)fileWrapper;
-(id)preferredCharacterSet;
-(id)attachmentsInDocument;
-(id)attachmentForURL:(id)url;
-(id)mimePartForURL:(id)url;
-(void)dealloc;
-(id)initWithMimePart:(id)mimePart htmlData:(id)data encoding:(unsigned long)encoding;
-(id)initWithMimePart:(id)mimePart;
-(id)_initWithMimePart:(id)mimePart htmlData:(id)data;
-(id)initWithMimeBody:(id)mimeBody;
-(id)init;
@end

