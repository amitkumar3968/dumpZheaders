/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFLock, NSMutableDictionary;

@interface MFWebAttachmentSource : XXUnknownSuperclass {
@private
	MFLock* _attachmentsLock;
	NSMutableDictionary* _attachmentsByURL;
	NSMutableDictionary* _removedAttachmentsByURL;
}
@property(assign) BOOL keepRemovedAttachments;
+(id)allSources;
-(void)removeAttachmentForURL:(id)url;
-(BOOL)setAttachment:(id)attachment forURL:(id)url;
-(id)attachmentForURL:(id)url includeRemoved:(BOOL)removed;
-(id)attachmentForURL:(id)url;
// declared property setter: -(void)setKeepRemovedAttachments:(BOOL)attachments;
// declared property getter: -(BOOL)keepRemovedAttachments;
-(void)dealloc;
-(id)description;
-(id)init;
@end

