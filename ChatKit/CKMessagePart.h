/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol CKMessage;

@interface CKMessagePart : XXUnknownSuperclass {
	int _rowID;
	int _outgoingBubbleColor;
	id<CKMessage> _parentMessage;
}
@property(assign, nonatomic) int outgoingBubbleColor;	// @synthesize=_outgoingBubbleColor
@property(assign, nonatomic) int rowID;	// @synthesize=_rowID
@property(assign, nonatomic) id<CKMessage> parentMessage;	// @synthesize=_parentMessage
+(id)copyUnknownPart;
+(id)copyDeletedPart;
+(id)copyMessagePartsFromComposition:(id)composition;
+(id)copyMessagePartsFromComposition:(id)composition attachmentParts:(id*)parts;
+(id)copyDetachedMessageParts:(id)parts;
+(id)_newPartsForNode:(id)node resources:(id)resources attachments:(id*)attachments;
+(id)_assembleTextPartFromRange:(id)range;
// declared property setter: -(void)setOutgoingBubbleColor:(int)color;
// declared property getter: -(int)outgoingBubbleColor;
// declared property getter: -(int)rowID;
// declared property setter: -(void)setParentMessage:(id)message;
// declared property getter: -(id)parentMessage;
-(void)copyToPasteboard;
-(id)composeData;
-(id)previewData;
-(void)dealloc;
// declared property setter: -(void)setRowID:(int)anId;
-(int)type;
-(id)detachedCopy;
-(id)imageFilename;
-(id)composeImages;
-(id)previewImage;
-(id)highlightData;
-(id)image;
-(id)imageData;
-(id)text;
-(BOOL)isDisplayable;
-(id)previewText;
-(id)mediaObject;
-(BOOL)isEqual:(id)equal;
@end

