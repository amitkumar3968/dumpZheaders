/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMessageFetchAttachmentConsumer.h"
#import "MFDAMailAccountConsumer.h"

@class ActivityMonitor, NSData, NSMutableData;

@interface _MFDAMessageFetchAttachmentConsumer : MFDAMailAccountConsumer <DAMessageFetchAttachmentConsumer> {
	NSMutableData* _accumulatedData;
	unsigned _expectedLength;
	ActivityMonitor* _monitor;
	BOOL _dataWasBase64;
	BOOL _fetchSucceeded;
}
@property(readonly, assign) BOOL fetchSucceeded;	// @synthesize=_fetchSucceeded
@property(readonly, assign) BOOL dataWasBase64;	// @synthesize=_dataWasBase64
@property(assign, nonatomic) unsigned expectedLength;	// @synthesize=_expectedLength
@property(readonly, assign, nonatomic) NSData* accumulatedData;	// @synthesize=_accumulatedData
// declared property getter: -(BOOL)fetchSucceeded;
// declared property getter: -(BOOL)dataWasBase64;
// declared property setter: -(void)setExpectedLength:(unsigned)length;
// declared property getter: -(unsigned)expectedLength;
// declared property getter: -(id)accumulatedData;
-(void)dealloc;
-(id)initWithActivityMonitor:(id)activityMonitor;
-(void)attachmentFetchCompletedWithStatus:(int)status forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID dataWasBase64:(BOOL)a64;
-(void)consumeData:(id)data ofContentType:(id)contentType forAttachmentNamed:(id)attachmentNamed ofMessageWithServerID:(id)serverID;
@end

