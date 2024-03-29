/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "MFDAStreamingContentConsumer.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData;
@protocol MFMessageDataConsumerFactory, MFCollectingDataConsumer;

@interface MFDAMessageContentConsumer : XXUnknownSuperclass <MFDAStreamingContentConsumer> {
	int _requestedFormat;
	id<MFCollectingDataConsumer> _dataConsumer;
	id<MFCollectingDataConsumer> _alternatePartConsumer;
	id<MFMessageDataConsumerFactory> _consumerFactory;
	BOOL _triedCreatingAlternatePartConsumer;
	BOOL _succeeded;
	NSMutableData* _bodyData;
	double _timeOfLastActivity;
}
@property(readonly, assign, nonatomic) double timeOfLastActivity;	// @synthesize=_timeOfLastActivity
@property(readonly, assign, nonatomic) NSMutableData* bodyData;	// @synthesize=_bodyData
@property(retain, nonatomic) id<MFMessageDataConsumerFactory> consumerFactory;	// @synthesize=_consumerFactory
@property(retain, nonatomic) id<MFCollectingDataConsumer> alternatePartConsumer;	// @synthesize=_alternatePartConsumer
@property(retain, nonatomic) id<MFCollectingDataConsumer> dataConsumer;	// @synthesize=_dataConsumer
@property(assign, nonatomic) int requestedFormat;	// @synthesize=_requestedFormat
@property(readonly, assign) BOOL succeeded;	// converted property
// declared property getter: -(double)timeOfLastActivity;
// declared property setter: -(void)setRequestedFormat:(int)format;
// declared property getter: -(int)requestedFormat;
// declared property setter: -(void)setConsumerFactory:(id)factory;
// declared property getter: -(id)consumerFactory;
// declared property getter: -(id)bodyData;
// declared property setter: -(void)setAlternatePartConsumer:(id)consumer;
// declared property getter: -(id)alternatePartConsumer;
// declared property setter: -(void)setDataConsumer:(id)consumer;
// declared property getter: -(id)dataConsumer;
-(void)dealloc;
-(id)dataConsumerForPart:(id)part;
// converted property getter: -(BOOL)succeeded;
-(id)data;
-(void)didEndStreamingForMailMessage:(id)mailMessage;
-(void)consumeData:(char*)data length:(int)length format:(int)format mailMessage:(id)message;
-(BOOL)shouldBeginStreamingForMailMessage:(id)mailMessage format:(int)format;
@end

