/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSInputStream;

@interface PBMessageStreamReader : XXUnknownSuperclass {
@private
	NSInputStream* _stream;
	Class _classOfNextMessage;
}
@property(assign) Class classOfNextMessage;	// @synthesize=_classOfNextMessage
// declared property setter: -(void)setClassOfNextMessage:(Class)nextMessage;
// declared property getter: -(Class)classOfNextMessage;
-(id)nextMessage;
-(void)dealloc;
-(id)initWithStream:(id)stream;
@end

